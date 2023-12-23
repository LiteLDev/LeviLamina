#pragma once

#include <utility>

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/mob/MobEvent.h"

namespace ll::event::inline mob {

class MobTrySpawnEvent : public Cancellable<MobEvent> {
    std::string mTypeName;
    Vec3        mPos;
    int         mDimensionId;

public:
    constexpr MobTrySpawnEvent(Mob& mob, std::string typeName, Vec3& pos, int dimensionId)
    : Cancellable(mob),
      mTypeName(std::move(typeName)),
      mPos(pos),
      mDimensionId(dimensionId) {}

    LLNDAPI std::string typeName() const;
    LLNDAPI Vec3        pos() const;
    LLNDAPI int         dimensionId() const;
};
} // namespace ll::event::inline mob
