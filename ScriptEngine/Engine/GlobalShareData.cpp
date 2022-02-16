#include <API/APIHelp.h>
#include <Engine/GlobalShareData.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <map>
#include <Configs.h>
#include "LocalShareData.h"
using namespace std;


//全局共享数据
GlobalDataType* globalShareData;


void InitGlobalShareData()
{
	HANDLE hGlobalData = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, sizeof(GlobalDataType), (LLSE_GLOBAL_DATA_NAME + to_wstring(GetCurrentProcessId())).c_str());
	if (hGlobalData == NULL)
	{
		logger.error(tr("init.fileMapping.fail"));
		localShareData->isFirstInstance = true;
		return;
	}

	LPVOID address = MapViewOfFile(hGlobalData, FILE_MAP_READ | FILE_MAP_WRITE, 0, 0, 0);
	if (address == NULL)
	{
		logger.error(tr("init.mapFile.fail"));
		localShareData->isFirstInstance = true;
		return;
	}

	if (GetLastError() != ERROR_ALREADY_EXISTS)
	{
		//First Time
		localShareData->isFirstInstance = true;
		globalShareData = new (address) GlobalDataType;
	}
	else
	{
		//Existing
		localShareData->isFirstInstance = false;
		globalShareData = (GlobalDataType*)address;
	}
}