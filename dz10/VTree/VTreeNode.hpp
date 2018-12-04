#pragma once
#include <string.h>
#include <new>
#include "defines.hpp"


enum VType : unsigned char
{
	VSign,
	VVar,
	VNumb
};


class VTreeNode
{
public:
	VTreeNode();

	VType getType() const;
	double getDouble() const;
	char getChar() const;
	VTreeNode *getLeft() const;
	VTreeNode *getRight() const;

	int createLeft();
	int createRight();
	int setChar(const char &c);
	void setDouble(const double &numb);

private:
	VType m_type;
	double m_data;
	VTreeNode *m_left;
	VTreeNode *m_right;
};