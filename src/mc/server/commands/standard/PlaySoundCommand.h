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

class PlaySoundCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnke93a0b;
    ::ll::UntypedStorage<8, 200> mUnk1fb798;
    ::ll::UntypedStorage<4, 16>  mUnk378eec;
    ::ll::UntypedStorage<4, 4>   mUnk340a52;
    ::ll::UntypedStorage<4, 4>   mUnk19049c;
    ::ll::UntypedStorage<4, 4>   mUnk5ae83f;
    ::ll::UntypedStorage<1, 1>   mUnk78da2b;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaySoundCommand& operator=(PlaySoundCommand const&);
    PlaySoundCommand(PlaySoundCommand const&);
    PlaySoundCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~PlaySoundCommand() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
