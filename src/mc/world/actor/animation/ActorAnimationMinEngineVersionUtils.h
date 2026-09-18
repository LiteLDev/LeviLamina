#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class SemVersion;
// clang-format on

class ActorAnimationMinEngineVersionUtils {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::MinEngineVersion useFormatVersionOrMinEngineVersionBackCompat(
        ::MinEngineVersion const& minEngineVersion,
        ::SemVersion const&       formatVersion
    );
#endif
    // NOLINTEND
};
