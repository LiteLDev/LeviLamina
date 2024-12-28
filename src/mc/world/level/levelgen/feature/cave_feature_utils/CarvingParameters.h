#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CaveFeatureUtils {

struct CarvingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkdd7f5e;
    ::ll::UntypedStorage<4, 4>  mUnkbb788e;
    ::ll::UntypedStorage<4, 4>  mUnk6856df;
    ::ll::UntypedStorage<4, 12> mUnk5ded23;
    // NOLINTEND

public:
    // prevent constructor by default
    CarvingParameters& operator=(CarvingParameters const&);
    CarvingParameters(CarvingParameters const&);
    CarvingParameters();
};

} // namespace CaveFeatureUtils
