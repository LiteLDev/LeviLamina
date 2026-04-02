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

class SetBlockCommand : public ::Command {
public:
    // SetBlockCommand inner types define
    enum class SetBlockMode : int {
        Replace = 0,
        Destroy = 1,
        Keep    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::CommandPosition>                       mPosition;
    ::ll::TypedStorage<8, 8, ::CommandBlockName>                       mBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockStateCommandParam>> mBlockStates;
    ::ll::TypedStorage<4, 4, int>                                      mData;
    ::ll::TypedStorage<4, 4, ::SetBlockCommand::SetBlockMode>          mMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~SetBlockCommand() /*override*/ = default;
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
