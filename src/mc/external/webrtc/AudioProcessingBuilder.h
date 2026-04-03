#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioProcessingBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 176> mUnk7b8e03;
    ::ll::UntypedStorage<8, 8>   mUnk3cf3ef;
    ::ll::UntypedStorage<8, 8>   mUnk8e0d11;
    ::ll::UntypedStorage<8, 8>   mUnk3d000e;
    ::ll::UntypedStorage<8, 8>   mUnk30d729;
    ::ll::UntypedStorage<8, 8>   mUnkdc12e6;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioProcessingBuilder& operator=(AudioProcessingBuilder const&);
    AudioProcessingBuilder(AudioProcessingBuilder const&);
    AudioProcessingBuilder();
};

} // namespace webrtc
