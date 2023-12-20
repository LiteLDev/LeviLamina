#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct DependencyDescriptor {
public:
    // prevent constructor by default
    DependencyDescriptor& operator=(DependencyDescriptor const&);
    DependencyDescriptor(DependencyDescriptor const&);
    DependencyDescriptor();

public:
    // NOLINTBEGIN
    // symbol: ??1DependencyDescriptor@webrtc@@QEAA@XZ
    MCAPI ~DependencyDescriptor();

    // NOLINTEND
};

}; // namespace webrtc
