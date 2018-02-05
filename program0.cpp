/*

Name		: Program0.cpp
Author		: Krishna Rana
Description : This program is to help you with understanding vocareum platfrom.

*/
//pre-processor directives
#include <iostream>
#include <string>
#include <string.h>

//using namespace
using namespace std;

//function call
bool Size(string);

/*------------------
Main() function call
This is the function where all
statement are executed step by step.
-------------------*/
int main(int argc,char *argv[])
{
 	//Global constant variable
 	const int SMALL = 5;
 	const int MEDIUM = 10;
 	const int LARGE = 20;
 
 	//check if there is any or atleast one argument
 	if(argc > 1)
    {	
     	//checking if the first argument is valid.
     	if(!Size(argv[1]))
       	{	 
       		cout<<argv[1]<<" NOT A VALID SIZE"<<endl;
           	return 0;
        }
     	else
        {
     	//checking via loop to see if the arguments are small, medium, large.
     		for(int i = 2; i < argc; i++)
        	{
         		//storing the element of array
         		string specifiedSize = argv[1];
         		//visiting the array for small arguments
         		if(specifiedSize == "small")
            	{
             		if(strlen(argv[i]) >= SMALL)
                   	{
                    		cout<<argv[i]<<endl;
                   	}
            	}
         		//visiting the array for medium arguments
         		else if(specifiedSize == "medium")
            	{
             		if(strlen(argv[i]) >= MEDIUM)
                   	{	
                    	cout<<argv[i]<<endl;
                   	}
            	}
         		//visiting the array for large arguments
         		else if(specifiedSize == "large")
            	{
             		if(strlen(argv[i]) >= LARGE)
                   	{
                    	cout<<argv[i]<<endl;
                   	}
            	}	
         
        	}
        }
    }
 	//gives output if no arguments are found
 	else
    {
     	cout<<"MISSING SIZE"<<endl;
     	return 0;
    }
    
 	
	return 0;
}
/*-------------------------
Size() : This function checks if the string
that has been parsed to it matches variable defined
inside a function
--------------------------*/
bool Size(string sizeInfo)
{	
 	if(sizeInfo == "small")
     	return true;
 		else if(sizeInfo == "medium")
     		return true;
 			else if(sizeInfo == "large")
     			return true;
				else 
 					return false;
}