#include "ll/api/thread/TaskExecutor.h"

namespace ll::thread {

struct TaskExecutor::Impl {
    std::string name;
};

TaskExecutor::~TaskExecutor() = default;

TaskExecutor::TaskExecutor(std::string_view name) : impl(std::make_unique<Impl>(std::string{name})) {}

std::string const& TaskExecutor::getName() const { return impl->name; }

} // namespace ll::thread
