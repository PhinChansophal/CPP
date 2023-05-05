#include <iostream>
using namespace std;

float calculate_Discount(float amount_spent, char member, string coupon_code){
    float discount=0;
    if (amount_spent < 50) {
        discount = 0;
    } else if (amount_spent >= 50 && amount_spent < 100) {
        discount= 0.10;
    } else if (amount_spent >= 100 && amount_spent < 500) {
        discount= 0.20;
    } else {
        discount= 0.30;
    }
    
    if (member) {
        discount += 0.05;
    }

    if ("coupon_code,&&!is_member") {
        discount = max(discount,0.15f);
    } else if ("coupon_code &&! is_member") {
        discount= max(discount, 0.20f);
    }
	return  0;
}

int main() {
    float amount_spent;
    bool is_member;
    string coupon_code;

    cout << "Enter the amount spent :";
    cin >> amount_spent;

    cout << "The member is?:";
    cin >> is_member;

    cout <<"coupon code?:";
    cin >> coupon_code;

    discount = calculate_Discount(amount_spent,member, coupon_code);
	amount_discount=amount_spent*discount;
	final amount=amount_spent-total_discount;
	
	cout<<"total discount is:$"<<total_discount<<endl;
	cout<<"total discount is:$"
    cout << " total  discount is: $" << total_discount<< endl;
	cout<<"final amount :$"<<final_amount<<endl;
    return 0;
}
