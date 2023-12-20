#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class RemoteEstimateSerializer {
public:
    // prevent constructor by default
    RemoteEstimateSerializer& operator=(RemoteEstimateSerializer const&);
    RemoteEstimateSerializer(RemoteEstimateSerializer const&);
    RemoteEstimateSerializer();
};

}; // namespace webrtc::rtcp
