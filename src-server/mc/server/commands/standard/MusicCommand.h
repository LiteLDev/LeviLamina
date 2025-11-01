#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class CompoundTag;
// clang-format on

class MusicCommand : public ::Command {
public:
    // MusicCommand inner types declare
    // clang-format off
    struct CommandData;
    // clang-format on

    // MusicCommand inner types define
    enum class Action : uchar {
        None   = 0,
        Queue  = 1,
        Play   = 2,
        Stop   = 3,
        Volume = 4,
    };

    struct CommandData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkb6cbe1;
        ::ll::UntypedStorage<8, 32> mUnk86059c;
        ::ll::UntypedStorage<4, 4>  mUnk433c63;
        ::ll::UntypedStorage<4, 4>  mUnk22bdf3;
        ::ll::UntypedStorage<1, 1>  mUnk277e94;
        // NOLINTEND

    public:
        // prevent constructor by default
        CommandData& operator=(CommandData const&);
        CommandData(CommandData const&);
        CommandData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk6f871c;
    ::ll::UntypedStorage<8, 32> mUnkcec6cd;
    ::ll::UntypedStorage<4, 4>  mUnk13ac16;
    ::ll::UntypedStorage<4, 4>  mUnk7d7c7f;
    ::ll::UntypedStorage<1, 1>  mUnk68a0c3;
    // NOLINTEND

public:
    // prevent constructor by default
    MusicCommand& operator=(MusicCommand const&);
    MusicCommand(MusicCommand const&);
    MusicCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~MusicCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _handleActionQueueOrPlay(::CompoundTag& data, ::CommandOutput& output) const;

    MCAPI void _handleActionStop(::CompoundTag& data, ::CommandOutput& output) const;

    MCAPI void _handleActionVolume(::CompoundTag& data, ::CommandOutput& output) const;
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
