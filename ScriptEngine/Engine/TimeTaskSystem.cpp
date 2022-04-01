#include <API/APIHelp.h>
#include "TimeTaskSystem.h"
#include "MessageSystem.h"
#include <Engine/EngineOwnData.h>
#include <Engine/EngineManager.h>
#include <ScheduleAPI.h>
#include <Utils/STLHelper.h>
#include <map>
#include <vector>
using namespace std;

atomic_int timeTaskId = 0;
CsLock locker;
struct TimeTaskData
{
    ScheduleTask task;
    script::Global<Function> func;
    vector<script::Global<Value>> paras;
    script::Global<String> code;
    ScriptEngine *engine;
    inline void swap(TimeTaskData& rhs)
    {
        std::swap(rhs.task, task);
        rhs.func.swap(func);
        rhs.paras.swap(paras);
        rhs.code.swap(code);
        std::swap(rhs.engine, engine);
    }
};
std::unordered_map<int, TimeTaskData> timeTaskMap;

#define TIMETASK_CATCH(TASK_TYPE) \
    catch (const Exception& e) \
    { \
        EngineScope scope(engine); \
        logger.error("Error occurred in {}", TASK_TYPE); \
        PrintException(e); \
        logger.error("In Plugin: " + ENGINE_GET_DATA(engine)->pluginName); \
    } \
    catch (const seh_exception& e) \
    { \
        logger.error("Error occurred in {}", TASK_TYPE); \
        logger.error("SEH Uncaught Exception Detected!"); \
        logger.error(TextEncoding::toUTF8(e.what())); \
        logger.error("In Plugin: " + ENGINE_GET_DATA(engine)->pluginName); \
    } \
    catch (const std::exception& e) \
    { \
        logger.error("Error occurred in {}", TASK_TYPE); \
        logger.error("C++ Uncaught Exception Detected!"); \
        logger.error(TextEncoding::toUTF8(e.what())); \
        logger.error("In Plugin: " + ENGINE_GET_DATA(engine)->pluginName); \
    } \
    catch (...) \
    { \
        logger.error("Error occurred in {}", TASK_TYPE); \
        logger.error("Uncaught Exception Detected!"); \
        logger.error("In Plugin: " + ENGINE_GET_DATA(engine)->pluginName); \
    }


//////////////////// API ////////////////////

//void NewTimeout_s(script::Global<Function> func, vector<script::Local<Value>> paras, int timeout, ScriptEngine* engine)
//{
//    std::vector<script::Global<Value>> tmp;
//    if (paras.size() > 0) {
//        EngineScope enter(engine);
//        for (auto& para : paras)
//            tmp.emplace_back(std::move(para));
//    }
//    Schedule::delay(
//        [engine, func = std::move(func), paras = std::move(tmp)]() {
//            if (LL::isServerStopping())
//                return;
//            if (!EngineManager::isValid(engine))
//                return;
//            EngineScope enter(engine);
//            if (paras.empty()) {
//                func.get().call();
//            }
//            else
//            {
//                vector<Local<Value>> args;
//                for (auto& para : paras)
//                    if (para.isEmpty())
//                        return;
//                    else
//                        args.emplace_back(para.get());
//                func.get().call({}, args);
//            }
//        },
//        timeout / 50);
//}

//#define CHECK_THREAD_ID

void assertTickThread()
{
    static thread::id tid = thread::id();
    static bool inited = ([]() {
        Schedule::nextTick([]() {
            tid = std::this_thread::get_id();
        });
        return true;
    })();
    if (tid == thread::id()) {
        //Schedule::nextTick([tid = std::this_thread::get_id()]() {
        //    if (tid != std::this_thread::get_id())
        //        __debugbreak();
        //});
    }
    else
    {
        if (tid != std::this_thread::get_id())
            __debugbreak();
    }

}

int NewTimeout(Local<Function> func, vector<Local<Value>> paras, int timeout)
{
#ifdef CHECK_THREAD_ID
    assertTickThread();
#endif // CHECK_THREAD_ID
    int tid = ++timeTaskId;
    TimeTaskData data;

    data.func = func;
    data.engine = EngineScope::currentEngine();
    for (auto& para : paras)
        data.paras.emplace_back(std::move(para));

    data.task = Schedule::delay(
        [engine{EngineScope::currentEngine()}, id{tid}]()
    {
        try {
            if (LL::isServerStopping())
                return;
            if (!EngineManager::isValid(engine))
                return;
            // lock after enter EngineScope to prevent deadlock
            EngineScope scope(engine);
            TimeTaskData taskData;
            locker.lock();
            auto t = timeTaskMap.find(id);
            if (t == timeTaskMap.end())
            {
                locker.unlock();
                return;
            }
            t->second.swap(taskData);
            timeTaskMap.erase(id);
            locker.unlock();

            if (taskData.func.isEmpty())
                return;
            auto func = taskData.func.get();
            if (taskData.paras.empty())
            {
                func.call();
            }
            else
            {
                vector<Local<Value>> args;
                for (auto& para : taskData.paras)
                    if (para.isEmpty())
                        return;
                    else
                        args.emplace_back(para.get());
                func.call({}, args);
            }
        }
        TIMETASK_CATCH("setTimeout-Function");
    }, timeout / 50);
    locker.lock();
    data.swap(timeTaskMap[tid]);
    locker.unlock();
    return tid;
}

