#include "ll/api/thread/InplaceExecutor.h"

#include <thread>

namespace ll::thread {

InplaceExecutor::InplaceExecutor(std::string name) : Executor(std::move(name)) {}

InplaceExecutor::~InplaceExecutor() = default;

void InplaceExecutor::execute(std::function<void()> f) const { f(); }

std::shared_ptr<data::CancellableCallback> InplaceExecutor::executeAfter(std::function<void()> f, Duration dur) const {
    std::this_thread::sleep_for(dur);
    f();
    return nullptr;
}

InplaceExecutor const& InplaceExecutor::getDefault() {
    static InplaceExecutor ins("default_inplace");
    return ins;
}
} // namespace ll::thread
