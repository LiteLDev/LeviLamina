#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_100 {

struct CameraFlyMoveDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                  mSpeed;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mSprintSpeed;
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
