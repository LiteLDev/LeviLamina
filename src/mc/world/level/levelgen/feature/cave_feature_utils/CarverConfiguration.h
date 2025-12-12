#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CaveFeatureUtils {

struct CarverConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk199ca9;
    ::ll::UntypedStorage<4, 4> mUnkd3a66f;
    ::ll::UntypedStorage<8, 8> mUnk4e9378;
    ::ll::UntypedStorage<8, 8> mUnk70603f;
    ::ll::UntypedStorage<8, 8> mUnk9fa816;
    ::ll::UntypedStorage<8, 8> mUnk430116;
    ::ll::UntypedStorage<8, 8> mUnk4bcf4c;
    // NOLINTEND

public:
    // prevent constructor by default
    CarverConfiguration& operator=(CarverConfiguration const&);
    CarverConfiguration(CarverConfiguration const&);
    CarverConfiguration();
};

} // namespace CaveFeatureUtils
