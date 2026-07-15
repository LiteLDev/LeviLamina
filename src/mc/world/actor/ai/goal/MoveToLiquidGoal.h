#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

class MoveToLiquidGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::MaterialType> mMaterialType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&) /*override*/;

    virtual void appendDebugInfo(::std::string&) const /*override*/;

    virtual bool findTargetBlock() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
