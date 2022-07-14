//this function will return the value pressed
//"principal function"

int keyc()
{
    

  while(1)
  {
    //creating a temporaly variable.
    int a, i;
    //if i == AnyKey then return i.
    for(i = 0x01; i < 0xFE;i++)
    {
        // a = function, i = returned value.
        a = GetAsyncKeyState(i);
        // the function always returns -32767, but the "i" variable return the pressed key.
        if(a == -32767)
        {
            //returning the pressed value.
            return i;           
        }
    }
  }  
}