#pragma once
#include <iostream>
#include <boost/filesystem/operations.hpp>
#include <filesystem>
using namespace std;
namespace fs = boost::filesystem;
class Clear_kash
{
public:
	void clear_temp(string);
	void clear_TEMP();
	void clear_prefetch();
	void stop_sc();
};

