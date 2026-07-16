#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class AudioFrameBuffer; }
// clang-format on

namespace Audio {

class AudioDecodeSession {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk691d12;
    ::ll::UntypedStorage<4, 4> mUnk26835e;
    ::ll::UntypedStorage<8, 8> mUnkd5820b;
    ::ll::UntypedStorage<1, 1> mUnkaad55e;
    ::ll::UntypedStorage<8, 8> mUnkda0838;
    ::ll::UntypedStorage<1, 1> mUnk928e5f;
    ::ll::UntypedStorage<4, 4> mUnkc3c644;
    ::ll::UntypedStorage<8, 8> mUnk60b2ed;
    ::ll::UntypedStorage<8, 8> mUnka2ab8a;
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
    MCNAPI ::Bedrock::Result<::gsl::span<float>>
    fillPcm(::Audio::AudioFrameBuffer& outputBuffer, ::std::chrono::steady_clock::time_point now);
#endif
    // NOLINTEND
};

} // namespace Audio
