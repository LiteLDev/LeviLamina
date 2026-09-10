#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandBlockName.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/world/level/clone_blocks_utils/CloneMode.h"
#include "mc/world/level/clone_blocks_utils/MaskMode.h"

// auto generated forward declare list
// clang-format off
class BlockStateCommandParam;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class CloneCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::CommandPosition>                       mBegin;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                       mEnd;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                       mDestination;
    ::ll::TypedStorage<4, 4, ::CloneBlocksUtils::MaskMode>             mMaskMode;
    ::ll::TypedStorage<4, 4, ::CloneBlocksUtils::CloneMode>            mCloneMode;
    ::ll::TypedStorage<8, 8, ::CommandBlockName>                       mBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockStateCommandParam>> mBlockStates;
    ::ll::TypedStorage<4, 4, int>                                      mData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;


    // NOLINTEND
};
