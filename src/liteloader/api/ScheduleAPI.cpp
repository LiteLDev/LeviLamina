#include "liteloader/api/ScheduleAPI.h"

#include <atomic>
#include <mutex>
#include <queue>
#include <utility>

#include "liteloader/api/LLAPI.h"
#include "liteloader/api/LoggerAPI.h"
#include "liteloader/api/i18n/I18nAPI.h"
#include "liteloader/api/memory/Hook.h"
#include "liteloader/api/utils/DbgHelper.h"
#include "liteloader/core/Config.h"
#include "liteloader/core/LiteLoader.h"

#include "mc/server/ServerLevel.h"

using namespace std;

std::mutex  locker;
atomic_uint nextTaskId = 0;

class ScheduleTaskData {
public:
    enum class TaskType { Delay, Repeat, InfiniteRepeat };
    uint                      taskId;
    TaskType                  type;
    int64                     leftTime, interval;
    int                       count;
    std::function<void(void)> task;
    HMODULE                   handle;

    ScheduleTaskData(
        TaskType                  type,
        std::function<void(void)> task,
        uint64                    delay,
        uint64                    interval,
        int                       count,
        HMODULE                   handle
    )
    : taskId(++nextTaskId),
      type(type),
      leftTime((int64)delay),
      interval((int64)interval),
      count(count),
      task(std::move(task)),
      handle(handle){};

    [[nodiscard]] inline uint getTaskId() const { return taskId; }

    inline bool operator>(ScheduleTaskData const& t) const { return leftTime > t.leftTime; }
};

std::vector<ScheduleTaskData> pendingTaskList{};
std::vector<uint>             pendingCancelList{};
bool                          pendingClear = false;

class ScheduleTaskQueueType : public priority_queue<ScheduleTaskData, vector<ScheduleTaskData>, greater<>> {
public:
    bool remove(uint taskId) {
        bool removed = false;

        for (size_t i = 0; i < c.size(); ++i)
            if (c[i].taskId == taskId) {
                c[i] = c.back();
                c.pop_back();
                std::make_heap(c.begin(), c.end(), comp); // 重排二叉堆
                removed = true;
            }
        return removed;
    }

    void clear() { c.clear(); }

    inline void tick() {
        if (pendingClear) {
            clear();
            std::vector<ScheduleTaskData> tmpList;

            unique_lock lock(locker);
            pendingTaskList.swap(tmpList);
            pendingCancelList.clear();
            pendingClear = false;
            return;
        }
        if (!pendingTaskList.empty()) {
            std::vector<ScheduleTaskData> tmpList;
            locker.lock();
            tmpList.swap(pendingTaskList);
            locker.unlock();
            for (auto& task : tmpList) { push(std::move(task)); }
            tmpList.clear();
        }
        if (c.empty()) { return; }
        if (!pendingCancelList.empty()) {
            std::vector<uint> tmpList;
            locker.lock();
            // ScheduleTaskData destructor may trigger ScriptX's lock
            tmpList.swap(pendingCancelList);
            locker.unlock();
            for (auto& tid : tmpList) { remove(tid); }
            tmpList.clear();
        }
        try {
            for (auto& i : c) --i.leftTime;

            while (true) {
                if (empty()) break;
                ScheduleTaskData const& t = top();
                if (t.leftTime > 0) break;

                // timeout
                try {
                    if (!t.task) continue;
                    t.task();

                    switch (t.type) {
                    case ScheduleTaskData::TaskType::InfiniteRepeat: {
                        ScheduleTaskData sche{t};
                        sche.leftTime = sche.interval;
                        push(std::move(sche));
                        break;
                    }
                    case ScheduleTaskData::TaskType::Repeat: {
                        if (t.count > 0) {
                            ScheduleTaskData sche{t};
                            sche.leftTime = sche.interval;
                            --sche.count;
                            push(std::move(sche));
                        }
                        break;
                    }
                    default:
                        break;
                    }
                } catch (seh_exception const& e) {
                    ll::logger.error("SEH exception occurred in ScheduleTask!");
                    ll::logger.error("{}", TextEncoding::toUTF8(e.what()));
                    ll::logger.error("TaskId: {}", t.taskId);
                    if (auto plugin = ll::getPlugin(t.handle))
                        ll::logger.error("In Plugin: <{} {}>", plugin->name, plugin->version.toString());
                } catch (std::exception const& e) {
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
        } catch (...) { ll::logger.error("Exception occurred in ScheduleTask!"); }
    }

    bool has(uint taskId) {

        return std::ranges::any_of(c, [taskId](ScheduleTaskData const& task) { return task.taskId == taskId; });
    }
};

ScheduleTaskQueueType taskQueue;


namespace Schedule {
ScheduleTask delay(std::function<void(void)> task, uint64 tickDelay, HMODULE handle) {
    if (ll::globalRuntimeConfig.serverStatus >= ll::LLServerStatus::Stopping) return {(uint)-1};
    ScheduleTaskData sche(ScheduleTaskData::TaskType::Delay, std::move(task), tickDelay, -1, -1, handle);
    locker.lock();
    pendingTaskList.push_back(sche);
    locker.unlock();
    return {sche.getTaskId()};
}

ScheduleTask repeat(std::function<void(void)> task, uint64 tickRepeat, int maxCount, HMODULE handle) {
    if (ll::globalRuntimeConfig.serverStatus >= ll::LLServerStatus::Stopping) return {(uint)-1};
    ScheduleTaskData::TaskType type =
        maxCount < 0 ? ScheduleTaskData::TaskType::InfiniteRepeat : ScheduleTaskData::TaskType::Repeat;
    ScheduleTaskData
        sche(type, std::move(task), std::max(tickRepeat, 1ull), std::max(tickRepeat, 1ull), maxCount, handle);
    locker.lock();
    pendingTaskList.push_back(sche);
    locker.unlock();
    return {sche.getTaskId()};
}

ScheduleTask
delayRepeat(std::function<void(void)> task, uint64 tickDelay, uint64 tickRepeat, int maxCount, HMODULE handle) {
    if (ll::globalRuntimeConfig.serverStatus >= ll::LLServerStatus::Stopping) return {(uint)-1};
    ScheduleTaskData::TaskType type =
        maxCount < 0 ? ScheduleTaskData::TaskType::InfiniteRepeat : ScheduleTaskData::TaskType::Repeat;
    ScheduleTaskData sche(type, std::move(task), tickDelay, std::max(tickRepeat, 1ull), maxCount, handle);
    locker.lock();
    pendingTaskList.push_back(sche);
    locker.unlock();
    return {sche.getTaskId()};
}

ScheduleTask nextTick(std::function<void(void)> task, HMODULE handle) {
    if (ll::globalRuntimeConfig.serverStatus >= ll::LLServerStatus::Stopping) return {(uint)-1};
    ScheduleTaskData sche(ScheduleTaskData::TaskType::Delay, std::move(task), 1, -1, -1, handle);
    locker.lock();
    pendingTaskList.push_back(sche);
    locker.unlock();
    return {sche.getTaskId()};
}
} // namespace Schedule

LL_AUTO_TYPED_INSTANCE_HOOK(ScheduleTaskTickHook, ServerLevel, HookPriority::Normal, &ServerLevel::_subTick, void) {
    origin();
    taskQueue.tick();
}

void EndScheduleSystem() {
    locker.lock();
    pendingClear = true;
    locker.unlock();
}


ScheduleTask::ScheduleTask(uint taskId) : taskId(taskId) {}

bool ScheduleTask::cancel() const {
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
    for (auto& tid : pendingCancelList) { // 准备出队,但还在队里
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
