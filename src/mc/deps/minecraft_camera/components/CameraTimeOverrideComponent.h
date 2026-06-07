#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

class CameraTimeOverrideComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<float()>> mGetDeltaTimeOverride;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::std::optional<float> getDeltaTimeOverride() const;
#endif
    // NOLINTEND
};

} // namespace MinecraftCamera
