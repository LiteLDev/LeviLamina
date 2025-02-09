#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/village/POIType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI POIBlueprint(
        ::std::string name,
        ::POIType     type,
        float         radius,
        bool          useBoundingBox,
        uint64        capacity,
        uint64        weight,
        ::std::string soundEvent,
        ::std::string initEvent,
        ::std::string endEvent
    );

    MCAPI ~POIBlueprint();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string name,
        ::POIType     type,
        float         radius,
        bool          useBoundingBox,
        uint64        capacity,
        uint64        weight,
        ::std::string soundEvent,
        ::std::string initEvent,
        ::std::string endEvent
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
