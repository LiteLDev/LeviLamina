#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CanyonFeatureUtils {

struct CanyonConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mYOffset;
    ::ll::TypedStorage<4, 4, int>  mMaxCarveHeight;
    ::ll::TypedStorage<1, 1, bool> mCanGenerateInOceans;
    ::ll::TypedStorage<1, 1, bool> mCanGenerateMegaCanyons;
    ::ll::TypedStorage<1, 1, bool> mUseUniformYDistribution;
    ::ll::TypedStorage<4, 4, int>  mOneOutOfChanceToGenerate;
    // NOLINTEND
};

} // namespace CanyonFeatureUtils
