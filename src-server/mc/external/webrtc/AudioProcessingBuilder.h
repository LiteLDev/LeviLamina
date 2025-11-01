#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioProcessingBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 176> mUnk7b8e03;
    ::ll::UntypedStorage<8, 8>   mUnk4748eb;
    ::ll::UntypedStorage<8, 8>   mUnka9d6f8;
    ::ll::UntypedStorage<8, 8>   mUnk7b8ca0;
    ::ll::UntypedStorage<8, 8>   mUnk30d729;
    ::ll::UntypedStorage<8, 8>   mUnk2c0a29;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioProcessingBuilder& operator=(AudioProcessingBuilder const&);
    AudioProcessingBuilder(AudioProcessingBuilder const&);
    AudioProcessingBuilder();
};

} // namespace webrtc
