#include <iostream>
#include <iomanip>
#include <limits>

void checkbal(double bal);
double deposit(double bal);
double widthraw(double bal);
struct accounts{
    int acc_num;
    std::string name, password;
};

int main(){
    char c;
    double bal=0;
    std::cout << "*************************************\n";
    std::cout << "Welcome to Hastl3's Banking System\n";
    std::cout << "*************************************\n";
    do{
    std::cout << "1. Check Balance\n2. Deposit\n3. Widthraw\n4. Exit\n";
    std::cout << "Choose an operation: ";
    std::cin >> c;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        switch(c)
            {
                case '1':
                checkbal(bal);
                break;
                case '2':
                bal=deposit(bal);
                break;
                case '3':
                bal=widthraw(bal);
                break;
                case '4':
                break;
                default:
                std::cout << "*************************************\n";
                std::cout << "Invalid Choice!!\n";
                std::cout << "*************************************\n";
                
            }
    }while(c!='4');

}
void checkbal(double bal){
    std::cout << "*************************************\n";
    std::cout << "Your Balance is " << std::fixed << std::setprecision(2) << bal <<"$\n";
    std::cout << "*************************************\n";
}
double deposit(double bal){
    double x;
    std::cout << "*************************************\n";
    std::cout << "Enter amount to deposit: ";
    std::cin >> x;
    if(x>0)
    bal+=x;
    else
    std::cout << "Deposited balance cannot be 0 or lower!!\n";
    checkbal(bal);
    return bal;
}
double widthraw(double bal){
    double x;
    std::cout << "*************************************\n";
    std::cout << "Enter amount to widthraw: ";
    std::cin >> x;
    if(x<=bal&&x>0)
    bal-=x;
    else
    std::cout << "Widthrawn balance cannot be Higher than current balance\n";
    checkbal(bal);
    return bal;
}