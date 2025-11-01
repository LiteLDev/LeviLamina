#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct AudioCodecInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkee770f;
    ::ll::UntypedStorage<8, 8> mUnk9e9808;
    ::ll::UntypedStorage<4, 4> mUnk7b26c6;
    ::ll::UntypedStorage<4, 4> mUnk61c39c;
    ::ll::UntypedStorage<4, 4> mUnkf5d570;
    ::ll::UntypedStorage<1, 1> mUnkc4b657;
    ::ll::UntypedStorage<1, 1> mUnkb13293;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioCodecInfo& operator=(AudioCodecInfo const&);
    AudioCodecInfo(AudioCodecInfo const&);
    AudioCodecInfo();
};

} // namespace webrtc
