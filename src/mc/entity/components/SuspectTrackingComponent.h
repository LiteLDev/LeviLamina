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
    // symbol: ?clearSuspiciousPos@SuspectTrackingComponent@@QEAAXXZ
    MCAPI void clearSuspiciousPos();

    // symbol: ?getSuspiciousPos@SuspectTrackingComponent@@QEBA?AV?$optional@VBlockPos@@@std@@XZ
    MCAPI std::optional<class BlockPos> getSuspiciousPos() const;

    // symbol: ?getTicksSinceLastSuspect@SuspectTrackingComponent@@QEBA?AV?$optional@_K@std@@AEBVILevel@@@Z
    MCAPI std::optional<uint64> getTicksSinceLastSuspect(class ILevel const& level) const;

    // symbol: ?setSuspiciousPos@SuspectTrackingComponent@@QEAAXV?$optional@VBlockPos@@@std@@UTick@@@Z
    MCAPI void setSuspiciousPos(std::optional<class BlockPos> pos, struct Tick tick);

    // NOLINTEND
};
