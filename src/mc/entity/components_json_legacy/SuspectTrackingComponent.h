#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ILevel;
struct Tick;
// clang-format on

class SuspectTrackingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk1754d5;
    ::ll::UntypedStorage<8, 16> mUnk61455e;
    // NOLINTEND

public:
    // prevent constructor by default
    SuspectTrackingComponent& operator=(SuspectTrackingComponent const&);
    SuspectTrackingComponent(SuspectTrackingComponent const&);
    SuspectTrackingComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void clearSuspiciousPos();

    MCAPI ::std::optional<::BlockPos> getSuspiciousPos() const;

    MCAPI ::std::optional<uint64> getTicksSinceLastSuspect(::ILevel const& level) const;

    MCAPI void setSuspiciousPos(::std::optional<::BlockPos> pos, ::Tick tick);
    // NOLINTEND
};
