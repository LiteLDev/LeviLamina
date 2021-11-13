#include <string>
#include <thread>
#include <chrono>
#include <process.h>
#include <filesystem>
#include <Version.h>
#include <Nlohmann/json.hpp>
#include <SimpleIni/SimpleIni.h>
#include <httplib/httplib.h>
#include <seh_exception/seh_exception.hpp>
#include <Utils/FileHelper.h>
#include <Utils/NetworkHelper.h>
#include <Utils/CryptHelper.h>
#include <Utils/StringHelper.h>
#include <LoggerAPI.h>
#include <ServerAPI.h>
#include <LLAPI.h>
#include "AutoUpgrade.h"
#include <Config.h>
using namespace std;
using namespace Logger;
using namespace LL;

enum class DownloadResult {
	Success, FailInit, FailDownload, FailDownloadMd5, FailCheckMd5
};

//Default MD5 File: filename + ".md5"
DownloadResult DownloadAndCheckMd5(const string& url, const string& localPath, bool isBinary, int *errorCode = nullptr, string *md5Rtn = nullptr)
{
	string domain, path;
	SplitHttpUrl(url, domain, path);

	//Init
	httplib::Client cli(domain.c_str());
	cli.set_connection_timeout(LL_UPDATE_CONNECTION_TIMEOUT, 0);
	if (!cli.is_valid())
	{
		if (errorCode)
			*errorCode = -1;
		return DownloadResult::FailInit;
	}

	//Download
	auto response = cli.Get(path.c_str());
	if (response && response->status == 200)
	{
		if (filesystem::exists(localPath))
			filesystem::remove(localPath);

		ios_base::openmode mode = ios::out;
		if (isBinary)
			mode |= ios::binary;

		ofstream fout(localPath, mode);
		fout << response->body;
		fout.close();
	}
	else
	{
		if (errorCode)
			*errorCode = response->status;
		return DownloadResult::FailDownload;
	}

	//Download MD5
	string md5;
	response = cli.Get((path + ".md5").c_str());
	if (response && response->status == 200)
	{
		md5 = response->body;
		if (md5.back() == '\n')
			md5.pop_back();
		if (md5.back() == '\r')
			md5.pop_back();
	}
	else
	{
		if (errorCode)
			*errorCode = response->status;
		return DownloadResult::FailDownloadMd5;
	}

	if (md5Rtn)
		*md5Rtn = md5;

	//CheckMD5
	auto content = ReadAllFile(localPath, true);
	if (!content || CalcMD5(*content) != md5)
	{
		if (errorCode)
			*errorCode = -1;
		return DownloadResult::FailCheckMd5;
	}
	return DownloadResult::Success;
}

