#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // cc_number needs to be long long
    long long cc_number;

    printf("Number:");
    cc_number=get_long_long();

    //  this counts the digits in cc_number.  i is temporary and
    // since it is an integer, the i/10 is also an integer

    int count = 0;
    long long i = cc_number;

    while(i !=0)
        {
            i=i/10;
            count++;
        }

    // x is a vector whose elements, x[j], are the digits of cc_number.
    // i is a temporary number to peal off the digits

    int x[count];
    i = cc_number;

    for(int j = 0; j < count; j++)
    {
        x[j] = i%10;
        i = i/10;
    }

    // sumx is the sum of the digits that get multiplied by 2.
    // The if statment inside the for loop checks to see if it is a 1 digit number

    int sumx = 0;

    for (int j = 1; j< count; j+= 2){

        if ((2*x[j] % 10) == 2*x[j]){
            sumx = sumx + 2*x[j];
        }
        else{
            // I am assuming that if it is 2 digits, the first is a 1
            sumx = sumx + 1 + (2*x[j])%10;
        }
    }

    // sumy is the sum of the digits that do not get mulitplied by 2
    int sumy = 0;

    for (int j = 0; j< count; j+= 2){
        // printf("%i \n", x[j]);
        sumy = sumy + x[j];
    }

    // first check to see if the sums are 0 mod 10.  If they are then check
    // to see if it is AMEX, MC or Visa
    if((sumx+sumy)%10 == 0){

        // check for amex
        if (count==15 && x[count-1]==3 && (x[count-2]==4 || x[count-2]==7)){
            printf("AMEX\n");
        }
        // Check for MC
        else if (count==16 && x[count-1]==5 && (x[count-2]==1 || x[count-2]==2 || x[count-2]==3 || x[count-2]==4 || x[count-2]==5)){
            printf("MASTERCARD\n");
        }
        // check for Visa
        else if ((count==16 || count == 13) && x[count-1]==4){
            printf("VISA\n");
        }
        else{
        printf("INVALID\n");
        }
    }
    else{
        printf("INVALID\n");
    }
}
