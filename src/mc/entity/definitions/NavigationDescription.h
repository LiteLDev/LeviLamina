#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
struct DeserializeDataParams;
// clang-format on

struct NavigationDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                    mNavigationType;
    ::ll::TypedStorage<1, 1, bool>                              mIsAmphibious;
    ::ll::TypedStorage<1, 1, bool>                              mAvoidSun;
    ::ll::TypedStorage<1, 1, bool>                              mCanPassDoors;
    ::ll::TypedStorage<1, 1, bool>                              mCanOpenDoors;
    ::ll::TypedStorage<1, 1, bool>                              mCanOpenIronDoors;
    ::ll::TypedStorage<1, 1, bool>                              mCanBreakDoors;
    ::ll::TypedStorage<1, 1, bool>                              mAvoidWater;
    ::ll::TypedStorage<1, 1, bool>                              mAvoidDamageBlocks;
    ::ll::TypedStorage<1, 1, bool>                              mCanFloat;
    ::ll::TypedStorage<1, 1, bool>                              mCanSink;
    ::ll::TypedStorage<1, 1, bool>                              mCanPathOverLava;
    ::ll::TypedStorage<1, 1, bool>                              mCanWalkInLava;
    ::ll::TypedStorage<1, 1, bool>                              mAvoidPortals;
    ::ll::TypedStorage<1, 1, bool>                              mCanWalk;
    ::ll::TypedStorage<1, 1, bool>                              mCanSwim;
    ::ll::TypedStorage<1, 1, bool>                              mCanBreach;
    ::ll::TypedStorage<1, 1, bool>                              mCanJump;
    ::ll::TypedStorage<1, 1, bool>                              mUsingDoorAnnotations;
    ::ll::TypedStorage<1, 1, bool>                              mCanPathFromAir;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mBlocksToAvoid;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    virtual ~NavigationDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $deserializeData(::DeserializeDataParams deserializeDataParams);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
