#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoStreamEncoderSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk3be924;
    ::ll::UntypedStorage<8, 8> mUnk3aba97;
    ::ll::UntypedStorage<8, 8> mUnka495e7;
    ::ll::UntypedStorage<8, 8> mUnk73320e;
    ::ll::UntypedStorage<1, 1> mUnk81e120;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoStreamEncoderSettings& operator=(VideoStreamEncoderSettings const&);
    VideoStreamEncoderSettings(VideoStreamEncoderSettings const&);
    VideoStreamEncoderSettings();
};

} // namespace webrtc
