#include "engine/LocalShareData.h"
#include "main/Configs.h"
#include <ThreadPool/ThreadPool.hpp>
#include <mutex>

// DLL本地共享数据
LocalDataType* localShareData;

//命令延迟注册队列
std::vector<RegCmdQueue> toRegCmdQueue;

//线程池
ThreadPool pool(LLSE_POOL_THREAD_COUNT);

std::mutex messageLoopLock;

void InitLocalShareData() {
    srand(clock());
    localShareData = new LocalDataType;
}