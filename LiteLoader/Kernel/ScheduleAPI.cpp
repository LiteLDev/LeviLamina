#include <ScheduleAPI.h>
#include <Utils/CsLock.h>
#include <queue>
#include <atomic>
using namespace std;

CsLock locker;
atomic_uint nextTaskId = 0;

class ScheduleTaskData
{
    friend class ScheduleTaskQueueType;

    unsigned int taskId;
    int leftTime, interval, count;
    std::function<void(void)> task;

public:
    ScheduleTaskData::ScheduleTaskData(std::function<void(void)> task, unsigned long long delay, unsigned long long interval, int count)
        :task(task), leftTime(delay), interval(interval), count(count), taskId(nextTaskId++)
    { }

    inline unsigned int getTaskId()
    {
        return taskId;
    }

    inline bool operator<(const ScheduleTaskData& t) const
    {
        return leftTime < t.leftTime;
    }
};


class ScheduleTaskQueueType : public priority_queue<ScheduleTaskData>
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

    inline void tick()
    {
        locker.lock();
        for (size_t i = 0; i < c.size(); ++i)
            --c[i].leftTime;
        if (empty)
            return;

        while (true)
        {
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

            if (t.interval > 0)
            {
                //Repeat
                if (t.count < 0)
                {
                    //Infinite Repeat
                    ScheduleTaskData sche{ t };
                    sche.leftTime = sche.interval;
                    push(std::move(sche));
                }
                else if (t.count > 0)
                {
                    //Finite Repeat
                    ScheduleTaskData sche{ t };
                    sche.leftTime = sche.interval;
                    --sche.count;
                    push(std::move(sche));
                }
            }
            //Once or Repeat reaches max count
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
        ScheduleTaskData sche(task, tickDelay, -1, -1);
        locker.lock();
        taskQueue.push(sche);
        locker.unlock();
        return ScheduleTask(sche.getTaskId());
    }

    ScheduleTask repeat(std::function<void(void)> task, unsigned long long tickRepeat, int maxCount)
    {
        ScheduleTaskData sche(task, tickRepeat, tickRepeat, maxCount);
        locker.lock();
        taskQueue.push(sche);
        locker.unlock();
        return ScheduleTask(sche.getTaskId());
    }

    ScheduleTask delayRepeat(std::function<void(void)> task, unsigned long long tickDelay, unsigned long long tickRepeat, int maxCount)
    {
        ScheduleTaskData sche(task, tickDelay, tickRepeat, maxCount);
        locker.lock();
        taskQueue.push(sche);
        locker.unlock();
        return ScheduleTask(sche.getTaskId());
    }

    ScheduleTask nextTick(std::function<void(void)> task)
    {
        ScheduleTaskData sche(task, 1, -1, -1);
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