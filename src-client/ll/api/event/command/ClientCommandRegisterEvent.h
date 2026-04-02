#pragma once

#include "ll/api/event/command/CommandRegisterEvent.h"

namespace ll::event::inline command {

class ClientCommandRegisterEvent final : public CommandRegisterEvent {
public:
    constexpr explicit ClientCommandRegisterEvent(CommandRegistry& commandRegistry) : CommandRegisterEvent(commandRegistry)
    {}

    LLAPI void serialize(CompoundTag&) const override;
};

} // namespace ll::event::inline command
