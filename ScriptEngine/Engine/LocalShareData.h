#pragma once
#include <API/APIHelp.h>
#include <map>
#include <string>
#include <third-party/ThreadPool/ThreadPool.hpp>
#include <mutex>


//////////////////// Structs ////////////////////

//命令回调信息结构体
struct CmdCallbackData
{
	ScriptEngine* fromEngine;
	int perm;
	script::Global<Function> func;
};

//命令延迟注册队列
struct RegCmdQueue
{
	std::string cmd;
	std::string describe;
	int level;
};

//命令回调map排序
static struct CmdCallbackMapCmp
{
	bool operator() (std::string const& a, std::string const& b) const
	{
		if (a.size() != b.size())
			return a.size() > b.size();
		else
			return a > b;
	}
};

//DLL本地共享数据
struct LocalDataType
{
	//是否是第一个ScriptEngine实例
	bool isFirstInstance = true;

	//玩家命令回调
	std::map<std::string, CmdCallbackData, CmdCallbackMapCmp> playerCmdCallbacks;

	//控制台命令回调
	std::map<std::string, CmdCallbackData, CmdCallbackMapCmp> consoleCmdCallbacks;

	// 真指令回调
	std::map<std::string, CmdCallbackData, CmdCallbackMapCmp> commandCallbacks;
};


//////////////////// Externs ////////////////////

//DLL本地共享数据
extern LocalDataType* localShareData;

//命令延迟注册队列
extern std::vector<RegCmdQueue> toRegCmdQueue;

//本地引擎表
extern std::vector<ScriptEngine*> currentModuleEngines;

//线程池
extern ThreadPool pool;

extern std::mutex messageLoopLock;

//////////////////// APIs ////////////////////

void InitLocalShareData();