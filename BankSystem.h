#ifndef BANKSYSTEM_H
#define BANKSYSTEM_H


class BankSystem
{
private:
    double const annualSalary;//річна заробітня плата
public:
    void showAnnualSalary();
    void weeklyGrossPay();
    void bi_weeklyGrossPay();
    void monthlyGrossPay();
    void semi_monthlyGrossPay();


    BankSystem();
    BankSystem(double setAnnualSalary);
    ~BankSystem();
};

#endif // BANKSYSTEM_H
