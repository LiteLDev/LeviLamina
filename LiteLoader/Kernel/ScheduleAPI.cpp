#include <ScheduleAPI.h>
#include <Utils/CsLock.h>
#include <queue>
#include <atomic>
#include <Main/Config.h>
#include <Main/LiteLoader.h>
#include <LoggerAPI.h>
#include <LLAPI.h>
#include <Utils/DbgHelper.h>
#include <I18nAPI.h>

using namespace std;

CsLock locker;
atomic_uint nextTaskId = 0;

class ScheduleTaskData {
public:
    enum class TaskType {
        Delay, Repeat, InfiniteRepeat
    };
    unsigned int taskId;
    TaskType type;
    long long leftTime, interval;
    int count;
    std::function<void(void)> task;
    HMODULE handler;

    ScheduleTaskData::ScheduleTaskData(TaskType type, std::function<void(void)> task, unsigned long long delay,
                                       unsigned long long interval, int count, HMODULE handler)
            : type(type), task(task), leftTime((long long)delay), interval((long long)interval), count(count), taskId(nextTaskId++) ,handler(handler) {}

    inline unsigned int getTaskId() {
        return taskId;
    }

    inline bool operator>(const ScheduleTaskData &t) const {
        return leftTime > t.leftTime;
    }
};

std::vector<ScheduleTaskData> pendingTaskList;
std::vector<unsigned int> pendingCancelList;
bool pendingClear = false;

class ScheduleTaskQueueType
        : public priority_queue<ScheduleTaskData, vector<ScheduleTaskData>, greater<ScheduleTaskData>> {
public:
    bool remove(unsigned int taskId) {
        size_t size = c.size();
        bool removed = false;

        for (size_t i = 0; i < c.size(); ++i)
            if (c[i].taskId == taskId) {
                c[i] = c.back();
                c.pop_back();
                std::make_heap(c.begin(), c.end(), comp);  //重排二叉堆
                removed = true;
            }
        return removed;
    }

    void clear() {
        c.clear();
    }

    inline void tick()
    {
        if (pendingClear) {
            clear();
            locker.lock();
            pendingTaskList.clear();
            pendingCancelList.clear();
            pendingClear = false;
            locker.unlock();
            return;
        }
        if (!pendingTaskList.empty())
        {
            locker.lock();
            for (auto& task : pendingTaskList)
            {
                push(std::move(task));
            }
            pendingTaskList.clear();
            locker.unlock();
        }
        if (c.empty()) {
            return;
        }
        if (!pendingCancelList.empty()) {
            locker.lock();
            for (auto tid : pendingCancelList) {
                remove(tid);
            }
            pendingCancelList.clear();
            locker.unlock();
        }
        try {
            for (size_t i = 0; i < c.size(); ++i)
                --c[i].leftTime;

            while (true) {
                if (empty())
                    break;
                const ScheduleTaskData& t = top();
                if (t.leftTime > 0)
                    break;

                //timeout
                try {
                    if (!t.task)
                        continue;
                    t.task();

                    switch (t.type) {
                    case ScheduleTaskData::TaskType::InfiniteRepeat: {
                        ScheduleTaskData sche{ std::move(t) };
                        sche.leftTime = sche.interval;
                        push(std::move(sche));
                        break;
                    }
                    case ScheduleTaskData::TaskType::Repeat: {
                        if (t.count > 0) {
                            ScheduleTaskData sche{ std::move(t) };
                            sche.leftTime = sche.interval;
                            --sche.count;
                            push(std::move(sche));
                        }
                        break;
                    }
                    default:
                        break;
                    }
                }
                catch (const seh_exception& e) {
                    logger.error("SEH exception occurred in ScheduleTask!");
                    logger.error("{}", TextEncoding::toUTF8(e.what()));
                    logger.error("TaskId: {}", t.taskId);
                    if (auto plugin = LL::getPlugin(t.handler))
                        logger.error("Plugin: {}", plugin->name);
                }
                catch (const std::exception& e) {
                    logger.error("Exception occurred in ScheduleTask!");
                    logger.error("{}", TextEncoding::toUTF8(e.what()));
                    logger.error("TaskId: {}", t.taskId);
                    if (auto plugin = LL::getPlugin(t.handler))
                        logger.error("Plugin: {}", plugin->name);
                }
                catch (...) {
                    logger.error("Exception occurred in ScheduleTask!");
                    logger.error("TaskId: {}", t.taskId);
                    if (auto plugin = LL::getPlugin(t.handler))
                        logger.error("Plugin: {}", plugin->name);
                }
                pop();
            }
        }
        catch (...) {
            logger.error("Exception occurred in ScheduleTask!");
            PrintCurrentStackTraceback();
        }

    }
};

