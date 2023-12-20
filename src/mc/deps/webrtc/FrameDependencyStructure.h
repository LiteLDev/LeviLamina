#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct FrameDependencyStructure {
public:
    // prevent constructor by default
    FrameDependencyStructure& operator=(FrameDependencyStructure const&);
    FrameDependencyStructure();

public:
    // NOLINTBEGIN
    // symbol: ??0FrameDependencyStructure@webrtc@@QEAA@AEBU01@@Z
    MCAPI FrameDependencyStructure(struct webrtc::FrameDependencyStructure const&);

    // symbol: ??1FrameDependencyStructure@webrtc@@QEAA@XZ
    MCAPI ~FrameDependencyStructure();

    // NOLINTEND
};

}; // namespace webrtc
