FLAGS = -lm -lsubunit -lrt -lpthread 
CFLAGS =gcc

ifeq ($(shell uname -s), Linux)
	LFLAG += -lpthread -lrt -lm -lsubunit
endif

all: function_C.a

function_C.a:
	$(CFLAGS) -c -g ./lib_C/function_C.c
	ar rc function_C.a function_C.o
	ranlib function_C.a

test: clean function_C.a
	$(CFLAGS) -g ./Tests/*.c -o test function_C.a -lcheck $(LFLAG)
	./test

leaks: test
	valgrind -s --leak-check=full --track-origins=yes  ./test


gcov_report: clean

	$(CFLAGS) ./lib_C/*.c ./Tests/*.c -lcheck -o gcov_report --coverage $(LFLAG)
	./gcov_report
	rm -rf *test*.gc* 
	gcov *.c 
	lcov -d . -o gcov_report.info -c
	genhtml -o report gcov_report.info
	open report/index.html

style:
	clang-format -style=Google -i ./lib_C/*.c ./lib_C/*.h
	clang-format -style=Google -n ./lib_C/*.c ./lib_C/*.h
	clang-format -style=Google -i ./Tests/*.c ./Tests/*.h
	clang-format -style=Google -n ./Tests/*.c ./Tests/*.h
	clang-format -style=Google -i ./SmartCalc/*.cpp ./SmartCalc/*.h
	clang-format -style=Google -n ./SmartCalc/*.cpp ./SmartCalc/*.h

rebuild: clean all


install: clean
	mkdir calc 
	cd SmartCalc && qmake && make &&make clean &&rm Makefile
	mv calc ../calc

uninstall:
	rm -rf calc


dvi: clean
	cd doc && latex readme.tex && evince readme.dvi || (echo "Can't open preview, needs to install an app"; exit 1)



dist: install
	mkdir -p SmartCalc-1.0/src
	cp -r calc SmartCalc-1.0/src
	cp -r lib_C SmartCalc-1.0/src
	cp -r Tests SmartCalc-1.0/src
	cp -r SmartCalc SmartCalc-1.0/src
	cp -r doc SmartCalc-1.0/src
	cp Makefile SmartCalc-1.0/src
	tar cvzf SmartCalc-1.0.tgz SmartCalc-1.0 > /dev/null
	rm -rf SmartCalc-1.0 


clean:
	rm -f *.gcno *.gcda *.info *.gcov *.cpp *.h
	rm -f *.o *.a
	rm -rf report *.dSYM
	rm -f *.out
	rm -rf test
	rm -f gcov_report
	rm -rf SmartCalc-1.0.tgz
	rm -rf calc
	rm -rf doc/readme.aux doc/readme.dvi doc/readme.log
