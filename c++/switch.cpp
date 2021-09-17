#include<iostream>

using namespace std;

int main()  {
    int n;
    cin>>n;
    // YOUR CODE GOES HERE
   switch (n)
   {
   case 1:
      cout<<"monday";
       break;
    case 2:
      cout<<"tueday";
       break;
    case 3:
      cout<<"wednesday";
       break;
    case 4:
      cout<<"thursday";
       break;
    case 5:
      cout<<"friday";
       break;
    case 6:
      cout<<"saturday";
       break;
    case 7:
      cout<<"sunday";
       break;                  
   
   default:
   cout<<"enter number between 0 to 7";
       break;
   }
    
    return 0;
}