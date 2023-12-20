#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct DataBuffer {
public:
    // prevent constructor by default
    DataBuffer& operator=(DataBuffer const&);
    DataBuffer(DataBuffer const&);
    DataBuffer();

public:
    // NOLINTBEGIN
    // symbol: ??1DataBuffer@webrtc@@QEAA@XZ
    MCAPI ~DataBuffer();

    // NOLINTEND
};

}; // namespace webrtc
