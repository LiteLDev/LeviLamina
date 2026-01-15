#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Event.h"

#include "mc/client/game/ClientInstance.h"

namespace ll::event::inline client {

class ClientEvent : public Event {
    ClientInstance& mSelf;

protected:
    constexpr explicit ClientEvent(ClientInstance& clientInstance) : mSelf(clientInstance) {}

public:
    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI ClientInstance& self() const;
};

} // namespace ll::event::inline client
