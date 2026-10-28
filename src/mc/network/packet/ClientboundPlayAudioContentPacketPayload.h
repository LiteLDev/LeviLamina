#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/online_streaming/SignedAudioContent.h"
#include "mc/network/packet/AudioContentPlaybackType.h"
#include "mc/network/packet/PlaySoundPacketPayload.h"

struct ClientboundPlayAudioContentPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Audio::SignedAudioContent> mSharedMetadata;
    ::ll::TypedStorage<8, 32, ::Audio::SignedAudioContent> mPlaybackContent;
    ::ll::TypedStorage<1, 1, ::AudioContentPlaybackType>   mPlaybackType;
    ::ll::TypedStorage<8, 88, ::PlaySoundPacketPayload>    mPlaySound;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ClientboundPlayAudioContentPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
