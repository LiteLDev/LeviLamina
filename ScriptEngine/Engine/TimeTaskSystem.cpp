#include <API/APIHelp.h>
#include "TimeTaskSystem.h"
#include "MessageSystem.h"
#include <Engine/EngineOwnData.h>
#include <ScheduleAPI.h>
#include <Utils/STLHelper.h>
#include <map>
#include <vector>
using namespace std;

int timeTaskId = 0;
struct TimeTaskData
{
    ScheduleTask task;
    script::Global<Function> func;
    vector<script::Global<Value>> paras;
    script::Global<String> code;
    ScriptEngine *engine;
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

int NewTimeout(Local<Function> func, vector<Local<Value>> paras, int timeout)
{
    ++timeTaskId;

    timeTaskMap[timeTaskId].func = func;
    timeTaskMap[timeTaskId].engine = EngineScope::currentEngine();
    for (auto& para : paras)
        timeTaskMap[timeTaskId].paras.emplace_back(std::move(para));

    timeTaskMap[timeTaskId].task = Schedule::delay(
        [engine{EngineScope::currentEngine()}, id{timeTaskId}]()
    {
        try {
            if (timeTaskMap.find(id) == timeTaskMap.end())
                return;
            auto& taskData = timeTaskMap.at(id);

            EngineScope scope(engine);
            if (taskData.paras.empty())
                taskData.func.get().call();
            else
            {
                vector<Local<Value>> args;
                for (auto& para : taskData.paras)
                    args.emplace_back(para.get());
                taskData.func.get().call({}, args);
            }
            timeTaskMap.erase(id);
        }
        TIMETASK_CATCH("setTimeout");
    }, timeout / 50);
    return timeTaskId;
}

int NewTimeout(Local<String> func, int timeout)
{
    ++timeTaskId;

    timeTaskMap[timeTaskId].code = func;
    timeTaskMap[timeTaskId].engine = EngineScope::currentEngine();

    timeTaskMap[timeTaskId].task = Schedule::delay(
        [engine{ EngineScope::currentEngine() }, id{ timeTaskId }]()
    {
        try {
            if (timeTaskMap.find(id) == timeTaskMap.end())
                return;
            auto& taskData = timeTaskMap.at(id);
            EngineScope scope(engine);
            engine->eval(taskData.code.get().toString());
            timeTaskMap.erase(id);
        }
        TIMETASK_CATCH("setTimeout");
    }, timeout / 50);
    return timeTaskId;
}

int NewInterval(Local<Function> func, vector<Local<Value>> paras, int timeout)
{
    ++timeTaskId;

    timeTaskMap[timeTaskId].func = func;
    timeTaskMap[timeTaskId].engine = EngineScope::currentEngine();
    for (auto& para : paras)
        timeTaskMap[timeTaskId].paras.emplace_back(std::move(para));

    timeTaskMap[timeTaskId].task = Schedule::repeat(
        [engine{ EngineScope::currentEngine() }, id{ timeTaskId }]()
    {
        try {
            if (timeTaskMap.find(id) == timeTaskMap.end())
                return;
            auto& taskData = timeTaskMap.at(id);

            EngineScope scope(engine);
            if (taskData.paras.empty())
                taskData.func.get().call();
            else
            {
                vector<Local<Value>> args;
                for (auto& para : taskData.paras)
                    args.emplace_back(para.get());
                taskData.func.get().call({}, args);
            }
        }
        TIMETASK_CATCH("setInterval");
    }, timeout / 50);
    return timeTaskId;
}

int NewInterval(Local<String> func, int timeout)
{
    ++timeTaskId;

    timeTaskMap[timeTaskId].code = func;
    timeTaskMap[timeTaskId].engine = EngineScope::currentEngine();

    timeTaskMap[timeTaskId].task = Schedule::repeat(
        [engine{ EngineScope::currentEngine() }, id{ timeTaskId }]()
    {
        try {
            if (timeTaskMap.find(id) == timeTaskMap.end())
                return;
            auto& taskData = timeTaskMap.at(id);
            EngineScope scope(engine);
            engine->eval(taskData.code.get().toString());
        }
        TIMETASK_CATCH("setInterval");
    }, timeout / 50);
    return timeTaskId;
}

bool ClearTimeTask(int id)
{
    try
    {
        timeTaskMap.at(id).task.cancel();
        timeTaskMap.erase(id);
    }
    catch (...)
    {
        ;
    }
    return true;
}


///////////////////////// Func /////////////////////////

void LxlRemoveTimeTaskData(ScriptEngine* engine)
{
    erase_if(timeTaskMap, [engine](auto& dataPair) {
        if (dataPair.second.engine == engine)
        {
            dataPair.second.task.cancel();
            return true;
        }
        return false;
    });
}