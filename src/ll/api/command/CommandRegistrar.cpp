#include "ll/api/command/CommandRegistrar.h"

namespace ll::command {
struct CommandRegistrar::Impl {
    CommandRegistry* registry;
};

CommandRegistrar::CommandRegistrar(CommandRegistry& registry) : impl(std::make_unique<Impl>(&registry)) {}
CommandRegistrar::~CommandRegistrar() = default;

CommandRegistry* CommandRegistrar::operator->() const { return impl->registry; }

CommandRegistry& CommandRegistrar::getRegistry() const { return *impl->registry; }

} // namespace ll::command
