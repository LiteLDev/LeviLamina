#pragma once

#include "ll/api/event/Event.h"

#include "mc/server/ServerInstance.h"

namespace ll::event::inline world {
class ServerStartedEvent : public Event {
    ServerInstance& mInstance;

public:
    constexpr explicit ServerStartedEvent(ServerInstance& instance) : mInstance(instance) {}

    void serialize(CompoundTag&) const override;

    LLNDAPI ServerInstance& instance() const;
};
} // namespace ll::event::inline world
