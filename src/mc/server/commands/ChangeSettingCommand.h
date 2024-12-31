#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class ChangeSettingCommand : public ::ServerCommand {
public:
    // ChangeSettingCommand inner types define
    enum class Setting : int {
        AllowCheats = 0,
        Difficulty  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd825e2;
    ::ll::UntypedStorage<4, 4> mUnked9ef0;
    ::ll::UntypedStorage<4, 4> mUnkc6957d;
    ::ll::UntypedStorage<1, 1> mUnk6dc97e;
    // NOLINTEND

public:
    // prevent constructor by default
    ChangeSettingCommand& operator=(ChangeSettingCommand const&);
    ChangeSettingCommand(ChangeSettingCommand const&);
    ChangeSettingCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const&, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~ChangeSettingCommand() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const&, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
