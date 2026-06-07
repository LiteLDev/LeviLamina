#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class ILevel;
// clang-format on

class VibrationDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>> mLastVibrationPos;
    ::ll::TypedStorage<8, 8, ::Tick>                       mLastVibrationTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void clearLastVibrationPos();

    MCFOLD ::std::optional<::BlockPos> const& getLastVibrationPos() const;

    MCAPI ::std::optional<uint64> getTicksSinceLastVibration(::ILevel const& level) const;

    MCAPI void setLastVibrationPos(::BlockPos pos, ::Tick tick);

    MCFOLD void setLastVibrationTick(::Tick tick);
    // NOLINTEND
};
