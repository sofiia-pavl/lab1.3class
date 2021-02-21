#pragma once

class Fraction
{
private:
	int one;
	int two;
	int three;
	int four;
public:
	int getOne() const { return one; }
	int getTwo() const { return two; }
	int getThree() const { return three; }
	int getFour() const { return four; }
	void setOne(int value) { one = value; }
	void setTwo(int value) { two = value; }
	void setThree(int value) { three = value; }
	void setFour(int value) { four = value; }
	int getSub() const { return one - three && two - four; }

	void Init(int, int,int,int);
	void Read();
	void Display();
	const char* toString();
	void Comparison();

};

