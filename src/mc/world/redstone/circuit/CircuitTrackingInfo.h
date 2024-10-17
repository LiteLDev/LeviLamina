#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/FacingID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

class CircuitTrackingInfo {
public:
    class Entry {
    public:
        class BaseCircuitComponent* mComponent;
        class BlockPos              mPos;
        ::FacingID                  mDirection;
        ::CircuitComponentType      mTypeID;

        [[nodiscard]] constexpr Entry(class BaseCircuitComponent* component, BlockPos const& pos) {
            mComponent = component;
            mDirection = (FacingID)component->getDirection();
            mPos       = pos;
            mTypeID    = component->getCircuitComponentGroupType();
        }
    };

    Entry mCurrent;
    Entry mPower;
    Entry mNearest;
    Entry m2ndNearest;
    int   mDampening;
    bool  mDirectlyPowered;
    int   mData;

public:
    // NOLINTBEGIN
    MCAPI CircuitTrackingInfo(gsl::not_null<class BaseCircuitComponent*>, class BlockPos const&, int);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(gsl::not_null<class BaseCircuitComponent*>, class BlockPos const&, int);

    // NOLINTEND
};
