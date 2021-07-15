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

class Ligh_armor : public Armour // Лёгкая броня
{

};

class Heavy_armor : public Armour // Тяжёлая броня
{

};

class Leather_armor : public Ligh_armor // Коженная броня
{

};

class Chain_mail : public Ligh_armor // Колчуга
{

};

class Plate_armor : public Heavy_armor // Латная броня
{

};

class Weapon // Оружие
{
public:
	virtual void attack() = 0;
	virtual void broke() = 0;
};

class Hand_Weapon : public Weapon // Ручное оружие
{
public:
	virtual void attack() override { std::cout << "Оружие, атака\n"; }
	virtual void broke() override { std::cout << "Оружие, ломаца\n"; }
	virtual void protection() = 0;
};
class Sword final : public  Hand_Weapon // Мечь
{
public:
	virtual void protection() override { std::cout << "Оружие, защита\n"; }
};
class Saber final : public Hand_Weapon // Сабля
{
public:
	virtual void protection() override { std::cout << "Оружие, защита\n"; }
};

class Ranged_Weapon : public Weapon // Оружие стрелковое
{
public:
	virtual void charging() = 0;
};
class Onion : public Ranged_Weapon // Лук
{
public:
	virtual void charging() override { std::cout << "Оружие, перезарядка\n"; }
};
class Crossbow final : public Onion // Арбалет
{
public:
	virtual void charging() override { std::cout << "Оружие, перезарядка\n"; }
};

class Polearms : public Weapon // Древковое оружие
{
public:
	virtual void burn() = 0;
};
class Spear : public Polearms // Копьё
{
public:
	virtual void burn() override { std::cout << "Оружие, гореть\n"; }
};
class Halberd final : public Spear // Алебарда
{
public:
	virtual void burn() override { std::cout << "Оружие, гореть\n"; }
};


int main()
{
	setlocale(LC_ALL, "Russian");
	//Weapon* obj = new Hand_Weapon();
	//obj->attack();
	//obj->broke();
}