
#pragma once
#include "llapi/Global.h"
#include "BlockPos.hpp"
#include "BaseCircuitComponent.hpp"

class CircuitTrackingInfo {
public:
    class Entry {
    public:
        class BaseCircuitComponent* mComponent;
        BlockPos mPos;
        FaceID mDirection;
        CircuitComponentType mTypeID;

        inline Entry(class BaseCircuitComponent* component, const BlockPos& pos) {
            mComponent = component;
            mDirection = (FaceID)component->getDirection();
            mPos = pos;
            mTypeID = component->getCircuitComponentGroupType();
        }
    };

    Entry mCurrent;
    Entry mPower;
    Entry mNearest;
    Entry m2ndNearest;
    int mDampening;
    bool mDirectlyPowered;
    int mData;

    CircuitTrackingInfo(class BaseCircuitComponent* component, const BlockPos& pos, int dampening)
        : mCurrent{component, pos}, mPower{component, pos}, mNearest{component, pos}, m2ndNearest{component, pos} {
        this->mDampening = dampening;
        this->mDirectlyPowered = true;
        this->mData = 0;
    }
};