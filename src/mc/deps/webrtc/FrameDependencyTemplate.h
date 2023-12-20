#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct FrameDependencyTemplate {
public:
    // prevent constructor by default
    FrameDependencyTemplate& operator=(FrameDependencyTemplate const&);
    FrameDependencyTemplate(FrameDependencyTemplate const&);
    FrameDependencyTemplate();

public:
    // NOLINTBEGIN
    // symbol: ??1FrameDependencyTemplate@webrtc@@QEAA@XZ
    MCAPI ~FrameDependencyTemplate();

    // NOLINTEND
};

}; // namespace webrtc
