#define _CRT_SECURE_NO_WARNINGS
#define LL_UPDATE_CACHE_PATH "plugins/LiteLoader/Update/"
#define LL_UPDATE_INFO_RECORD "plugins/LiteLoader/Update/Update.ini"

#include <iostream>
#include <filesystem>
#include <string>
#include <vector>
#include <list>
#include <ctime>
#include "Hash/md5.h"
#include "SimpleIni.h"
using namespace std;

#define CHECK_MD5_READ_BUF 256*1024
bool Raw_CheckFileMD5(const string& path, const string& md5)
{
	auto calc = Chocobo1::MD5();
	char buff[CHECK_MD5_READ_BUF] = { 0 };

	FILE* fd;
	fopen_s(&fd, path.c_str(), "rb");
	while (!feof(fd))
	{
		int count = fread(buff, sizeof(char), CHECK_MD5_READ_BUF, fd);
		calc.addData(buff, count);
	}
	fclose(fd);

	return calc.finalize().toString() == md5;
}

void ClearUpdates()
{
	filesystem::remove_all(LL_UPDATE_CACHE_PATH);
}

string GetTimeString()
{
	time_t t = time(0);
	char ch[64];
	strftime(ch, sizeof(ch), "%H-%M-%S", localtime(&t));
	return string(ch);
}

void LLUpdate()
{
	if (!filesystem::exists(LL_UPDATE_INFO_RECORD))
		return;
		
	CSimpleIniA ini;
	ini.SetUnicode(true);
	ini.LoadFile(LL_UPDATE_INFO_RECORD);

	string newVer(ini.GetValue("Info", "Version", ""));
	if (!newVer.empty())
	{
		cout << "[" << GetTimeString() << " INFO][AutoUpgrade] LiteLoader Auto Upgrade System working..." << endl;
		list<CSimpleIniA::Entry> files;
		ini.GetAllSections(files);

		//Check MD5
		for (auto& file : files)
		{
			if (string(file.pItem) == "Info")
				continue;
			string from = string(LL_UPDATE_CACHE_PATH) + file.pItem;

			if (!Raw_CheckFileMD5(from, ini.GetValue(file.pItem, "MD5","")))
			{
				cout << "[" << GetTimeString() << " ERROR][AutoUpgrade] MD5 Check failed! Auto Upgrade has not been finished." << endl;
				ClearUpdates();
				return;
			}
		}

		//Update
		for (auto& file : files)
		{
			string name(file.pItem);
			if (name == "Info")
				continue;

			string from = LL_UPDATE_CACHE_PATH + name;
			string to = ini.GetValue(name.c_str(), "Install","") + string("/") + name;

			cout << "[" << GetTimeString() << " INFO][AutoUpgrade] Copying files..." << endl;

			std::error_code ec;
			if (!filesystem::copy_file(from, to, filesystem::copy_options::overwrite_existing, ec))
			{
				cout << "[" << GetTimeString() << " FATAL][AutoUpgrade] Error occurred in update process! Files copy failed. Error Code：" << ec << endl;
				cout << "[" << GetTimeString() << " FATAL][AutoUpgrade] WARN! Incomplete update may cause LiteLoader to work abnormally." << endl;
				cout << "[" << GetTimeString() << " FATAL][AutoUpgrade] It is recommended to manually update LiteLoader! " << endl;
				ClearUpdates();
				return;
			}
		}

		ClearUpdates();
		cout << "[" << GetTimeString() << " INFO][AutoUpgrade] LiteLoader Upgrade finished successfully." << endl;
		cout << "[" << GetTimeString() << " INFO][AutoUpgrade] Updated to version：v" << newVer << endl;
	}
}