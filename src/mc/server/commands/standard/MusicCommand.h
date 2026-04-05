#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/server/commands/Command.h"
#include "mc/sound/MusicRepeatMode.h"

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
        ::ll::TypedStorage<1, 1, ::MusicCommand::Action> mAction;
        ::ll::TypedStorage<8, 32, ::std::string>         mTrackName;
        ::ll::TypedStorage<4, 4, float>                  mVolume;
        ::ll::TypedStorage<4, 4, float>                  mFadeSeconds;
        ::ll::TypedStorage<1, 1, ::MusicRepeatMode>      mRepeatMode;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI bool decodeMusicCommand(::SharedTypes::Legacy::LevelEvent type, ::CompoundTag const& data);

        MCAPI ~CommandData();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCFOLD void $dtor();
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::MusicCommand::Action> mAction;
    ::ll::TypedStorage<8, 32, ::std::string>         mTrackName;
    ::ll::TypedStorage<4, 4, float>                  mVolume;
    ::ll::TypedStorage<4, 4, float>                  mFadeSeconds;
    ::ll::TypedStorage<1, 1, ::MusicRepeatMode>      mRepeatMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

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
