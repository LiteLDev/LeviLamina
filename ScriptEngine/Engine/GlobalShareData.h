#include <API/APIHelp.h>
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

//全局引擎数据
struct ScriptEngineData
{
	string moduleType;
	string pluginName;
	ScriptEngine* engine;
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
	//总引擎表
	std::vector<ScriptEngineData> engines;

	//注册过的命令
	std::unordered_map<std::string, std::string> playerRegisteredCmd;
	std::unordered_map<std::string, std::string> consoleRegisteredCmd;

	//导出函数表
	std::unordered_map<std::string, ExportedFuncData> exportedFuncs;

	//模块消息系统
	int messageSystemNextId = 0;
	std::map<std::string, MessageHandlers> messageSystemHandlers;

	//fastlog多线程锁
	std::mutex fastlogLock;

	//OperationCount
	std::map<std::string, int> operationCountData;
};


//////////////////// Externs ////////////////////

//全局共享数据
extern GlobalDataType* globalShareData;


//////////////////// APIs ////////////////////

void InitGlobalShareData();