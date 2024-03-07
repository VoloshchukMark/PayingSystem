#ifndef BANKSYSTEM_H
#define BANKSYSTEM_H


class BankSystem
{
private:
    double const annualSalary;//річна заробітня плата
public:
    static int numberOfSalaries; //Кількість створених об'єктів зарплат
    void showAnnualSalary() const;
    void weeklyGrossPay() const;
    void bi_weeklyGrossPay()const;
    void monthlyGrossPay()const;
    void semi_monthlyGrossPay()const;
    void salaryCompare(const BankSystem &other) const;
    void showNumberOfSalaries() const;

    BankSystem();
    BankSystem(double setAnnualSalary);
    ~BankSystem();

};

#endif // BANKSYSTEM_H
