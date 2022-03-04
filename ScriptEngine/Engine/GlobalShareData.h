#include <API/APIHelp.h>
#include "EngineManager.h"
#include <vector>
#include <list>
#include <string>
#include <map>
#include <mutex>

//////////////////// Structs ////////////////////

//导出函数表
struct ExportedFuncData
{
	std::string fromEngineType;
	ScriptEngine* engine;
	script::Global<Function> func;
};

//消息系统处理函数信息
struct MessageHandlers
{
	script::utils::Message::MessageProc* handler;
	script::utils::Message::MessageProc* cleaner;
};

//全局共享数据
struct GlobalDataType
{
	//引擎管理器表
	std::list<ScriptEngine*> globalEngineList;

	//注册过的命令
	std::unordered_map<std::string, std::string> playerRegisteredCmd;
	std::unordered_map<std::string, std::string> consoleRegisteredCmd;

	//导出函数表
	std::unordered_map<std::string, ExportedFuncData> exportedFuncs;

	//模块消息系统
	int messageSystemNextId = 0;
	std::map<std::string, MessageHandlers> messageSystemHandlers;
	std::map<std::string, HANDLE> messageThreads;

	//OperationCount
	std::map<std::string, int> operationCountData;
};


//////////////////// Externs ////////////////////

//全局共享数据
extern GlobalDataType* globalShareData;


//////////////////// APIs ////////////////////

void InitGlobalShareData();