#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/CircuitComponentType.h"
#include "mc/enums/FacingID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"

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
};
