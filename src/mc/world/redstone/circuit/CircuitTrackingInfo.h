#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/CircuitComponentType.h"
#include "mc/enums/FaceID.h"
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"
#include "mc/world/level/BlockPos.h"

class CircuitTrackingInfo {

public:
    class Entry {
    public:
        class BaseCircuitComponent*     mComponent;
        class BlockPos                  mPos;
        enum class FaceID               mDirection;
        enum class CircuitComponentType mTypeID;

        inline Entry(class BaseCircuitComponent* component, const BlockPos& pos) {
            mComponent = component;
            mDirection = (FaceID)component->getDirection();
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
    /**
     * @symbol ??0CircuitTrackingInfo\@\@QEAA\@V?$not_null\@PEAVBaseCircuitComponent\@\@\@gsl\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI CircuitTrackingInfo(class gsl::not_null<class BaseCircuitComponent*>, class BlockPos const&, int);
    // NOLINTEND
};
