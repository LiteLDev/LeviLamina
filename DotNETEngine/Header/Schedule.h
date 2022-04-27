#pragma once
#include <ScheduleAPI.h>
#include "../Main/.NETGlobal.hpp"
namespace LLNET::Schedule
{
public
ref class ScheduleTask
{
    ::ScheduleTask* _this;

public:
    ScheduleTask(::ScheduleTask& s);
    ScheduleTask(unsigned int taskId);
    !ScheduleTask();
    ~ScheduleTask();
    bool Cancel();
    property unsigned int TaskId
    {
        unsigned int get();
    }
};

public
ref class ScheduleAPI abstract
{
public:
    delegate void TaskDelegate(void);
    inline static ScheduleTask ^ Delay(TaskDelegate ^ task, unsigned long long tickDelay);
    inline static ScheduleTask ^ Delay(TaskDelegate ^ task, unsigned long long tickDelay, System::IntPtr handler);
    inline static ScheduleTask ^ Repeat(TaskDelegate ^ task, unsigned long long tickInterval);
    inline static ScheduleTask ^ Repeat(TaskDelegate ^ task, unsigned long long tickInterval, int maxCount);
    inline static ScheduleTask ^ Repeat(TaskDelegate ^ task, unsigned long long tickInterval, int maxCount, System::IntPtr handler);
    inline static ScheduleTask ^ DelayRepeat(TaskDelegate ^ task, unsigned long long tickDelay, unsigned long long tickInterval);
    inline static ScheduleTask ^ DelayRepeat(TaskDelegate ^ task, unsigned long long tickDelay, unsigned long long tickInterval, int maxCount);
    inline static ScheduleTask ^ DelayRepeat(TaskDelegate ^ task, unsigned long long tickDelay, unsigned long long tickInterval, int maxCount, System::IntPtr handler);
    inline static ScheduleTask ^ NextTick(TaskDelegate ^ task);
    inline static ScheduleTask ^ NextTick(TaskDelegate ^ task, System::IntPtr handler);
};
} // namespace LLNET::Schedule
