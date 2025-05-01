#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct ReflectionParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk4e3888;
    ::ll::UntypedStorage<4, 44> mUnk38f3fc;
    ::ll::UntypedStorage<4, 64> mUnk2e4007;
    ::ll::UntypedStorage<1, 1>  mUnk3a79a4;
    // NOLINTEND

public:
    // prevent constructor by default
    ReflectionParameters& operator=(ReflectionParameters const&);
    ReflectionParameters(ReflectionParameters const&);
    ReflectionParameters();
};

} // namespace mce::framebuilder
