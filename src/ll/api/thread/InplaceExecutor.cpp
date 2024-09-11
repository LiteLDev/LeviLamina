#include "ll/api/thread/InplaceExecutor.h"

#include <thread>

namespace ll::thread {

InplaceExecutor::InplaceExecutor(std::string_view name) : TaskExecutor(name) {}

InplaceExecutor::~InplaceExecutor() = default;

void InplaceExecutor::addTask(std::function<void()> f) const { f(); }

std::shared_ptr<CancellableCallback> InplaceExecutor::addTaskAfter(std::function<void()> f, Duration dur) const {
    std::this_thread::sleep_for(dur);
    f();
    return nullptr;
}

InplaceExecutor const& InplaceExecutor::getDefault() {
    static std::shared_ptr<InplaceExecutor> p = std::make_shared<InplaceExecutor>("default");
    return *p;
}
} // namespace ll::thread
