// Exp - 13
// Siddhesh
// 25070123505
#include <iostream>
using namespace std;
class Add{
public:
    Add(int a, int b){
        cout << "a + b = "<<a+b<<endl;
    }
    Add(float a, float b){
        cout << "Float a + b = "<<a+b<<endl;
    }
    Add(int a, int b,int c){
        cout << "a + b + c = "<<a+b+c<<endl;
    }
};
int main() {
    Add a(15,25);
    Add b(16.25f,15.76f);
    Add c(10,20,30);
    return 0;
}

Output :-
a + b = 40
Float a + b = 32.01
a + b + c = 60


=== Code Execution Successful ===
