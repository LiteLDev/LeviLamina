#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Event.h"

#include "mc/world/actor/Mob.h"

namespace ll::event::inline mob {

class MobEvent : public Event {
    Mob& mMob;

protected:
    constexpr explicit MobEvent(Mob& mob) : mMob(mob) {}

public:
    LLNDAPI Mob& mob() const;
};
} // namespace ll::event::inline mob
