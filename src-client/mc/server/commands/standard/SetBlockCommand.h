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

class SetBlockCommand : public ::Command {
public:
    // SetBlockCommand inner types define
    enum class SetBlockMode : uint {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnka63b9f;
    ::ll::UntypedStorage<8, 8>  mUnkc41e6f;
    ::ll::UntypedStorage<8, 24> mUnk714dc2;
    ::ll::UntypedStorage<4, 4>  mUnk900ebc;
    ::ll::UntypedStorage<4, 4>  mUnkdcd022;
    // NOLINTEND

public:
    // prevent constructor by default
    SetBlockCommand& operator=(SetBlockCommand const&);
    SetBlockCommand(SetBlockCommand const&);
    SetBlockCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
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
