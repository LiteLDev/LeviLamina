#include "llapi/ScheduleAPI.h"
#include "llapi/utils/CsLock.h"
#include <queue>
#include <atomic>
#include "liteloader/Config.h"
#include "liteloader/LiteLoader.h"
#include "llapi/LoggerAPI.h"
#include "llapi/LLAPI.h"
#include "llapi/utils/DbgHelper.h"
#include "llapi/I18nAPI.h"

using namespace std;

CsLock locker;
atomic_uint nextTaskId = 0;

class ScheduleTaskData {
public:
    enum class TaskType {
        Delay,
        Repeat,
        InfiniteRepeat
    };
    unsigned int taskId;
    TaskType type;
    long long leftTime, interval;
    int count;
    std::function<void(void)> task;
    HMODULE handle;

    ScheduleTaskData(TaskType type, std::function<void(void)> task, unsigned long long delay,
                                       unsigned long long interval, int count, HMODULE handle)
    : type(type)
    , task(task)
    , leftTime((long long)delay)
    , interval((long long)interval)
    , count(count)
    , taskId(++nextTaskId)
    , handle(handle){};

    inline unsigned int getTaskId() {
        return taskId;
    }

    inline bool operator>(const ScheduleTaskData& t) const {
        return leftTime > t.leftTime;
    }
};

std::vector<ScheduleTaskData> pendingTaskList{};
std::vector<unsigned int> pendingCancelList{};
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
                std::make_heap(c.begin(), c.end(), comp); //重排二叉堆
                removed = true;
            }
        return removed;
    }

    void clear() {
        c.clear();
    }

    inline void tick() {
        if (pendingClear) {
            clear();
            std::vector<ScheduleTaskData> tmpList;
            locker.lock();
            pendingTaskList.swap(tmpList);
            pendingCancelList.clear();
            pendingClear = false;
            locker.unlock();
            return;
        }
        if (!pendingTaskList.empty()) {
            std::vector<ScheduleTaskData> tmpList;
            locker.lock();
            tmpList.swap(pendingTaskList);
            locker.unlock();
            for (auto& task : tmpList) {
                push(std::move(task));
            }
            tmpList.clear();
        }
        if (c.empty()) {
            return;
        }
        if (!pendingCancelList.empty()) {
            std::vector<uint32_t> tmpList;
            locker.lock();
            // ScheduleTaskData destructor may trigger ScriptX's lock
            tmpList.swap(pendingCancelList);
            locker.unlock();
            for (auto tid : tmpList) {
                remove(tid);
            }
            tmpList.clear();
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

                // timeout
                try {
                    if (!t.task)
                        continue;
                    t.task();

                    switch (t.type) {
                        case ScheduleTaskData::TaskType::InfiniteRepeat: {
                            ScheduleTaskData sche{std::move(t)};
                            sche.leftTime = sche.interval;
                            push(std::move(sche));
                            break;
                        }
                        case ScheduleTaskData::TaskType::Repeat: {
                            if (t.count > 0) {
                                ScheduleTaskData sche{std::move(t)};
                                sche.leftTime = sche.interval;
                                --sche.count;
                                push(std::move(sche));
                            }
                            break;
                        }
                        default:
                            break;
                    }
                } catch (const seh_exception& e) {
                    ll::logger.error("SEH exception occurred in ScheduleTask!");
                    ll::logger.error("{}", TextEncoding::toUTF8(e.what()));
                    ll::logger.error("TaskId: {}", t.taskId);
                    if (auto plugin = ll::getPlugin(t.handle))
                        ll::logger.error("In Plugin: <{} {}>", plugin->name, plugin->version.toString());
                } catch (const std::exception& e) {
                    ll::logger.error("Exception occurred in ScheduleTask!");
                    ll::logger.error("{}", TextEncoding::toUTF8(e.what()));
                    ll::logger.error("TaskId: {}", t.taskId);
                    if (auto plugin = ll::getPlugin(t.handle))
                        ll::logger.error("In Plugin: <{} {}>", plugin->name, plugin->version.toString());
                } catch (...) {
                    ll::logger.error("Exception occurred in ScheduleTask!");
                    ll::logger.error("TaskId: {}", t.taskId);
                    if (auto plugin = ll::getPlugin(t.handle))
                        ll::logger.error("In Plugin: <{} {}>", plugin->name, plugin->version.toString());
                }
                pop();
            }
        } catch (...) {
            ll::logger.error("Exception occurred in ScheduleTask!");
        }
    }

    bool has(unsigned int taskId) {
        for (auto& task : c)
            if (task.taskId == taskId)
                return true;
        return false;
    }
};

