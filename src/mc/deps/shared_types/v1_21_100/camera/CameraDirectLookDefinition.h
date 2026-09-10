#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_100 {

struct CameraDirectLookDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mPitchMin;
    ::ll::TypedStorage<4, 4, float> mPitchMax;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::string_view const& NAME();
#endif
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
