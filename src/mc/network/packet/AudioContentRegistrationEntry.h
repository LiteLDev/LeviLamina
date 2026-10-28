#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/online_streaming/SignedAudioContent.h"

struct AudioContentRegistrationEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>               mAudioContentId;
    ::ll::TypedStorage<8, 32, ::Audio::SignedAudioContent> mSharedMetadata;
    ::ll::TypedStorage<8, 32, ::Audio::SignedAudioContent> mServerContent;
    ::ll::TypedStorage<8, 32, ::Audio::SignedAudioContent> mPlaybackContent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~AudioContentRegistrationEntry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
