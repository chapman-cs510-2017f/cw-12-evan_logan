#include <iostream>
using namespace std;

//NOT MY CODE, THIS IS FROM THE INTERNET AND SERVES AS
//A GOOD EXAMPLE OF A CLASS AND POINTERS.
//FOR PERSONAL REFERENCE ONLY
class SomeClass
{
public:
       int mydata;
       bool someTruth;

       SomeClass()
       {
              mydata = 0;
              someTruth = false;
       }
};

int main()
{
        SomeClass mySomeClass;  // Not a pointer...
        SomeClass *pSomeClass;  // we defined the pointer.
        pSomeClass = new SomeClass; // we allocate the pointer.

        // accessing the stuff beyond the pointer.
        pSomeClass->mydata = 10; // we assigned mydata, the object's member, to 10.
        pSomeClass->someTruth = true;  // now we made someTruth, the object's member, to true
        // the previous too lines are basically similar to
        mySomeClass.mydata = 10;
        mySomeClass.someTruth = true;

        // agian accessing the member of the pointer of SomeClass
        if(pSomeClass->someTruth == true)
        {
               cout << "pSomeClass->someTruth was True" << endl;
        }

        // clean up the pointer
        delete pSomeClass;

        return 0;
}