#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/mob/MobEvent.h"

namespace ll::event::inline mob {

class MobSpawnedEvent : public MobEvent {
    Vec3 mPos;
    int  mDimensionId;

public:
    constexpr MobSpawnedEvent(Mob& mob, Vec3& pos, int dimensionId)
    : MobEvent(mob),
      mPos(pos),
      mDimensionId(dimensionId) {}

    LLNDAPI Vec3 pos() const;
    LLNDAPI int  dimensionId() const;
};
} // namespace ll::event::inline mob
