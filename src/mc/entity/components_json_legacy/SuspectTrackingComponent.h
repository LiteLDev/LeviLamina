#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SuspectTrackingComponent {
public:
    // prevent constructor by default
    SuspectTrackingComponent& operator=(SuspectTrackingComponent const&);
    SuspectTrackingComponent(SuspectTrackingComponent const&);
    SuspectTrackingComponent();

public:
    // NOLINTBEGIN
    MCAPI void clearSuspiciousPos();

    MCAPI std::optional<class BlockPos> getSuspiciousPos() const;

    MCAPI std::optional<uint64> getTicksSinceLastSuspect(class ILevel const& level) const;

    MCAPI void setSuspiciousPos(std::optional<class BlockPos> pos, struct Tick tick);

    // NOLINTEND
};
