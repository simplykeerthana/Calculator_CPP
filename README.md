# Calculator_CPP
A C++ calculator application with efficient user of memory, process user inputs, and mimics a production-grade application. This application is special because of the unique memmory management coding style, the code keeps track of the prevValue using C++ memory mangagement techniques. 


To run the application: 

git clone https://github.com/Madhakee01/Calculator_CPP.git

cd Caclulator_CPP

Complie: g++  -pthread -std=c++17 -o main Calc.cpp main.cpp
run: ./main

Input: Enter the number of expressions you want to calculate like 1, 2, or 3.

If n==1, then you will be asked to enter the expressions numbers one-by-one like +1, -3, *6, /2. This is a design choice to explore c++ memory management techniques.

Screenshots of Running Code...

to compile and run

<img width="1001" alt="compile_run" src="https://user-images.githubusercontent.com/34112414/105639663-93c85200-5e47-11eb-89ee-e582b1f32276.png">


running with 1 expressions:

<img width="1001" alt="1_expreessions" src="https://user-images.githubusercontent.com/34112414/105639680-a8a4e580-5e47-11eb-91f6-04acaa27c1a6.png">


running with 2 expressions:

<img width="1001" alt="2_expressions" src="https://user-images.githubusercontent.com/34112414/105639686-b490a780-5e47-11eb-8a62-b11534ed822c.png">

running with 3 expressions:

<img width="1001" alt="3_expressions" src="https://user-images.githubusercontent.com/34112414/105639702-c3775a00-5e47-11eb-9266-d8f55911ef75.png">



This program should run with n number of expressions. To improve this application, I will add UI to imitate a real calculator UI, the memory management code will ensure to give user a real calculator expressions. Also C++ code and efficieny ensures that the application is faster. 
