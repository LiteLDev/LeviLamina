#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Audio {

class OnlineStreamedAudioBuffer {
public:
    // OnlineStreamedAudioBuffer inner types declare
    // clang-format off
    struct AudioChunk;
    // clang-format on

    // OnlineStreamedAudioBuffer inner types define
    struct AudioChunk {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk897038;
        ::ll::UntypedStorage<8, 24> mUnkf86328;
        // NOLINTEND

    public:
        // prevent constructor by default
        AudioChunk& operator=(AudioChunk const&);
        AudioChunk(AudioChunk const&);
        AudioChunk();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk104ff0;
    ::ll::UntypedStorage<8, 24> mUnkb707cf;
    ::ll::UntypedStorage<8, 8>  mUnke3ce51;
    ::ll::UntypedStorage<8, 8>  mUnkff684d;
    ::ll::UntypedStorage<8, 8>  mUnk885368;
    ::ll::UntypedStorage<8, 8>  mUnkd58fce;
    ::ll::UntypedStorage<8, 8>  mUnk746d9b;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineStreamedAudioBuffer& operator=(OnlineStreamedAudioBuffer const&);
    OnlineStreamedAudioBuffer(OnlineStreamedAudioBuffer const&);
    OnlineStreamedAudioBuffer();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Result<::gsl::span<uchar>> tryRead(uint64 offset, ::gsl::span<uchar> outputBuffer) const;
#endif
    // NOLINTEND
};

} // namespace Audio
