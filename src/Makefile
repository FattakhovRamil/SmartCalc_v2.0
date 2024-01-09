FLAGS = -Wall -Werror -Wextra -std=c++17 -pedantic -lstdc++
OS = $(shell uname)
ifeq ($(OS), Linux)
 CHECK_FLAGS = -lpthread -lcheck -pthread -lrt -lm -lsubunit -lgtest
else
 CHECK_FLAGS = -lcheck -lm -lpthread -lgtest
endif
MODEL = Model
VIEW = View/
CONTROLLER = Controller
MAIN = main.cc
CC = $(MODEL)/model.cc $(CONTROLLER)/controller.cc
H = $(MODEL)/*.h $(CONTROLLER)/*.h
VIEWCC = $(VIEW)/*.cc
VIEWH = $(VIEW)/*.h
TEST = tests/*.cc

all: install

test: clean s21_calc.a
	gcc $(FLAGS) $(CHECK_FLAGS) $(TEST) s21_calc.a -o test.out 
	./test.out

gcov_report:
	gcc $(FLAGS) -fprofile-arcs -ftest-coverage $(TEST) $(CC) $(CHECK_FLAGS) -o test
	./test
	lcov -t "test" --ignore-errors mismatch -o test.info --no-external -c -d  ./
	genhtml test.info -o report
	open report/index.html

s21_calc.a: s21_calc.o
	ar rcs s21_calc.a *.o
	ranlib *.a

s21_calc.o:
	gcc -c $(FLAGS) $(CC)


install:
	mkdir -p build/{Model,Controller,View}
	cp -rf calculator.pro build
	cp -rf Model/* build/Model
	cp -rf Controller/* build/Controller
	cp -rf View/* build/View
	cp -rf main.cc build
	cp -rf qcustomplot.* build
	cd build && qmake calculator.pro
	
	make -C build
	cd build && make clean
	open ./build/calculator.app/Contents/MacOS/calculator


uninstall:
	rm -rf build
	make clean


open:
	open open ./build/calculator.app/Contents/MacOS/calculator

run: install open

dvi:
	open dvi.txt

dist:
	tar -cvf build/calculator.tar build
	gzip build/calculator.tar
	mv build/calculator.tar.gz ./


style_correct:
	cp ../materials/linters/.clang-format .
	clang-format -i Model/*.cc
	clang-format -i Model/*.h
	clang-format -i Model/*.hpp
	clang-format -i Controller/*.cc
	clang-format -i Controller/*.h
	clang-format -i View/*.cc
	clang-format -i View/*.h
	rm .clang-format

style:
	cp ../materials/linters/.clang-format .
	clang-format -n Model/*.cc
	clang-format -n Model/*.h
	clang-format -n Controller/*.cc
	clang-format -n Controller/*.h
	clang-format -n View/*.cc
	clang-format -n View/*.h
	rm .clang-format

leak: test
	CK_FORK=no leaks --atExit -- ./test.out

install_brew:
	cd ~
	curl -fsSL https://rawgit.com/kube/42homebrew/master/install.sh | zsh
	brew install lcov

clean:
	rm -rf test *.out *.a *.o report/ *.info *.gcda *.gcno






