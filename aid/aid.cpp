#include "Clear_kash.h"
#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	Clear_kash ck;
	char choose;
	setlocale(LC_ALL, "RUS");
	char TempUserName[103];
	DWORD size;
	bool tr = true;
	size = sizeof(TempUserName);
	GetUserNameA(TempUserName, &size);
	string UserName = TempUserName;
	cout << "Добро пожаловать в проект ГЕНИЯ Василенко Дениса" << endl<<"AID version 1.0\n";
	while (tr == true)
	{
		cout << "\nЧто ты хочешь сделать?" << "\n1.Посмотреть параметры пк" << "\n2.Удалить Кэш(быстрая очистка)" << "\n3.Отключить ресурсоёмкие службы"
			<< "\n4.Выйти" << "\n\nТы выбрал: ";
		cin >> choose;
		switch (choose)
		{
		case '1':
			system("dxdiag");
			break;
		case '2':
			ck.clear_temp(UserName);
			ck.clear_prefetch();
			ck.clear_TEMP();
			break;
		case '3':
			ck.stop_sc();
			cout << "Чтобы изменения вступили в силу надо перезагрузить компьютер. Перезагрузить? Y or N:";
			char r;
			cin >> r;
			if (r == 'Y')
			{
				system("shutdown -r -t 0");
			}
			break;
		case '4':
			tr = false;
			break;
		}
		
	}
}

