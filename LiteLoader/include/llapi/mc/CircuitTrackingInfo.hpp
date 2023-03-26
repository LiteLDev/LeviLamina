
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
            mDirection = component->getDirection();
            mPos = pos;
            mTypeID = component->getBaseType();
        }
    };

    Entry mCurrent;
    Entry mPower;
    Entry mNearest;
    Entry m2ndNearest;
    int mDampening;
    bool mDirectlyPowered;
    int mData;

    inline CircuitTrackingInfo(class BaseCircuitComponent* component, const BlockPos& pos, int dampening) {
        mCurrent = std::move(Entry(component, pos));
        mPower = std::move(Entry(component, pos));
        mNearest = std::move(Entry(component, pos));
        m2ndNearest = std::move(Entry(component, pos));
        this->mDampening = dampening;
        this->mDirectlyPowered = true;
        this->mData = 0;
    }
};