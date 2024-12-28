#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct VrEyeConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk84a077;
    ::ll::UntypedStorage<1, 1>  mUnk977170;
    ::ll::UntypedStorage<4, 64> mUnk64ccd3;
    ::ll::UntypedStorage<4, 64> mUnk71fcb1;
    // NOLINTEND

public:
    // prevent constructor by default
    VrEyeConfiguration& operator=(VrEyeConfiguration const&);
    VrEyeConfiguration(VrEyeConfiguration const&);
    VrEyeConfiguration();
};

} // namespace mce::framebuilder
