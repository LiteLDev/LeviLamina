#pragma once

#include "ll/api/event/actor/ActorEvent.h"

#include "mc/world/actor/Mob.h"

namespace ll::event::inline mob {

class MobEvent : public ActorEvent {
protected:
    constexpr explicit MobEvent(Mob& mob) : ActorEvent(mob) {}

public:
    LLNDAPI Mob& self() const;
};
} // namespace ll::event::inline mob
