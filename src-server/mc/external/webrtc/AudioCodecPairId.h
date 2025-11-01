#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioCodecPairId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk942ba0;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioCodecPairId& operator=(AudioCodecPairId const&);
    AudioCodecPairId(AudioCodecPairId const&);
    AudioCodecPairId();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::AudioCodecPairId Create();
    // NOLINTEND

};

}