ScheduleTaskQueueType taskQueue;


namespace Schedule {
ScheduleTask delay(std::function<void(void)> task, unsigned long long tickDelay, HMODULE handle) {
    if (ll::globalRuntimeConfig.serverStatus >= ll::LLServerStatus::Stopping)
        return ScheduleTask((unsigned)-1);
    ScheduleTaskData sche(ScheduleTaskData::TaskType::Delay, task, tickDelay, -1, -1, handle);
    locker.lock();
    pendingTaskList.push_back(sche);
    locker.unlock();
    return ScheduleTask(sche.getTaskId());
}

ScheduleTask repeat(std::function<void(void)> task, unsigned long long tickRepeat, int maxCount, HMODULE handle) {
    if (ll::globalRuntimeConfig.serverStatus >= ll::LLServerStatus::Stopping)
        return ScheduleTask((unsigned)-1);
    ScheduleTaskData::TaskType type = maxCount < 0 ? ScheduleTaskData::TaskType::InfiniteRepeat
                                                   : ScheduleTaskData::TaskType::Repeat;
    ScheduleTaskData sche(type, task, std::max(tickRepeat, 1ull), std::max(tickRepeat, 1ull), maxCount, handle);
    locker.lock();
    pendingTaskList.push_back(sche);
    locker.unlock();
    return ScheduleTask(sche.getTaskId());
}

ScheduleTask delayRepeat(std::function<void(void)> task, unsigned long long tickDelay,
                         unsigned long long tickRepeat, int maxCount, HMODULE handle) {
    if (ll::globalRuntimeConfig.serverStatus >= ll::LLServerStatus::Stopping)
        return ScheduleTask((unsigned)-1);
    ScheduleTaskData::TaskType type = maxCount < 0 ? ScheduleTaskData::TaskType::InfiniteRepeat
                                                   : ScheduleTaskData::TaskType::Repeat;
    ScheduleTaskData sche(type, task, tickDelay, std::max(tickRepeat, 1ull), maxCount, handle);
    locker.lock();
    pendingTaskList.push_back(sche);
    locker.unlock();
    return ScheduleTask(sche.getTaskId());
}

ScheduleTask nextTick(std::function<void(void)> task, HMODULE handle) {
    if (ll::globalRuntimeConfig.serverStatus >= ll::LLServerStatus::Stopping)
        return ScheduleTask((unsigned)-1);
    ScheduleTaskData sche(ScheduleTaskData::TaskType::Delay, task, 1, -1, -1, handle);
    locker.lock();
    pendingTaskList.push_back(sche);
    locker.unlock();
    return ScheduleTask(sche.getTaskId());
}
} // namespace Schedule

THook(void, "?tick@ServerLevel@@UEAAXXZ",
      void* _this) {
    original(_this);
    taskQueue.tick();
}

void EndScheduleSystem() {
    locker.lock();
    pendingClear = true;
    locker.unlock();
}


ScheduleTask::ScheduleTask(unsigned int taskId)
: taskId(taskId) {
}

bool ScheduleTask::cancel() {
    locker.lock();
    pendingCancelList.push_back(taskId);
    locker.unlock();
    return true;
}

bool ScheduleTask::isFinished() const {
    locker.lock();
    if (pendingClear) {
        locker.unlock();
        return true;
    }
    for (auto tid : pendingCancelList) { // 准备出队,但还在队里
        if (tid == taskId) {
            locker.unlock();
            return true;
        }
    }
    for (auto& t : pendingTaskList) { // 还没进队,不在队里
        if (t.taskId == taskId) {
            locker.unlock();
            return false;
        }
    }
    if (taskQueue.has(taskId)) { // 还在队里
        locker.unlock();
        return false;
    }
    locker.unlock();
    return true;
}