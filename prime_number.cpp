#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int n, status = 1, num = 3, count, c;
   cin >> n;

   if (n >= 1)
   {
      cout << 2 << endl;
   }

   for (count = 2; count <=n; )
   {
      for (c = 2; c <= (int)sqrt(num); c++)
      {
         if (num%c == 0)
         {
            status = 0;
            break;
         }
      }
      if (status != 0)
      {
         cout << num << endl;
         count++;
      }
      status = 1;
      num++;
   }

   return 0;
}
