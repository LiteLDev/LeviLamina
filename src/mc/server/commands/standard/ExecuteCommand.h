#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class ExecuteCommand : public ::Command {
public:
    // ExecuteCommand inner types define
    enum class Mode : int {
        Execute = 0,
        Detect  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mUnkd8ebd0;
    ::ll::UntypedStorage<4, 16>  mUnk246ddb;
    ::ll::UntypedStorage<4, 16>  mUnkdedb9e;
    ::ll::UntypedStorage<8, 8>   mUnk826bb1;
    ::ll::UntypedStorage<4, 4>   mUnk1a4708;
    ::ll::UntypedStorage<4, 4>   mUnkce1560;
    ::ll::UntypedStorage<8, 8>   mUnke6d6bd;
    // NOLINTEND

public:
    // prevent constructor by default
    ExecuteCommand& operator=(ExecuteCommand const&);
    ExecuteCommand(ExecuteCommand const&);
    ExecuteCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~ExecuteCommand() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, bool isLegacyActive, int newExecuteStartVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
