#include<iostream>
#include<string>
using namespace std;

int main()
{

    string letters{};
    cout<<"Enter a string of letters so I can create a letter pyramid from it:";
    getline(cin,letters);
    size_t num_letters=letters.length();
    int position{0};

    //for each letters in the string
    for(char c:letters)
    {

        size_t num_spaces=num_letters-position;
        while(num_spaces>0)
        {
            cout<<" ";
            --num_spaces;
        }
        //Display in order up to the current character
        for(size_t j=0;j<position;j++)
        {
            cout<<letters.at(j);
        }
        //Display the current center character

        cout<<c;

        //Display the remaining character in reverse order

        for(int j=position-1;j>=0;--j)
        {
            //You can use this to get rid of the size_t vs int warning if you want


            auto k=static_cast<size_t>(j);
            cout<<letters.at(k);
        }

        cout<<endl;
        ++position;
    }
    return 0;
}
