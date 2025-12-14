#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class GetInteractionPositionForBlockDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>    mTargetBlockPos;
    ::ll::TypedStorage<8, 32, ::std::string> mTargetBlockPosId;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mAnchorBlockPos;
    ::ll::TypedStorage<8, 32, ::std::string> mAnchorBlockPosId;
    ::ll::TypedStorage<8, 32, ::std::string> mFacingString;
    ::ll::TypedStorage<8, 32, ::std::string> mFacingStringId;
    ::ll::TypedStorage<4, 4, int>            mMaxSearchDistance;
    ::ll::TypedStorage<8, 32, ::std::string> mMaxSearchDistanceId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    virtual ~GetInteractionPositionForBlockDefinition() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::Json::Value value, ::BehaviorFactory const& factory);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
