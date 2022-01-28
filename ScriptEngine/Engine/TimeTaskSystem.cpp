#include <API/APIHelp.h>
#include "TimeTaskSystem.h"
#include <Engine/EngineOwnData.h>
#include <map>
#include <vector>
using namespace std;

struct TimeTaskData
{
    script::Global<Value> func;
    bool isFunc;
    int interval;
    vector<script::Global<Value>> paras;
};

int timeTaskId = 0;
std::unordered_map<int, TimeTaskData*> timeTaskMap;

#define TIMETASK_ID data0

void HandleTimeTaskMessage(script::utils::Message& msg);
void CleanUpTimeTaskMessage(script::utils::Message& msg);


void NewTimeTask(int timeTaskId, int timeout)
{
    script::utils::Message timeTask(HandleTimeTaskMessage, CleanUpTimeTaskMessage);
    timeTask.TIMETASK_ID = timeTaskId;

    EngineScope::currentEngine()->messageQueue()->postMessage(timeTask, std::chrono::milliseconds(timeout));
}

void HandleTimeTaskMessage(script::utils::Message& msg)
{
    try
    {
        int id = msg.TIMETASK_ID;
        TimeTaskData* data;
        
        try
        {
            data = timeTaskMap.at(id);
        }
        catch (const out_of_range& e)
        {
            return;
        }
    
        int nextInterval = data->interval;
        bool isInterval = (nextInterval != 0);
    
        bool isFunc = data->isFunc;
        script::Global<Value>* func = &data->func;
        vector<script::Global<Value>>* paras = &data->paras;

        try
        {
            if (func->isEmpty())
            {
                ClearTimeTask(id);
                return;
            }

            if (isFunc)
            {
                if(paras->empty())
                    func->get().asFunction().call();
                else
                {
                    vector<Local<Value>> args;
                    for (auto& para : *paras)
                        args.emplace_back(para.get());
                    func->get().asFunction().call({}, args);
                }
            }
            else
                EngineScope::currentEngine()->eval(func->get().toStr());
        }
        catch (const Exception& e)
        {
            logger.error(string("Error occurred in ") + (isInterval ? "setInterval" : "setTimeout"));
            PrintException(e);
            logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
        }
        catch (const std::exception& e)
        {
            logger.error(string("Error occurred in ") + (isInterval ? "setInterval" : "setTimeout"));
            logger.error("C++ Uncaught Exception Detected!");
            logger.error(e.what());
            logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
        }
        catch (const seh_exception& e)
        {
            logger.error(string("Error occurred in ") + (isInterval ? "setInterval" : "setTimeout"));
            logger.error("SEH Uncaught Exception Detected!");
            logger.error(e.what());
            logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
        }

        if (isInterval)
        {
            NewTimeTask(id, nextInterval);
        }
        else
        {
            ClearTimeTask(id);
        }
    }
    catch (...)
    {
        logger.error("Error occurred in TimeTask!");
        logger.error("Uncaught Exception Detected!");
        return;
    }
}

void CleanUpTimeTaskMessage(script::utils::Message& msg)
{
    ;
}

//////////////////// Funcs ////////////////////

int NewTimeout(Local<Function> func, const vector<Local<Value>> paras, int timeout)
{
    vector<script::Global<Value>> arr;
    for (auto& para : paras)
        arr.emplace_back(para);

    timeTaskMap[++timeTaskId] = new TimeTaskData{ script::Global<Value>(func), true, 0, std::move(arr) };
    NewTimeTask(timeTaskId, timeout);
    return timeTaskId;
}

int NewTimeout(Local<String> func, int timeout)
{
    timeTaskMap[++timeTaskId] = new TimeTaskData{ script::Global<Value>(func), false, 0, {} };
    NewTimeTask(timeTaskId, timeout);
    return timeTaskId;
}

int NewInterval(Local<Function> func, const vector<Local<Value>> paras, int timeout)
{
    vector<script::Global<Value>> arr;
    for (auto& para : paras)
        arr.emplace_back(para);

    timeTaskMap[++timeTaskId] = new TimeTaskData{ script::Global<Value>(func), true, timeout, std::move(arr) };
    NewTimeTask(timeTaskId, timeout);
    return timeTaskId;
}

int NewInterval(Local<String> func, int timeout)
{
    timeTaskMap[++timeTaskId] = new TimeTaskData{ script::Global<Value>(func), false, timeout, {} };
    NewTimeTask(timeTaskId, timeout);
    return timeTaskId;
}

bool ClearTimeTask(int id)
{
    try
    {
        delete timeTaskMap.at(id);
        timeTaskMap.erase(id);
    }
    catch (...)
    {
        ;
    }
    return true;
}