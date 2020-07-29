# this is my demo build file
#!/usr/bin/env bash
echo "This is a bash script, this is the first line"
echo "This is the second one, it will run after the first one"

c++ -c -Idir/ src/subtract.cpp -o build/subtract.o -I./include/

c++ -c -Idir/ src/sum.cpp -o build/sum.o -I./include/

# always start the name of your library with 'lib'
ar rcs build/libipb_arithmetic.a build/sum.o build/subtract.o


# it is interesting to see that we refer to the library as -lipb_arithmetic :)
c++  -Idir/ src/main.cpp -L ./build -lipb_arithmetic -o ./results/bin/test_ipb_arithmetic -I./include/
