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
    // prevent constructor by default
    DeviceInfoUtils& operator=(DeviceInfoUtils const&);
    DeviceInfoUtils(DeviceInfoUtils const&);
    DeviceInfoUtils();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::DeviceMemoryTier determineMemoryTier(::BaseGameVersion version);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::DeviceMemoryTier& mDefaultMemoryTier();
    // NOLINTEND
};
