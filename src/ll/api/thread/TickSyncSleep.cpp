#include "ll/api/thread/TickSyncSleep.h"
#include "ll/api/memory/Hook.h"
#include "mc/server/ServerLevel.h"

namespace ll::thread {
struct TickSyncSleepBase::Impl {
    struct Hook;
    bool                    interrupted{false};
    std::mutex              mutex;
    std::condition_variable cv;
    size_t                  id{};
};

std::unique_lock<std::mutex> TickSyncSleepBase::lock() { return std::unique_lock{impl->mutex}; }
void                         TickSyncSleepBase::sleepImpl(std::unique_lock<std::mutex>& l) {
    impl->cv.wait(l, [this] { return impl->interrupted; });
    impl->interrupted = false;
}
void TickSyncSleepBase::interruptImpl() {
    impl->interrupted = true;
    impl->cv.notify_one();
}

static std::recursive_mutex            listMutex;
static std::vector<TickSyncSleepBase*> list;
static std::atomic_bool                hasSleeper{false};

LL_TYPE_INSTANCE_HOOK(TickSyncSleepBase::Impl::Hook, HookPriority::Normal, ServerLevel, &ServerLevel::_subTick, void) {
    if (hasSleeper) {
        std::lock_guard l{listMutex};
        for (auto s : list) {
            s->check();
        }
    }
    origin();
}

TickSyncSleepBase::TickSyncSleepBase() : impl(std::make_unique<Impl>()) {
    static memory::HookRegistrar<TickSyncSleepBase::Impl::Hook> reg;

    std::lock_guard l{listMutex};
    hasSleeper = true;
    impl->id   = list.size();
    list.push_back(this);
}
TickSyncSleepBase::~TickSyncSleepBase() {
    std::lock_guard l{listMutex};
    list.back()->impl->id = impl->id;
    std::swap(list[impl->id], list.back());
    list.pop_back();
    hasSleeper = !list.empty();
}

} // namespace ll::thread