ScheduleTaskQueueType taskQueue;


namespace Schedule {
    ScheduleTask delay(std::function<void(void)> task, unsigned long long tickDelay, HMODULE handler)
    {
        if (LL::globalConfig.serverStatus >= LL::LLServerStatus::Stopping)
            return ScheduleTask((unsigned) -1);
        ScheduleTaskData sche(ScheduleTaskData::TaskType::Delay, task, tickDelay, -1, -1, handler);
        locker.lock();
        pendingTaskList.push_back(sche);
        locker.unlock();
        return ScheduleTask(sche.getTaskId());
    }

    ScheduleTask repeat(std::function<void(void)> task, unsigned long long tickRepeat, int maxCount, HMODULE handler)
    {
        if (LL::globalConfig.serverStatus >= LL::LLServerStatus::Stopping)
            return ScheduleTask((unsigned) -1);
        ScheduleTaskData::TaskType type = maxCount < 0 ?
                                          ScheduleTaskData::TaskType::InfiniteRepeat
                                                       : ScheduleTaskData::TaskType::Repeat;
        ScheduleTaskData sche(type, task, tickRepeat, tickRepeat, maxCount, handler);
        locker.lock();
        pendingTaskList.push_back(sche);
        locker.unlock();
        return ScheduleTask(sche.getTaskId());
    }

    ScheduleTask delayRepeat(std::function<void(void)> task, unsigned long long tickDelay,
        unsigned long long tickRepeat, int maxCount, HMODULE handler)
    {
        if (LL::globalConfig.serverStatus >= LL::LLServerStatus::Stopping)
            return ScheduleTask((unsigned)-1);
        ScheduleTaskData::TaskType type = maxCount < 0 ? ScheduleTaskData::TaskType::InfiniteRepeat
                                                       : ScheduleTaskData::TaskType::Repeat;
        ScheduleTaskData sche(type, task, tickDelay, tickRepeat, maxCount, handler);
        locker.lock();
        pendingTaskList.push_back(sche);
        locker.unlock();
        return ScheduleTask(sche.getTaskId());
    }

    ScheduleTask nextTick(std::function<void(void)> task, HMODULE handler)
    {
        if (LL::globalConfig.serverStatus >= LL::LLServerStatus::Stopping)
            return ScheduleTask((unsigned) -1);
        ScheduleTaskData sche(ScheduleTaskData::TaskType::Delay, task, 1, -1, -1, handler);
        locker.lock();
        pendingTaskList.push_back(sche);
        locker.unlock();
        return ScheduleTask(sche.getTaskId());
    }
}

THook(void, "?tick@ServerLevel@@UEAAXXZ",
      void *_this) {
    original(_this);
    taskQueue.tick();
}

void EndScheduleSystem()
{
    pendingClear = true;
}


ScheduleTask::ScheduleTask(unsigned int taskId)
        : taskId(taskId) {}

bool ScheduleTask::cancel() {
    locker.lock();
    pendingCancelList.push_back(taskId);
    locker.unlock();
    return true;
}