int NewTimeout(Local<String> func, int timeout)
{
#ifdef CHECK_THREAD_ID
    assertTickThread();
#endif // CHECK_THREAD_ID
    int tid = ++timeTaskId;
    TimeTaskData data;

    data.code = func;
    data.engine = EngineScope::currentEngine();

    data.task = Schedule::delay(
        [engine{EngineScope::currentEngine()}, id{tid}]()
    {
        try {
            if (LL::isServerStopping())
                return;
            if (!EngineManager::isValid(engine))
                return;
            EngineScope scope(engine);
            TimeTaskData taskData;
            locker.lock();
            auto t = timeTaskMap.find(id);
            if (t == timeTaskMap.end())
            {
                locker.unlock();
                return;
            }
            t->second.swap(taskData);
            timeTaskMap.erase(id);
            locker.unlock();

            if (taskData.code.isEmpty())
                return;
            auto code = taskData.code.get().toString();
            engine->eval(code);
        }
        TIMETASK_CATCH("setTimeout-String");
    }, timeout / 50);

    locker.lock();
    data.swap(timeTaskMap[tid]);
    locker.unlock();
    return tid;
}

int NewInterval(Local<Function> func, vector<Local<Value>> paras, int timeout)
{
#ifdef CHECK_THREAD_ID
    assertTickThread();
#endif // CHECK_THREAD_ID
    int tid = ++ timeTaskId;
    TimeTaskData data;

    data.func = func;
    data.engine = EngineScope::currentEngine();
    for (auto& para : paras)
        data.paras.emplace_back(std::move(para));

    data.task = Schedule::repeat(
        [engine{EngineScope::currentEngine()}, id{tid}]()
    {
        try {
            if (LL::isServerStopping())
                return;
            if (!EngineManager::isValid(engine))
            {
                ClearTimeTask(id);
                return;
            }
            EngineScope scope(engine);

            locker.lock();

            auto t = timeTaskMap.find(id);
            if (t == timeTaskMap.end()) {
                locker.unlock();
                return;
            }

            TimeTaskData& taskData = t->second;

            if (taskData.func.isEmpty())
            {
                locker.unlock();
                return;
            }
            auto func = taskData.func.get();
            if (taskData.paras.empty())
            {
                locker.unlock();
                func.call();
            }
            else
            {
                vector<Local<Value>> args;
                for (auto& para : taskData.paras)
                    if (para.isEmpty())
                    {
                        locker.unlock();
                        return;
                    }
                    else
                        args.emplace_back(para.get());
                locker.unlock();
                func.call({}, args);
            }
        }
        TIMETASK_CATCH("setInterval-Function");
    }, timeout / 50);

    locker.lock();
    data.swap(timeTaskMap[tid]);
    locker.unlock();
    return tid;
}

int NewInterval(Local<String> func, int timeout)
{
#ifdef CHECK_THREAD_ID
    assertTickThread();
#endif // CHECK_THREAD_ID
    int tid = ++ timeTaskId;
    TimeTaskData data;

    data.code = func;
    data.engine = EngineScope::currentEngine();

    data.task = Schedule::repeat(
        [engine{EngineScope::currentEngine()}, id{tid}]()
    {
        try {
            if (LL::isServerStopping())
                return;
            if (!EngineManager::isValid(engine))
            {
                ClearTimeTask(id);
                return;
            }
            EngineScope scope(engine);
            locker.lock();

            auto t = timeTaskMap.find(id);
            if (t == timeTaskMap.end())
            {
                locker.unlock();
                return;
            }
            TimeTaskData& taskData = t->second;

            if (taskData.code.isEmpty())
            {
                locker.unlock();
                return;
            }
            auto code = taskData.code.get().toString();
            locker.unlock();
            engine->eval(code);
        }
        TIMETASK_CATCH("setInterval-String");
    }, timeout / 50);

    locker.lock();
    data.swap(timeTaskMap[tid]);
    locker.unlock();
    return tid;
}

bool ClearTimeTask(int id)
{
#ifdef CHECK_THREAD_ID
    assertTickThread();
#endif // CHECK_THREAD_ID
    try
    {
        TimeTaskData data;
        locker.lock();
        auto it = timeTaskMap.find(id);
        if (it != timeTaskMap.end())
        {
            data.swap(timeTaskMap[id]);
            timeTaskMap.erase(id);
        }
        locker.unlock();
    }
    catch (...)
    {
        logger.error("Fail in ClearTimeTask");
    }
    return true;
}


///////////////////////// Func /////////////////////////

void LxlRemoveTimeTaskData(ScriptEngine* engine)
{
#ifdef CHECK_THREAD_ID
    assertTickThread();
#endif // CHECK_THREAD_ID
    // dangerous
    //EngineScope scope(engine);
    //CsLockHolder lock(locker);
    //erase_if(timeTaskMap, [engine](auto& dataPair) {
    //    if (dataPair.second.engine == engine)
    //    {
    //        dataPair.second.task.cancel();
    //        return true;
    //    }
    //    return false;
    //});
    std::unordered_map<int, TimeTaskData> tmpMap;
    locker.lock();
    for (auto it = timeTaskMap.begin(); it != timeTaskMap.end();)
    {
        if (it->second.engine == engine)
        {
            it->second.swap(tmpMap[it->first]);
            it = timeTaskMap.erase(it);
        }
        else
            ++it;
    }
    locker.unlock();
    tmpMap.clear();

}