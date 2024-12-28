#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class TransportSequenceNumberV2 {
public:
    // prevent constructor by default
    TransportSequenceNumberV2& operator=(TransportSequenceNumberV2 const&);
    TransportSequenceNumberV2(TransportSequenceNumberV2 const&);
    TransportSequenceNumberV2();
};

} // namespace webrtc
