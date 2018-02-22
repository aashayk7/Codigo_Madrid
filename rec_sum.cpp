#include<iostream>
using namespace std;

int recursive_sum_of_digits(int number)
{
    int rem,sum=0;
    while(number!=0)
    {
        rem=number%10;
        sum=sum+rem;
        number=number/10;
    }
    if(sum<10)
    {
        return sum;
    }
    return recursive_sum_of_digits(sum);
}

int main()
{
    int number,result;
    cin>>number;
    result=recursive_sum_of_digits(number);
    cout<<result<<endl;
    return 0;
}
