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

class CameraShakeCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk588e30;
    ::ll::UntypedStorage<1, 1>   mUnkda2e74;
    ::ll::UntypedStorage<8, 200> mUnkc960d1;
    ::ll::UntypedStorage<4, 4>   mUnka372c6;
    ::ll::UntypedStorage<4, 4>   mUnkdf3560;
    ::ll::UntypedStorage<1, 1>   mUnk53b7e6;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraShakeCommand& operator=(CameraShakeCommand const&);
    CameraShakeCommand(CameraShakeCommand const&);
    CameraShakeCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~CameraShakeCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _executeAdd(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void _executeStop(::CommandOrigin const& origin, ::CommandOutput& output) const;
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
