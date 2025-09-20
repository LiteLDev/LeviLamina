#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CaveFeatureUtils {

struct CarvingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9cd8e7;
    ::ll::UntypedStorage<4, 4>  mUnk507e8d;
    ::ll::UntypedStorage<4, 4>  mUnkc30217;
    ::ll::UntypedStorage<4, 12> mUnk2a627f;
    // NOLINTEND

public:
    // prevent constructor by default
    CarvingParameters& operator=(CarvingParameters const&);
    CarvingParameters(CarvingParameters const&);
    CarvingParameters();
};

} // namespace CaveFeatureUtils
