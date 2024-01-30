#include "ll/api/command/CommandRegistrar.h"

namespace ll::command {

CommandRegistrar::CommandRegistrar(CommandRegistry& registry) : registry(&registry) {}
CommandRegistrar::~CommandRegistrar() = default;

} // namespace ll::command
