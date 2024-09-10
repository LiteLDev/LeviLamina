#include "ll/api/thread/InplaceExecutor.h"

#include <thread>

namespace ll::thread {

InplaceExecutor::InplaceExecutor(std::string_view name) : TaskExecutor(name) {}

InplaceExecutor::~InplaceExecutor() = default;

void InplaceExecutor::addTask(std::function<void()> f) const { f(); }

TaskExecutor::SchId InplaceExecutor::addTaskAfter(std::function<void()> f, Duration dur) const {
    std::this_thread::sleep_for(dur);
    f();
    return 0;
}

bool InplaceExecutor::removeFromSch(SchId) const { return false; }

InplaceExecutor const& InplaceExecutor::getDefault() {
    static std::shared_ptr<InplaceExecutor> p = std::make_shared<InplaceExecutor>("default");
    return *p;
}
} // namespace ll::thread
