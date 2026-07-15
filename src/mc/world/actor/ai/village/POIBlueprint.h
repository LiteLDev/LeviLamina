#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/ai/village/POIType.h"

struct POIBlueprint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
    ::ll::TypedStorage<8, 48, ::HashedString> mInitEvent;
    ::ll::TypedStorage<8, 48, ::HashedString> mEndEvent;
    ::ll::TypedStorage<4, 4, ::POIType>       mType;
    ::ll::TypedStorage<4, 4, float>           mRadius;
    ::ll::TypedStorage<8, 8, uint64>          mCapacity;
    ::ll::TypedStorage<8, 8, uint64>          mWeight;
    ::ll::TypedStorage<8, 48, ::HashedString> mSoundEvent;
    ::ll::TypedStorage<1, 1, bool>            mUseBoundingBox;
    // NOLINTEND
};