bool CheckAutoUpdate(bool isUpdateManually, bool forceUpdate)
{
	try
	{
		//Get Dir Id
		int status;
		string id;
		if (!HttpGetSync(LL_RELAY_INDEX, &status, &id, LL_UPDATE_CONNECTION_TIMEOUT) || status != 200)
		{
			if (isUpdateManually)
				Log("LL自动更新连接失败！错误码：{}", status);
			else
				Debug("LL自动更新连接失败！错误码：{}", status);
			return false;
		}
		if (EndsWith(id, "\n"))
			id.pop_back();
		if (EndsWith(id, "\r"))
			id.pop_back();

		//Get Json
		string infoUrl = string(LL_UPDATE_URL_PREFIX) + "/" + id + LL_UPDATE_URL_PATH;
		string info;
		if (!HttpGetSync(infoUrl, &status, &info, LL_UPDATE_CONNECTION_TIMEOUT) || status != 200)
		{
			if (isUpdateManually)
				Log("LL自动更新信息拉取失败！错误码：{}", status);
			else
				Debug("LL自动更新信息拉取失败！错误码：{}", status);
			return false;
		}

		//Parse
		nlohmann::json data = nlohmann::json::parse(info, nullptr, true, true);

		//Check Other Files config
		if (!filesystem::exists(LL_UPDATE_OTHER_FILES_RECORD))
		{
			ofstream fout(LL_UPDATE_OTHER_FILES_RECORD);
			fout.flush();
			fout.close();
		}

		//Process Other Files
		auto iniVersions = new CSimpleIniA;
		iniVersions->SetUnicode(true);
		auto res = iniVersions->LoadFile(LL_UPDATE_OTHER_FILES_RECORD);
		if (res < 0)
		{
			Error("Failed in loading ini file");
			Error("Error Code: {}", res);
			delete iniVersions;
		}
		else
		{
			for (auto& file : data["OtherFiles"])
			{
				string fileName = file["Name"].get<string>();
				Version nowVersion = Version::parse(iniVersions->GetValue(fileName.c_str(), "Version", "0.0.0"));
				Version newVersion = Version::parse(file["Version"].get<string>());

				if (nowVersion < newVersion)
				{
					if (isUpdateManually)
					{
						Log("正在更新附属文件：{}", fileName);
					}
					else
						Debug("正在更新附属文件：{}", fileName);

					string path = file["Path"].get<string>();
					string remotePath = string(LL_UPDATE_URL_PREFIX) + "/" + id + path + fileName;
					string localPath = file["Install"].get<string>() + "/" + fileName;
					bool isBinary = file["IsBinary"].get<bool>();

					//Download File
					int errorCode;
					string md5;
					switch (DownloadAndCheckMd5(remotePath, localPath, isBinary, &errorCode, &md5))
					{
					case DownloadResult::Success:
						iniVersions->SetValue(fileName.c_str(), "Version", newVersion.toString().c_str());
						break;
					case DownloadResult::FailInit:
						if (isUpdateManually)
						{
							Log("附属文件更新 - 连接初始化失败！");
						}
						else
							Debug("附属文件更新 - 连接初始化失败！");
						break;
					case DownloadResult::FailDownload:
						if (isUpdateManually)
						{
							Log("附属文件更新 - 下载文件失败！错误码：{}", errorCode);
						}
						else
							Debug("附属文件更新 - 下载文件失败！错误码：{}", errorCode);
						break;
					case DownloadResult::FailDownloadMd5:
						if (isUpdateManually)
						{
							Log("附属文件更新 - 下载MD5校验文件失败！错误码：{}", errorCode);
						}
						else
							Debug("附属文件更新 - 下载MD5校验文件失败！错误码：{}", errorCode);
						break;
					case DownloadResult::FailCheckMd5:
						if (isUpdateManually)
						{
							Log("附属文件更新 - MD5校验失败！");
						}
						else
							Debug("附属文件更新 - MD5校验失败！");
						break;
					}
				}
			}
			iniVersions->SaveFile(LL_UPDATE_OTHER_FILES_RECORD);
			delete iniVersions;
		}

		//Check BDS Version
		string bds = LL::getBdsVersion();
		if (bds.front() == 'v')
			bds.erase(0, 1);
		if (!data[bds].is_object())
		{
			Info("提示：您的BDS版本不存在于当前主线维护版本中，自动更新将不会推送");
			Info("如果有需要，请前往LL相关页面手动更新加载器");
			if (isUpdateManually)
				return false;
			else
				_endthreadex(0);
		}
		else
		{
			//Get Version
			Version verRemote = Version::parse(data[bds]["Version"].get<string>());
			Version verCurrent = LITELOADER_VERSION;
			
			if(!forceUpdate && verCurrent >= verRemote)
			{
				if (isUpdateManually)
				{
					Log("当前LL已是最新版本，无需更新。");
				}
				return true;
			}

			//Check existing update
			auto ini = new CSimpleIniA;
			ini->SetUnicode(true);
			auto res = ini->LoadFile(LL_UPDATE_INFO_RECORD);
			if (res >= 0 && Version::parse(ini->GetValue("Info", "Version", "0.0.0")) == verRemote)
			{
				if (isUpdateManually)
				{
					Log("自动更新已下载完毕。请重启服务器升级到新版LL");
				}
				return true;
			}
			delete ini;

			//Init for Download
			if (isUpdateManually)
			{
				Log("检测到新版本，启动更新");
			}
			else
				Debug("检测到新版本，启动更新");
			filesystem::remove_all(LL_UPDATE_CACHE_PATH);
			filesystem::create_directories(LL_UPDATE_CACHE_PATH);

			//Downloading
			auto iniUpdate = new CSimpleIniA;
			iniUpdate->SetUnicode(true);
			for (auto& file : data[bds]["Files"])
			{
				string fileName = file["Name"].get<string>();
				if (isUpdateManually)
				{
					Log("正在下载更新：{}", fileName);
				}
				else
					Debug("正在下载更新：{}", fileName);

				string path = file["Path"].get<string>();
				string remotePath = string(LL_UPDATE_URL_PREFIX) + "/" + id + path + fileName;
				string localPath = LL_UPDATE_CACHE_PATH + fileName;
				bool isBinary = file["IsBinary"].get<bool>();

				//Download File
				int errorCode;
				string md5;
				switch (DownloadAndCheckMd5(remotePath,localPath,isBinary,&errorCode,&md5))
				{
				case DownloadResult::Success:
					break;
				case DownloadResult::FailInit:
					if (isUpdateManually)
					{
						Log("自动更新 - 连接初始化失败！");
					}
					else
						Debug("自动更新 - 连接初始化失败！");
					return false;
					break;
				case DownloadResult::FailDownload:
					if (isUpdateManually)
					{
						Log("自动更新 - 下载文件失败！错误码：{}", errorCode);
					}
					else
						Debug("自动更新 - 下载文件失败！错误码：{}", errorCode);
					return false;
					break;
				case DownloadResult::FailDownloadMd5:
					if (isUpdateManually)
					{
						Log("自动更新 - 下载MD5校验文件失败！错误码：{}", errorCode);
					}
					else
						Debug("自动更新 - 下载MD5校验文件失败！错误码：{}", errorCode);
					return false;
					break;
				case DownloadResult::FailCheckMd5:
					if (isUpdateManually)
					{
						Log("自动更新 - MD5校验失败！");
					}
					else
						Debug("自动更新 - MD5校验失败！");
					return false;
					break;
				}

				//Write to Update.ini
				string install = file["Install"].get<string>();
				iniUpdate->SetValue(fileName.c_str(), "Install", install.c_str());
				iniUpdate->SetValue(fileName.c_str(), "MD5", md5.c_str());
			}

			//Finish Download
			iniUpdate->SetValue("Info", "Version", verRemote.toString().c_str());
			iniUpdate->SaveFile(LL_UPDATE_INFO_RECORD);
			delete iniUpdate;

			Info("LL自动更新文件下载完毕。新版本：v{}", verRemote.toString());
			Info("在你下次重启服务器的时候，LL将自动更新为最新版本");
		}
	}
	catch (nlohmann::json::exception& e) {
		if (isUpdateManually)
		{
			Log("LL版本更新信息解析失败！{}", e.what());
		}
		else
			Debug("LL版本更新信息解析失败！{}", e.what());
	}
	catch (const seh_exception& e)
	{
		if (isUpdateManually)
		{
			Log("SEH Uncaught Exception Detected!\n{}", e.what());
			Log("In Auto Update system");
		}
		else
		{
			Debug("SEH Uncaught Exception Detected!\n{}", e.what());
			Debug("In Auto Update system");
		}
	}
	catch (...)
	{
		if (isUpdateManually)
		{
			Log("LL自动更新发生错误！");
		}
		else
			Debug("LL自动更新发生错误！");
	}
	return false;
}

