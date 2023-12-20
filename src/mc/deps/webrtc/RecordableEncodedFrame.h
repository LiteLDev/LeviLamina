#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RecordableEncodedFrame {
public:
    // prevent constructor by default
    RecordableEncodedFrame& operator=(RecordableEncodedFrame const&);
    RecordableEncodedFrame(RecordableEncodedFrame const&);
    RecordableEncodedFrame();
};

}; // namespace webrtc
