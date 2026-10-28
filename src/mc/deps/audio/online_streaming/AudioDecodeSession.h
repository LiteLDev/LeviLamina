#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class AudioFrameBuffer; }
namespace Audio { struct PcmFramePosition; }
// clang-format on

namespace Audio {

class AudioDecodeSession {
public:
    // AudioDecodeSession inner types declare
    // clang-format off
    struct AudioDecodeDiscardResult;
    struct AudioDecodeRuntimePositionState;
    // clang-format on

    // AudioDecodeSession inner types define
    struct AudioDecodeDiscardResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk433c01;
        ::ll::UntypedStorage<8, 8> mUnk1a580d;
        // NOLINTEND

    public:
        // prevent constructor by default
        AudioDecodeDiscardResult& operator=(AudioDecodeDiscardResult const&);
        AudioDecodeDiscardResult(AudioDecodeDiscardResult const&);
        AudioDecodeDiscardResult();
    };

    struct AudioDecodeRuntimePositionState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkddbb56;
        ::ll::UntypedStorage<8, 8>  mUnk3217f2;
        ::ll::UntypedStorage<1, 1>  mUnk62fda7;
        ::ll::UntypedStorage<8, 8>  mUnkf6f7c3;
        // NOLINTEND

    public:
        // prevent constructor by default
        AudioDecodeRuntimePositionState& operator=(AudioDecodeRuntimePositionState const&);
        AudioDecodeRuntimePositionState(AudioDecodeRuntimePositionState const&);
        AudioDecodeRuntimePositionState();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk691d12;
    ::ll::UntypedStorage<4, 4>  mUnk26835e;
    ::ll::UntypedStorage<8, 8>  mUnkd5820b;
    ::ll::UntypedStorage<1, 1>  mUnkaad55e;
    ::ll::UntypedStorage<8, 8>  mUnk7ab78f;
    ::ll::UntypedStorage<8, 8>  mUnkda0838;
    ::ll::UntypedStorage<1, 1>  mUnk928e5f;
    ::ll::UntypedStorage<4, 4>  mUnkc3c644;
    ::ll::UntypedStorage<8, 8>  mUnk60b2ed;
    ::ll::UntypedStorage<8, 8>  mUnka2ab8a;
    ::ll::UntypedStorage<8, 16> mUnkd21144;
    ::ll::UntypedStorage<1, 1>  mUnk5e26b8;
    ::ll::UntypedStorage<8, 48> mUnk1e1719;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioDecodeSession& operator=(AudioDecodeSession const&);
    AudioDecodeSession(AudioDecodeSession const&);
    AudioDecodeSession();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI uint64 _decodeNormally(::Audio::AudioFrameBuffer& outputBuffer);

    MCNAPI ::Bedrock::Result<::Audio::AudioDecodeSession::AudioDecodeDiscardResult>
    _discardToPosition(::Audio::PcmFramePosition targetFrame, uint64 maxFramesToDiscard);

    MCNAPI ::Bedrock::Result<::gsl::span<float>>
    fillPcm(::Audio::AudioFrameBuffer& outputBuffer, ::std::chrono::steady_clock::time_point now);
#endif
    // NOLINTEND
};

} // namespace Audio
