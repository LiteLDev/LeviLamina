#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DependencyDescriptorMandatory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk66e087;
    ::ll::UntypedStorage<4, 4> mUnk140dbe;
    ::ll::UntypedStorage<1, 1> mUnk33276d;
    ::ll::UntypedStorage<1, 1> mUnk10f58c;
    // NOLINTEND

public:
    // prevent constructor by default
    DependencyDescriptorMandatory& operator=(DependencyDescriptorMandatory const&);
    DependencyDescriptorMandatory(DependencyDescriptorMandatory const&);
    DependencyDescriptorMandatory();
};

} // namespace webrtc
