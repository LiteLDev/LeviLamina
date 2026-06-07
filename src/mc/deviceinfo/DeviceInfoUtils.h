#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deviceinfo/DeviceMemoryTier.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
// clang-format on

class DeviceInfoUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::DeviceMemoryTier determineMemoryTier(::BaseGameVersion const&);

#ifdef LL_PLAT_C
    MCNAPI static ::DeviceMemoryTier determineMemoryTier(
        ::BaseGameVersion const&            version,
        ::std::optional<::DeviceMemoryTier> optionalMemoryTierOverride
    );
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::DeviceMemoryTier& mDefaultMemoryTier();
    // NOLINTEND
};
