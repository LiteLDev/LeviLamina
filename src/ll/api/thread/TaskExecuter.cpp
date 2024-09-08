#include "ll/api/thread/TaskExecuter.h"

namespace ll::thread {

struct TaskExecuter::Impl {
    std::string name;
};

TaskExecuter::~TaskExecuter() = default;

TaskExecuter::TaskExecuter(std::string_view name) : impl(std::make_unique<Impl>(std::string{name})) {}

std::string const& TaskExecuter::getName() const { return impl->name; }

} // namespace ll::thread
