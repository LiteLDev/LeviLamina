#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SdpAudioFormat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk36545d;
    ::ll::UntypedStorage<4, 4>  mUnk17c8f6;
    ::ll::UntypedStorage<8, 8>  mUnkeffbf1;
    ::ll::UntypedStorage<8, 16> mUnk6b719a;
    // NOLINTEND

public:
    // prevent constructor by default
    SdpAudioFormat& operator=(SdpAudioFormat const&);
    SdpAudioFormat(SdpAudioFormat const&);
    SdpAudioFormat();
};

} // namespace webrtc
