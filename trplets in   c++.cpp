   #include <cstdlib>
    #include<iostream>
    using namespace std;
    void Triplet(int[], int, int); 
    void Triplet(int array[], int n, int sum)
    {
       // Fix the first element and find other two
         for (int i = 0; i < n-2; i++)
         {
            // Fix the second element and find one
               for (int j = i; j < n-1; j++)
            {
               // Fix the third element
               for (int k = j; k < n; k++)
               if (array[i] + array[j] + array[k] == sum)
                cout << "Result :\t" << array[i] << " + " << array[j] << " + " << array[k]<<" = " << sum << endl;
             }
          }
     }

    int main()
    {
        int A[] = {-10,-20,30,-5,25,15,-2,12};
        int sum = 0;
        Triplet(A,8,sum);
        return 0;
    }
