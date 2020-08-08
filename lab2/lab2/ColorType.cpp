#include "ColorType.h"

//TODO: ��������� +
void PrintColor(const ColorType &color)
{
	switch (color)
	{
		//TODO: RSDN +
	case Red:      cout << "�������";   break;
	case Orange:   cout << "���������"; break;
	case Yellow:   cout << "������";    break;
	case Green:    cout << "�������";   break;
	case Blue:     cout << "�������";   break;
	case DarkBlue: cout << "�����";     break;
	case Purple:   cout << "����������"; break;
	}
}

ColorType ReadColor(const int numColor)
{
	
	//TODO: �� ��������� ������ ����� �������������� �������� � ������ 6 +
	if (!IsValueInRange(numColor, 0, 6))
	{
		throw exception("����� �� ������ � ���������� ��������");
	}
	switch (numColor)
	{
		//TODO: RSDN +
	case 0: return Red;
	case 1: return Orange;
	case 2: return Yellow;
	case 3: return Green;
	case 4: return Blue;
	case 5: return DarkBlue;
	case 6: return Purple;
	}
}

//TODO: ��������� +
int CountRed(ColorType* colors, const int colorsCount)
{
	int redCount = 0;
	for (int i = 0; i < colorsCount; i++)
	{
		if (colors[i] == Red)
		{
			redCount++;
		}
	}
	return redCount;
}

//TODO: ��������� +
int CountColor(ColorType* colors, const int colorsCount,
	ColorType &findedColor)
{
	int colorCount = 0;
	for (int i = 0; i < colorsCount; i++)
	{
		if (colors[i] == findedColor)
		{
			colorCount++;
		}
	}
	return colorCount;
}