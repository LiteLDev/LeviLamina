#include "ll/api/coro/Executor.h"

namespace ll::coro {

struct Executor::Impl {
    std::string name;
};

Executor::~Executor() = default;

Executor::Executor(std::string_view name) : impl(std::make_unique<Impl>(std::string{name})) {}

std::string const& Executor::getName() const { return impl->name; }

} // namespace ll::coro
