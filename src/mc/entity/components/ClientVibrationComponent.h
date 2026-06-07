#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class ILevel;
// clang-format on

class ClientVibrationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::optional<::Tick>> mLastVibrationTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<uint64> getTicksSinceLastVibration(::ILevel const& level) const;

    MCAPI void setLastVibrationTick(::Tick lastVibrationTick);
    // NOLINTEND
};
