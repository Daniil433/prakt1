Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@Daniil433 
An-Besruky
/
prakt1
Public
Code
Issues
Pull requests
Projects
Security
Insights
prakt1/example-3/Kazino-Royal.cpp
@MikeLupanov
MikeLupanov Initial commit
Latest commit bee4f88 on 12 Apr 2020
 History
 1 contributor
40 lines (39 sloc)  1.27 KB

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

int main()
{
    cout<<"Добро пожаловать в Казино-Роял\n";
    cout<<"Сыграем в кости?\n";
    cout<<"Ты загадываешь число - я бросаю кость.\n";
    cout<<"Если ты угадал с трех попыток - ты выиграл\n";
    cout<<"Нет - проиграл, и настало время отчислений\n";
    srandom(time(nullptr));
    for (int i = 0; i<3; i++) {
        cout<<"введите число от 1 до 6 : ";
        int num;
        cin >> num;
        if (!cin.good()) {
            cerr<<"Это было число?\n";
            return 2;
        }
        if ( ! isspace(cin.peek())) {
            cerr<<"Хвосты обрубаем\n";
            return 2;
        }
        if ( (num<1) || (num>6)) {
            cerr<<"С таким числом ты сразу проиграл\n";
            return 2;
        }
        int res = random() % 6 + 1;
        cout<<"Выпало число "<<res<<endl;
        if (num == res) {
            cout<<"Ты читер!!!\n";
            return 0;
        }
    }
    cout<<"Может в любви повезет?\n";
    return 1;
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
prakt1/Kazino-Royal.cpp at master · An-Besruky/prakt1
