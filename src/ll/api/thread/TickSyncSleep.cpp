#include "ll/api/thread/TickSyncSleep.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/world/LevelTickEvent.h"

namespace ll::thread {
struct TickSyncSleepBase::Impl {
    bool                    interrupted{false};
    std::mutex              mutex;
    std::condition_variable cv;
    size_t                  id{};
    event::ListenerPtr      checker;
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

TickSyncSleepBase::TickSyncSleepBase() : impl(std::make_unique<Impl>()) {
    impl->checker = event::EventBus::getInstance().emplaceListener<event::LevelTickEvent>([this](auto&) { check(); });
}
TickSyncSleepBase::~TickSyncSleepBase() {
    event::EventBus::getInstance().removeListener<event::LevelTickEvent>(impl->checker);
}

} // namespace ll::thread
