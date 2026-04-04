#include "ll/api/thread/ServerTickSyncSleep.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/world/ServerLevelTickEvent.h"

namespace ll::thread {
struct ServerTickSyncSleepBase::Impl {
    bool                    interrupted{false};
    std::mutex              mutex;
    std::condition_variable cv;
    size_t                  id{};
    event::ListenerPtr      checker;
};

std::unique_lock<std::mutex> ServerTickSyncSleepBase::lock() { return std::unique_lock{impl->mutex}; }
void                         ServerTickSyncSleepBase::sleepImpl(std::unique_lock<std::mutex>& l) {
    impl->cv.wait(l, [this] { return impl->interrupted; });
    impl->interrupted = false;
}
void ServerTickSyncSleepBase::interruptImpl() {
    impl->interrupted = true;
    impl->cv.notify_one();
}

ServerTickSyncSleepBase::ServerTickSyncSleepBase() : impl(std::make_unique<Impl>()) {
    impl->checker =
        event::EventBus::getInstance().emplaceListener<event::ServerLevelTickEvent>([this](auto&) { check(); });
}
ServerTickSyncSleepBase::~ServerTickSyncSleepBase() {
    event::EventBus::getInstance().removeListener<event::ServerLevelTickEvent>(impl->checker);
}

} // namespace ll::thread
