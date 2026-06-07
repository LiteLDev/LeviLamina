#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class ILevel;
// clang-format on

class SuspectTrackingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>> mSuspiciousPos;
    ::ll::TypedStorage<8, 16, ::std::optional<::Tick>>     mLastSuspicionTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void clearSuspiciousPos();

    MCFOLD ::std::optional<::BlockPos> getSuspiciousPos() const;

    MCAPI ::std::optional<uint64> getTicksSinceLastSuspect(::ILevel const& level) const;

    MCAPI void setSuspiciousPos(::std::optional<::BlockPos> pos, ::Tick tick);
    // NOLINTEND
};
