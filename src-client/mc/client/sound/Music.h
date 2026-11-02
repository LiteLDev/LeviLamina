#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/sound/Category.h"
#include "mc/deps/audio/ServerSoundHandle.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class Music : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Category>                            mCategory;
    ::ll::TypedStorage<8, 32, ::std::string>                        mName;
    ::ll::TypedStorage<8, 32, ::std::string>                        mEventName;
    ::ll::TypedStorage<4, 4, int>                                   mMinDelay;
    ::ll::TypedStorage<4, 4, int>                                   mMaxDelay;
    ::ll::TypedStorage<1, 1, bool>                                  mPaused;
    ::ll::TypedStorage<4, 4, float>                                 mVolume;
    ::ll::TypedStorage<4, 4, float>                                 mFadeoutSeconds;
    ::ll::TypedStorage<1, 1, bool>                                  mPlaylist;
    ::ll::TypedStorage<4, 4, uint>                                  mPlaylistIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>         mOverrideInterruptibleCategories;
    ::ll::TypedStorage<1, 1, bool>                                  mInitialized;
    ::ll::TypedStorage<8, 16, ::std::optional<::ServerSoundHandle>> mServerSoundHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    Music();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Music() /*override*/;

    virtual bool hasTracks() const;

    virtual void nextTrack();

    virtual void setActive(bool active);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Music(::Category category, ::std::string const& name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Category category, ::std::string const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $hasTracks() const;

    MCNAPI void $nextTrack();

    MCNAPI void $setActive(bool active);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
