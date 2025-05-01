#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct CloudParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 20> mUnk8a3c38;
    ::ll::UntypedStorage<4, 4>  mUnk51e856;
    ::ll::UntypedStorage<4, 4>  mUnkb02adb;
    ::ll::UntypedStorage<4, 4>  mUnk9e71dd;
    ::ll::UntypedStorage<1, 1>  mUnk1ecc92;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudParameters& operator=(CloudParameters const&);
    CloudParameters(CloudParameters const&);
    CloudParameters();
};

} // namespace mce::framebuilder
