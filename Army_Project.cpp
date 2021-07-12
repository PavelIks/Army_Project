#include <iostream>

class Weapon
{
public:
	virtual void func_1() = 0;
	virtual void func_2() = 0;
};

class C_Child : public Weapon
{
public:
	virtual void func_1() override { std::cout << "func 1 of child\n"; }
	virtual void func_2() override { std::cout << "func 2 of child\n"; }
};