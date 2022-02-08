#include "LocalShareData.h"
#include <Configs.h>
#include <third-party/ThreadPool/ThreadPool.hpp>

//DLL本地共享数据
LocalDataType* localShareData;

//命令延迟注册队列
std::vector<RegCmdQueue> toRegCmdQueue;

//线程池
ThreadPool pool(LLSE_POOL_THREAD_COUNT);

void InitLocalShareData()
{
	srand(clock());
	localShareData = new LocalDataType;
}