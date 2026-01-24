#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct TeleportDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>    mRandomTeleports;
    ::ll::TypedStorage<4, 4, float>   mMinTeleportTime;
    ::ll::TypedStorage<4, 4, float>   mMaxTeleportTime;
    ::ll::TypedStorage<4, 12, ::Vec3> mRandomTeleportCube;
    ::ll::TypedStorage<4, 4, float>   mTargetDistance;
    ::ll::TypedStorage<4, 4, float>   mTargetTeleportChance;
    ::ll::TypedStorage<4, 4, float>   mLightTeleportChance;
    ::ll::TypedStorage<4, 4, float>   mDarkTeleportChance;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const /*override*/;

    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    virtual ~TeleportDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $getJsonName() const;

    MCAPI void $deserializeData(::DeserializeDataParams deserializeDataParams);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
