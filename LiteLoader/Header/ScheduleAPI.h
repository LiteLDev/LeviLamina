#pragma once
#include <Global.h>
#include <Utils/PluginOwnData.h>

typedef unsigned long long tick_t;
typedef unsigned int taskid_t;

namespace Schedule
{
    inline tick_t ticknow;
    inline taskid_t gtaskid;

    extern LIAPI tick_t _tick;

    struct TaskBase
    {
        tick_t schedule_time;
        tick_t interval;
        taskid_t taskid;
        std::function<void(void)> cb;

        TaskBase(std::function<void(void)>&& fn, tick_t time_diff, tick_t interval, taskid_t tid)
            : schedule_time(Schedule::ticknow + time_diff), interval(interval), taskid(tid), cb(std::move(fn))
        {}
    };

    LIAPI bool cancel(taskid_t id);
    LIAPI taskid_t schedule(TaskBase&& task);
    LIAPI void scheduleNext(std::function<void()>&& fn);

    struct delay : Schedule::TaskBase
    {
        delay(std::function<void(void)>&& fn, tick_t time_diff)
            : Schedule::TaskBase(std::move(fn), time_diff, 0, ++Schedule::gtaskid)
        {}
    };

    struct repeat : Schedule::TaskBase
    {
        repeat(std::function<void(void)>&& fn, tick_t interval)
            : Schedule::TaskBase(std::move(fn), 0, interval, ++Schedule::gtaskid)
        {}
    };

    struct delayRepeat : Schedule::TaskBase
    {
        delayRepeat(std::function<void(void)>&& fn, tick_t time_diff, tick_t interval)
            : Schedule::TaskBase(std::move(fn), time_diff, interval, ++Schedule::gtaskid)
        {}
    };
};