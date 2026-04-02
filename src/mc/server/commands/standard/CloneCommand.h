#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandBlockName.h"
#include "mc/server/commands/CommandPosition.h"

// auto generated forward declare list
// clang-format off
class BlockStateCommandParam;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class CloneCommand : public ::Command {
public:
    // CloneCommand inner types define
    enum class CloneMode : int {
        Normal = 0,
        Force  = 1,
        Move   = 2,
    };

    enum class MaskMode : int {
        Replace  = 0,
        Filtered = 1,
        Masked   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::CommandPosition>                       mBegin;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                       mEnd;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                       mDestination;
    ::ll::TypedStorage<4, 4, ::CloneCommand::MaskMode>                 mMaskMode;
    ::ll::TypedStorage<4, 4, ::CloneCommand::CloneMode>                mCloneMode;
    ::ll::TypedStorage<8, 8, ::CommandBlockName>                       mBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockStateCommandParam>> mBlockStates;
    ::ll::TypedStorage<4, 4, int>                                      mData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~CloneCommand() /*override*/ = default;
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
