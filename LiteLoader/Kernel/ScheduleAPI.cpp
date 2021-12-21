#include <ScheduleAPI.h>
#include <Utils/CsLock.h>
#include <queue>
#include <atomic>
#include <Config.h>
using namespace std;

CsLock locker;
atomic_uint nextTaskId = 0;

class ScheduleTaskData
{
public:
    enum class TaskType {
        Delay, Repeat, InfiniteRepeat
    };

    unsigned int taskId;
    TaskType type;
    int leftTime, interval, count;
    std::function<void(void)> task;


    ScheduleTaskData::ScheduleTaskData(TaskType type, std::function<void(void)> task, unsigned long long delay, unsigned long long interval, int count)
        :type(type), task(task), leftTime(delay), interval(interval), count(count), taskId(nextTaskId++)
    { }

    inline unsigned int getTaskId()
    {
        return taskId;
    }

    inline bool operator>(const ScheduleTaskData& t) const
    {
        return leftTime > t.leftTime;
    }
};


class ScheduleTaskQueueType : public priority_queue<ScheduleTaskData,vector<ScheduleTaskData>,greater<ScheduleTaskData>>
{
public:
    bool remove(unsigned int taskId)
    {
        locker.lock();
        size_t size = c.size();
        bool removed = false;

        for (size_t i = 0; i < c.size(); ++i)
            if (c[i].taskId == taskId)
            {
                c[i] = c.back();
                c.pop_back();
                std::make_heap(c.begin(), c.end(), comp);  //重排二叉堆
                removed = true;
            }
        locker.unlock();
        return removed;
    }
    
    void clear()
    {
        locker.lock();
        c.clear();
        locker.unlock();
    }

    inline void tick()
    {
        locker.lock();
        if (c.empty())
        {
            locker.unlock();
            return;
        }

        for (size_t i = 0; i < c.size(); ++i)
            --c[i].leftTime;

        while (true)
        {
            if (empty())
                break;
            const ScheduleTaskData& t = top();
            if (t.leftTime >= 0)
                break;

            //timeout
            try {
                t.task();
            }
            catch (const seh_exception& e) {
                logger.error("SEH exception occurred in ScheduleTask!");
                logger.error("{}", e.what());
                logger.error("TaskId: {}", t.taskId);
            }
            catch (const std::exception& e) {
                logger.error("Exception occurred in ScheduleTask!");
                logger.error("{}", e.what());
                logger.error("TaskId: {}", t.taskId);
            }
            catch (...) {
                logger.error("Exception occurred in ScheduleTask!");
                logger.error("TaskId: {}", t.taskId);
            }

            switch (t.type)
            {
            case ScheduleTaskData::TaskType::InfiniteRepeat:
            {
                ScheduleTaskData sche{ t };
                sche.leftTime = sche.interval;
                push(std::move(sche));
                break;
            }
            case ScheduleTaskData::TaskType::Repeat:
            {
                if (t.count > 0)
                {
                    ScheduleTaskData sche{ t };
                    sche.leftTime = sche.interval;
                    --sche.count;
                    push(std::move(sche));
                }
                break;
            }
            default:
                break;
            }
            pop();
        }
        locker.unlock();
    }
};
ScheduleTaskQueueType taskQueue;


namespace Schedule
{
    ScheduleTask delay(std::function<void(void)> task, unsigned long long tickDelay)
    {
        if (LL::globalConfig.serverStatus >= LL::SeverStatus::Stopping)
            return ScheduleTask((unsigned)-1);
        ScheduleTaskData sche(ScheduleTaskData::TaskType::Delay, task, tickDelay, -1, -1);
        locker.lock();
        taskQueue.push(sche);
        locker.unlock();
        return ScheduleTask(sche.getTaskId());
    }

    ScheduleTask repeat(std::function<void(void)> task, unsigned long long tickRepeat, int maxCount)
    {
        if (LL::globalConfig.serverStatus >= LL::SeverStatus::Stopping)
            return ScheduleTask((unsigned)-1);
        ScheduleTaskData::TaskType type = maxCount < 0 ?
            ScheduleTaskData::TaskType::InfiniteRepeat : ScheduleTaskData::TaskType::Repeat;
        ScheduleTaskData sche(type, task, tickRepeat, tickRepeat, maxCount);
        locker.lock();
        taskQueue.push(sche);
        locker.unlock();
        return ScheduleTask(sche.getTaskId());
    }

    ScheduleTask delayRepeat(std::function<void(void)> task, unsigned long long tickDelay, unsigned long long tickRepeat, int maxCount)
    {
        if (LL::globalConfig.serverStatus >= LL::SeverStatus::Stopping)
            return ScheduleTask((unsigned)-1);
        ScheduleTaskData::TaskType type = maxCount < 0 ?
            ScheduleTaskData::TaskType::InfiniteRepeat : ScheduleTaskData::TaskType::Repeat;
        ScheduleTaskData sche(type, task, tickDelay, tickRepeat, maxCount);
        locker.lock();
        taskQueue.push(sche);
        locker.unlock();
        return ScheduleTask(sche.getTaskId());
    }

    ScheduleTask nextTick(std::function<void(void)> task)
    {
        if (LL::globalConfig.serverStatus >= LL::SeverStatus::Stopping)
            return ScheduleTask((unsigned)-1);
        ScheduleTaskData sche(ScheduleTaskData::TaskType::Delay, task, 1, -1, -1);
        locker.lock();
        taskQueue.push(sche);
        locker.unlock();
        return ScheduleTask(sche.getTaskId());
    }
}

THook(void, "?tick@ServerLevel@@UEAAXXZ",
    void* _this)
{
    original(_this);
    taskQueue.tick();
}

void EndScheduleSystem()
{
    taskQueue.clear();
}


ScheduleTask::ScheduleTask(unsigned int taskId)
    :taskId(taskId)
{ }

bool ScheduleTask::cancel()
{
    locker.lock();
    bool res = taskQueue.remove(taskId);
    locker.unlock();
    return res;
}