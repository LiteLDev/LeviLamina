#include "ll/api/thread/ClientTickSyncSleep.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/world/ClientLevelTickEvent.h"

namespace ll::thread {
struct ClientTickSyncSleepBase::Impl {
    bool                    interrupted{false};
    std::mutex              mutex;
    std::condition_variable cv;
    size_t                  id{};
    event::ListenerPtr      checker;
};

std::unique_lock<std::mutex> ClientTickSyncSleepBase::lock() { return std::unique_lock{impl->mutex}; }
void                         ClientTickSyncSleepBase::sleepImpl(std::unique_lock<std::mutex>& l) {
    impl->cv.wait(l, [this] { return impl->interrupted; });
    impl->interrupted = false;
}
void ClientTickSyncSleepBase::interruptImpl() {
    impl->interrupted = true;
    impl->cv.notify_one();
}

ClientTickSyncSleepBase::ClientTickSyncSleepBase() : impl(std::make_unique<Impl>()) {
    impl->checker =
        event::EventBus::getInstance().emplaceListener<event::ClientLevelTickEvent>([this](auto&) { check(); });
}
ClientTickSyncSleepBase::~ClientTickSyncSleepBase() {
    event::EventBus::getInstance().removeListener<event::ClientLevelTickEvent>(impl->checker);
}

} // namespace ll::thread
