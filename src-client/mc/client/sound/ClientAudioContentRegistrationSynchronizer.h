#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/online_streaming/AudioContentId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAudioContentRegistrationProvider;
class PacketSender;
// clang-format on

class ClientAudioContentRegistrationSynchronizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IAudioContentRegistrationProvider>>>
                                                                             mAudioContentRegistrationProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PacketSender>> mPacketSender;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::AudioContentId>>        mSentAudioContentIds;
    // NOLINTEND
};
