#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Audio {

class AudioFrameBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk514939;
    ::ll::UntypedStorage<1, 1>  mUnk2c257a;
    ::ll::UntypedStorage<8, 8>  mUnk1aadea;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioFrameBuffer& operator=(AudioFrameBuffer const&);
    AudioFrameBuffer(AudioFrameBuffer const&);
    AudioFrameBuffer();

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::Bedrock::Result<::Audio::AudioFrameBuffer>
    create(::gsl::span<float> samples, uchar channels, uint64 maxFrames);
#endif
    // NOLINTEND
};

} // namespace Audio
