#include <API/APIHelp.h>
#include "TimeTaskSystem.h"
#include "MessageSystem.h"
#include <Engine/EngineOwnData.h>
#include <ScheduleAPI.h>
#include <map>
#include <vector>
using namespace std;

int timeTaskId = 0;
std::unordered_map<int, ScheduleTask> timeTaskMap;

#define TIMETASK_CATCH(TASK_TYPE) \
    catch (const Exception& e) \
    { \
        EngineScope scope(engine); \
        logger.error("Error occurred in {}", TASK_TYPE); \
        PrintException(e); \
        logger.error("In Plugin: " + ENGINE_GET_DATA(engine)->pluginName); \
    } \
    catch (const std::exception& e) \
    { \
        logger.error("Error occurred in {}", TASK_TYPE); \
        logger.error("C++ Uncaught Exception Detected!"); \
        logger.error(e.what()); \
        logger.error("In Plugin: " + ENGINE_GET_DATA(engine)->pluginName); \
    } \
    catch (const seh_exception& e) \
    { \
        logger.error("Error occurred in {}", TASK_TYPE); \
        logger.error("SEH Uncaught Exception Detected!"); \
        logger.error(e.what()); \
        logger.error("In Plugin: " + ENGINE_GET_DATA(engine)->pluginName); \
    }



//////////////////// API ////////////////////

int NewTimeout(Local<Function> func, const vector<Local<Value>> paras, int timeout)
{
    vector<script::Global<Value>> arr;
    for (auto& para : paras)
        arr.emplace_back(para);

    ++timeTaskId;
    timeTaskMap[timeTaskId] = Schedule::delay(
        [engine{EngineScope::currentEngine()}, id{timeTaskId}, func{script::Global<Function>(func)}, paras{std::move(arr)}]()
    {
        try {
            EngineScope scope(engine);
            if (paras.empty())
                func.get().call();
            else
            {
                vector<Local<Value>> args;
                for (auto& para : paras)
                    args.emplace_back(para.get());
                func.get().call({}, args);
            }
            timeTaskMap.erase(id);
        }
        TIMETASK_CATCH("setTimeout");
    }, timeout);
    return timeTaskId;
}

int NewTimeout(Local<String> func, int timeout)
{
    ++timeTaskId;
    timeTaskMap[timeTaskId] = Schedule::delay(
        [engine{ EngineScope::currentEngine() }, id{ timeTaskId }, func{ script::Global<String>(func) }]()
    {
        try {
            EngineScope scope(engine);
            engine->eval(func.get().toString());
            timeTaskMap.erase(id);
        }
        TIMETASK_CATCH("setTimeout");
    }, timeout);
    return timeTaskId;
}

int NewInterval(Local<Function> func, const vector<Local<Value>> paras, int timeout)
{
    vector<script::Global<Value>> arr;
    for (auto& para : paras)
        arr.emplace_back(para);

    ++timeTaskId;
    timeTaskMap[timeTaskId] = Schedule::repeat(
        [engine{ EngineScope::currentEngine() }, id{ timeTaskId }, func{ script::Global<Function>(func) }, paras{ std::move(arr) }]()
    {
        try {
            EngineScope scope(engine);
            if (paras.empty())
                func.get().call();
            else
            {
                vector<Local<Value>> args;
                for (auto& para : paras)
                    args.emplace_back(para.get());
                func.get().call({}, args);
            }
        }
        TIMETASK_CATCH("setInterval");
    }, timeout);
    return timeTaskId;
}

int NewInterval(Local<String> func, int timeout)
{
    ++timeTaskId;
    timeTaskMap[timeTaskId] = Schedule::repeat(
        [engine{ EngineScope::currentEngine() }, id{ timeTaskId }, func{ script::Global<String>(func) }]()
    {
        try {
            EngineScope scope(engine);
            engine->eval(func.get().toString());
        }
        TIMETASK_CATCH("setInterval");
    }, timeout);
    return timeTaskId;
}

bool ClearTimeTask(int id)
{
    try
    {
        timeTaskMap.at(id).cancel();
        timeTaskMap.erase(id);
    }
    catch (...)
    {
        ;
    }
    return true;
}