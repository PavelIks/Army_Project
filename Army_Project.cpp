#include <iostream>

class Armour
{
public:
	virtual void lomatsa() = 0;
	virtual void prinat_udar(int moshnost_udara) = 0;
	virtual void getHP() = 0;
private:
	int protection; // прочность
	int weight; // вес
};

class Ligh_armor : public Armour
{

};

class Heavy_armor : public Armour
{

};

class Leather_armor : public Ligh_armor
{

};

class Chain_mail : public Ligh_armor
{

};

class Plate_armor : public Heavy_armor
{

};

class Weapon
{
public:
	virtual void attack() = 0;
	virtual void broke() = 0;
};

class Hand_Weapon : public Weapon
{
public:
	virtual void attack() override { std::cout << "Оружие, атака\n"; }
	virtual void broke() override { std::cout << "Оружие, ломаца\n"; }
	virtual void protection() = 0;
};
#pragma region Hand_Weapon: Sword & Saber
class Sword final : public  Hand_Weapon
{
public:
	virtual void protection() override { std::cout << "Оружие, защита\n"; }
};
class Saber final : public Hand_Weapon
{
public:
	virtual void protection() override { std::cout << "Оружие, защита\n"; }
};
#pragma endregion

class Ranged_Weapon : public Weapon
{
public:
	virtual void charging() = 0;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	//Weapon* obj = new Hand_Weapon();
	//obj->attack();
	//obj->broke();
}