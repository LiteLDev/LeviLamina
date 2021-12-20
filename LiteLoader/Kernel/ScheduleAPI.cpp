#include <ScheduleAPI.h>
#include <Utils/CsLock.h>
#include <queue>
#include <atomic>
using namespace std;

CsLock locker;

class ScheduleTaskQueueType : public priority_queue<ScheduleTask>
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

        while (true)
        {
            const ScheduleTask& t = top();
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
                    ScheduleTask sche{ t };
                    sche.leftTime = sche.interval;
                    push(std::move(sche));
                }
                else if (t.count > 0)
                {
                    //Finite Repeat
                    ScheduleTask sche{ t };
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
atomic_uint nextTaskId = 0;


ScheduleTask::ScheduleTask(std::function<void(void)> task, unsigned long long delay, unsigned long long interval, int count)
    :task(task), leftTime(delay), interval(interval), count(count), taskId(nextTaskId++)
{ }

bool ScheduleTask::cancel()
{
    locker.lock();
    bool res = taskQueue.remove(taskId);
    locker.unlock();
    return res;
}

namespace Schedule
{
    ScheduleTask delay(std::function<void(void)> task, unsigned long long tickDelay)
    {
        ScheduleTask sche(task, tickDelay, -1, -1);
        locker.lock();
        taskQueue.push(sche);
        locker.unlock();
        return sche;
    }

    ScheduleTask repeat(std::function<void(void)> task, unsigned long long tickRepeat, int maxCount)
    {
        ScheduleTask sche(task, tickRepeat, tickRepeat, maxCount);
        locker.lock();
        taskQueue.push(sche);
        locker.unlock();
        return sche;
    }

    ScheduleTask delayRepeat(std::function<void(void)> task, unsigned long long tickDelay, unsigned long long tickRepeat, int maxCount)
    {
        ScheduleTask sche(task, tickDelay, tickRepeat, maxCount);
        locker.lock();
        taskQueue.push(sche);
        locker.unlock();
        return sche;
    }

    ScheduleTask nextTick(std::function<void(void)> task)
    {
        ScheduleTask sche(task, 1, -1, -1);
        locker.lock();
        taskQueue.push(sche);
        locker.unlock();
        return sche;
    }
}

THook(void, "?tick@ServerLevel@@UEAAXXZ",
    void* _this)
{
    original(_this);
    taskQueue.tick();
}

