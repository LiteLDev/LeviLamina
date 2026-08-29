#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/sound/Music.h"
#include "mc/sound/MusicRepeatMode.h"

class CustomMusic : public ::Music {
public:
    // CustomMusic inner types declare
    // clang-format off
    struct QueuedMusicItem;
    // clang-format on

    // CustomMusic inner types define
    struct QueuedMusicItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>    mEventName;
        ::ll::TypedStorage<4, 4, float>             mVolume;
        ::ll::TypedStorage<4, 4, float>             mFadeoutSeconds;
        ::ll::TypedStorage<1, 1, ::MusicRepeatMode> mPlayMode;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::MusicRepeatMode> mCurrentPlayMode;
    ::ll::
        TypedStorage<8, 40, ::std::queue<::CustomMusic::QueuedMusicItem, ::std::deque<::CustomMusic::QueuedMusicItem>>>
                                   mMusicQueue;
    ::ll::TypedStorage<1, 1, bool> _mIsActive;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomMusic() /*override*/;

    virtual bool hasTracks() const /*override*/;

    virtual void nextTrack() /*override*/;

    virtual void setActive(bool active) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addQueuedMusic(
        ::std::string const& eventName,
        float                volume,
        float                fadeoutSeconds,
        ::MusicRepeatMode    playMode,
        bool                 treatFadeAsDelay
    );

    MCAPI void clearQueuedMusic();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $hasTracks() const;

    MCAPI void $nextTrack();

    MCAPI void $setActive(bool active);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
