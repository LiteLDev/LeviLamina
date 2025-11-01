#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class DataChannelOpenMessageChannelType : int {
    // bitfield representation
    OrderedReliable = 0,
    OrderedPartialRtxs = 1 << 0,
    OrderedPartialTime = 1 << 1,
    UnorderedReliable = 1 << 7,
    UnorderedPartialRtxs = OrderedPartialRtxs | UnorderedReliable,
    UnorderedPartialTime = OrderedPartialTime | UnorderedReliable,
};

}
