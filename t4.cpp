
	#include <iostream>  
	#include <stack>  
	int main()  
	{  
	    std::stack<int> newstack;   
	    for(int j=7; j>0; j--)  
    newstack.push(j);  
    std::cout <<"Popping out elements?";  
    while (!newstack.empty () )  
    {  
	        std::cout <<" " << newstack.top();  
	        newstack.pop();  	    }  
	    std::cout<<"\n";  
	    return 0;  
	}  
