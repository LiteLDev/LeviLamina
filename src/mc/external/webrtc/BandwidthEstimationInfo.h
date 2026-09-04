#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct BandwidthEstimationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkaf6e07;
    ::ll::UntypedStorage<4, 4> mUnk4e36e0;
    ::ll::UntypedStorage<4, 4> mUnkd3b7ff;
    ::ll::UntypedStorage<4, 4> mUnka12ec0;
    ::ll::UntypedStorage<4, 4> mUnkf2d2fc;
    ::ll::UntypedStorage<4, 4> mUnkb71368;
    ::ll::UntypedStorage<8, 8> mUnkfe55e8;
    // NOLINTEND

public:
    // prevent constructor by default
    BandwidthEstimationInfo& operator=(BandwidthEstimationInfo const&);
    BandwidthEstimationInfo(BandwidthEstimationInfo const&);
    BandwidthEstimationInfo();
};

} // namespace webrtc
