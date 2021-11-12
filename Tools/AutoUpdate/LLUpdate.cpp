#include "pch.h"
#define LL_UPDATE_CACHE_PATH "plugins/LiteLoader/Update/"
#define LL_UPDATE_INFO_RECORD "plugins/LiteLoader/Update/Update.ini"

#include <iostream>
#include <filesystem>
#include <string>
#include <vector>
#include <list>
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
		cout << "[LiteLoader][Info] LL Auto Upgrade working..." << endl;
		cout << "[LiteLoader][Info] LL自动更新工作中..." << endl;
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
				cout << "[LiteLoader][Error] MD5 Check failed! Auto Upgrade has not been finished." << endl;
				cout << "[LiteLoader][Error] MD5校验失败！自动更新未执行。" << endl;
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

			cout << "[LiteLoader][Info] Copying files..." << endl;
			cout << "[LiteLoader][Info] 正在更新文件..." << to << endl;

			std::error_code ec;
			if (!filesystem::copy_file(from, to, filesystem::copy_options::overwrite_existing, ec))
			{
				cout << "[LiteLoader][FATAL] Error occurred in Automatic Update! Files copy failed. Error Code ：" << ec << endl;
				cout << "[LiteLoader][FATAL] WARN! Incomplete update may cause LL to work abnormally." << endl;
				cout << "[LiteLoader][FATAL] It is recommended to manually update LiteLoader! " << endl;
				cout << "[LiteLoader][FATAL] 自动更新出现错误！文件复制失败。错误码：" << ec << endl;
				cout << "[LiteLoader][FATAL] 警告！自动更新不完整可能造成LL工作异常。建议前往LL相关链接手动更新加载器" << endl;
				ClearUpdates();
				return;
			}
		}

		ClearUpdates();
		cout << "[LiteLoader][Info] LL Upgrade finished successfully." << endl;
		cout << "[LiteLoader][Info] Updated to version：v" << newVer << endl;
		cout << "[LiteLoader][Info] LL自动更新已结束。" << endl;
		cout << "[LiteLoader][Info] 已更新到版本：v" << newVer << endl;
	}
}