#include <stdio.h>
#include <windows.h>
//importing function.
#include <C:\Users\BIG bernardo\Desktop\programaçao\Getkeys\modules\Getkeys.c>


int main()
{

    while(1)
    {
        //atribuing the function in the variable.
        int key = keyc();
        //printing the returned value's returned function and the returned funcion.
        printf("\n\t The number's value: %c \t\n\n\tThe returned value is: %i \t\n",key, key );
        /*
        for exemple= if you press "A".
        you'll see that in the console:

        The number's value: A
        The returned value is: 65
        */

       //ATENTION IF YOU WANT TO SEE THE KEYS' VALUE SEE THE README OR THE MICROSOFT WEBSITE: "https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes"
       //The key codes are writed in hexadecimal values.
    }
}
