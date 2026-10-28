#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/online_streaming/IAudioContentVerifier.h"
#include "mc/deps/audio/online_streaming/SignedAudioContentSectionType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class WebKey;
namespace Audio { class SignedAudioContent; }
namespace Audio { class VerifiedAudioContent; }
// clang-format on

class AudioContentJwtVerifier : public ::Audio::IAudioContentVerifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4232fb;
    ::ll::UntypedStorage<8, 64> mUnk6e8149;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioContentJwtVerifier& operator=(AudioContentJwtVerifier const&);
    AudioContentJwtVerifier(AudioContentJwtVerifier const&);
    AudioContentJwtVerifier();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::Result<::Audio::VerifiedAudioContent> verifyAndDecode(
        ::Audio::SignedAudioContent const&     signedAudioContent,
        ::Audio::SignedAudioContentSectionType expectedSectionType
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AudioContentJwtVerifier(
        ::std::string                                                  expectedIssuer,
        ::std::function<::std::optional<::WebKey>(::std::string_view)> trustedKeyResolver
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string                                                  expectedIssuer,
        ::std::function<::std::optional<::WebKey>(::std::string_view)> trustedKeyResolver
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Result<::Audio::VerifiedAudioContent> $verifyAndDecode(
        ::Audio::SignedAudioContent const&     signedAudioContent,
        ::Audio::SignedAudioContentSectionType expectedSectionType
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