void AddPreload()
{
	fstream fPreload(LL_UPDATE_CHECK_PRELOAD, ios::out | ios::in | ios::app);
	fPreload.seekg(0, ios::beg);

	string path;
	while (getline(fPreload, path))
	{
		if (path.back() == '\n')
			path.pop_back();
		if (path.back() == '\r')
			path.pop_back();

		if (path == LL_UPDATE_PROGRAM)
			return;
	}
	fPreload.clear();
	fPreload << "\n" << LL_UPDATE_PROGRAM << endl;
}

void ClearUpdateLibrary()
{
	HMODULE hMod = GetModuleHandle(L"LLAutoUpdate.dll");
	if (hMod != NULL)
	{
		FreeLibrary(hMod);
	}
}

void InitAutoUpdateCheck()
{
	//Check Files
	if (!filesystem::exists(LL_UPDATE_PROGRAM))
	{
		Warn("LL自动更新系统未启动！自动更新程序缺失");
		return;
	}
	if (!filesystem::exists(LL_UPDATE_CACHE_PATH))
	{
		filesystem::create_directories(LL_UPDATE_CACHE_PATH);
	}
	ClearUpdateLibrary();
	AddPreload();

	std::thread([]()
	{
		_set_se_translator(seh_exception::TranslateSEHtoCE);
		while (true)
		{
			try
			{
				std::this_thread::sleep_for(std::chrono::seconds(LL_UPDATE_CHECK_INTERVAL));
				CheckAutoUpdate(false);
			}
			catch (const seh_exception& e)
			{
				Debug("SEH Uncaught Exception Detected!\n{}", e.what());
				Debug("In Auto Update system");
			}
		}
	}).detach();
}