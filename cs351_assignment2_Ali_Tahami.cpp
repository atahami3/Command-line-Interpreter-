// Simple Command Line Interpreter.
// Copyright (c) Ali Tahami 02/25/2022

#include <iostream>
#include <thread>
#include <string>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;
 
void sp(string n)
{
    system(n.c_str());
}

int main()
{
    while(1)
    {
        string Input;
        cout<<"Enter here"<<endl;
        getline(cin,Input);
        thread first (sp,Input);// spawn new thread that calls sp
        first.join();  //returns it
        if(Input == "exit")
        {
            exit(EXIT_SUCCESS);
        }
    }
    
  
  return 0;
}
