#include "Clear_kash.h"
void Clear_kash::clear_temp(string UserName )
{
	fs::path root{ "C:\\Users" };
	fs::path Derectory{ "AppData\\Local\\Temp"};
	fs::path PathtoTemp = root / UserName / Derectory;
	fs::directory_iterator begin(PathtoTemp);
	fs::directory_iterator end;
	for (; begin != end; begin++)
	{
		try
		{
			if (fs::remove_all(*begin) == true)
			{
				cout << "\nDeleted: " << *begin;
			}
			else
			{
				cout << "\nUndeleted: " << *begin;
			}
		}
		catch (fs::filesystem_error& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

}
void Clear_kash::clear_TEMP()
{
	fs::directory_iterator begin("C:\\Windows\\Temp");
	fs::directory_iterator end;
	for (; begin != end; begin++)
	{
		try
		{
			if (fs::remove_all(*begin) == true)
			{
				cout << "\nDeleted: " << *begin;
			}
			else
			{
				cout << "\nUndeleted: " << *begin;
			}
		}
		catch (fs::filesystem_error& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
void Clear_kash::clear_prefetch()
{
	fs::directory_iterator begin("C:\\Windows\\Prefetch");
	fs::directory_iterator end;
	for (; begin != end; begin++)
	{
		try
		{
			if (fs::remove_all(*begin) == true)
			{
				cout << "\nDeleted: " << *begin;
			}
			else
			{
				cout << "\nUndeleted: " << *begin;
			}
		}
		catch (fs::filesystem_error& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

void Clear_kash::stop_sc()
{
	system("SC CONFIG HvHost start= disabled");
	system("SC CONFIG vmicheartbeat start= disabled");
	system("SC CONFIG vmicrdv start= disabled");
	system("SC CONFIG vmictimesync start= disabled");
	system("SC CONFIG vmicshutdown start= disabled");
	system("SC CONFIG vmickvpexchange start= disabled");
	system("SC CONFIG SensorService start= disabled");
	system("SC CONFIG SensorDataService start= disabled");
	system("SC CONFIG SensrSvc start= disabled");
	system("SC CONFIG WbioSrvc start= disabled");
	system("SC CONFIG XboxNetApiSvc start= disabled");
	system("SC CONFIG ClipSVC start= disabled");
	system("SC CONFIG lfsvc start= disabled");
	system("SC CONFIG DiagTrack start= disabled");
}
