C_FLAGS=-Wall -Werror -Wextra -g -std=c11
OBJECTS=*.c
OBJ_TEST = s21_test/main.c s21_test/s21_test.c
UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Linux)
  	OPEN_CMD = xdg-open
	ADD_LIB = -lcheck -lsubunit -lm -lrt -lpthread -D_GNU_SOURCE
endif

ifeq ($(UNAME_S),Darwin)
	OPEN_CMD = open
	ADD_LIB = -lcheck
endif

all: clean install

s21_calculat.a:
	gcc $(C_FLAGS) -c $(OBJECTS)
	@ar rcs $@ $(OBJECTS)
	@rm -rf *.o
	@ranlib s21_calculat.a

install:
	@mkdir build
	@cd build/ && qmake  ../smartCalc/smartCalc.pro && make -j6
	@cp -rf build/smartCalc.app calculator
	@make clean

uninstall:
	rm -rf ../build

dvi:
	@$(OPEN_CMD) dvi.md

dist:
	@mkdir dist
	@cp -R smartCalc s21_test *.c *.h Makefile dist
	@cp -R dvi.md dist
	@cd dist && tar cvzf smartCalc_v1.0.tgz *
	@cd dist && rm -rf s21_test smartCalc *.c *.h Makefile dvi.md
	@rm -rf calculator

test: clean
	gcc $(C_FLAGS) --coverage $(OBJECTS) $(OBJ_TEST) -o test $(ADD_LIB)
	@./test

gcov_report: test
	@lcov -t "s21_SmartCalc_test" -o fizzbuzz.info -c -d .
	@genhtml -o report fizzbuzz.info
	@$(OPEN_CMD) -a "Google Chrome" report/src/index.html

clang:
	cp ../materials/linters/.clang-format .
	@clang-format -style=Google -n *.c *.h s21_test/*.c s21_test/*.h smartCalc/*.cpp SmartCalc/*.h
	@cppcheck --enable=all --suppress=missingIncludeSystem $(OBJECTS) s21_test/*.c s21_test/*.h

clean:
	@-rm -rf *.o *.gcno *.gcda *.info *.gcov *.a *.dSYM test report build* 

