#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/online_streaming/IAudioContentVerifier.h"
#include "mc/deps/audio/online_streaming/SignedAudioContentSectionType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class SignedAudioContent; }
namespace Audio { class VerifiedAudioContent; }
// clang-format on

namespace Audio {

class RejectingAudioContentVerifier : public ::Audio::IAudioContentVerifier {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::Result<::Audio::VerifiedAudioContent>
    verifyAndDecode(::Audio::SignedAudioContent const&, ::Audio::SignedAudioContentSectionType) const /*override*/;
    // NOLINTEND
};

} // namespace Audio
