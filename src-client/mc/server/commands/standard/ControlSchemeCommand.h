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

class ControlSchemeCommand : public ::Command {
public:
    // ControlSchemeCommand inner types define
    enum class Action : uint {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mUnkecf6f1;
    ::ll::UntypedStorage<1, 1>   mUnk90a465;
    ::ll::UntypedStorage<1, 1>   mUnk97d303;
    // NOLINTEND

public:
    // prevent constructor by default
    ControlSchemeCommand& operator=(ControlSchemeCommand const&);
    ControlSchemeCommand(ControlSchemeCommand const&);
    ControlSchemeCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~ControlSchemeCommand() /*override*/ = default;
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
