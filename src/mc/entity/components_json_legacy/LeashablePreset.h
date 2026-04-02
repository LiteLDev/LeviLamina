#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/SpringType.h"
#include "mc/world/actor/ActorFilterGroup.h"

struct LeashablePreset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilter;
    ::ll::TypedStorage<4, 4, float>               mSoftDistance;
    ::ll::TypedStorage<4, 4, float>               mHardDistance;
    ::ll::TypedStorage<4, 4, float>               mMaxDistance;
    ::ll::TypedStorage<1, 1, ::SpringType>        mSpringType;
    ::ll::TypedStorage<4, 4, float>               mRotationAdjustment;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setSpringType(::std::string const& type);

    MCAPI ~LeashablePreset();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
