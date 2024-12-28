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
    // member functions
    // NOLINTBEGIN
    MCAPI ~DependencyDescriptor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
