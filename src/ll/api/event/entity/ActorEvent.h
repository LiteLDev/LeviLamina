#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Event.h"

#include "mc/world/actor/Actor.h"

namespace ll::event::inline entity {

class ActorEvent : public Event {
    Actor& mSelf;

protected:
    constexpr explicit ActorEvent(Actor& actor) : mSelf(actor) {}

public:
    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI Actor& self() const;
};
} // namespace ll::event::inline entity
