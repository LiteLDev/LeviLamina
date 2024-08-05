#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveActorAbsoluteData {
public:
    // prevent constructor by default
    MoveActorAbsoluteData& operator=(MoveActorAbsoluteData const&);
    MoveActorAbsoluteData(MoveActorAbsoluteData const&);

public:
    // NOLINTBEGIN
    MCAPI MoveActorAbsoluteData();

    MCAPI explicit MoveActorAbsoluteData(class Actor const& entity);

    MCAPI class MoveActorDeltaData calculateDelta(class MoveActorAbsoluteData const& previousAbsoluteMoveData) const;

    MCAPI class Vec2 getRot() const;

    MCAPI float getYBodyRot() const;

    MCAPI float getYHeadRot() const;

    MCAPI bool isDifferenceSignificant(class MoveActorAbsoluteData const& old, class Vec3 const& velocity) const;

    MCAPI void setRot(class Vec2 const& rot);

    MCAPI void setYBodyRot(float rot);

    MCAPI void setYHeadRot(float rot);

    // NOLINTEND
};
