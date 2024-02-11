#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ReplayStateMode.h"

struct ReplayStateConfig {
public:
    // prevent constructor by default
    ReplayStateConfig& operator=(ReplayStateConfig const&);
    ReplayStateConfig(ReplayStateConfig const&);
    ReplayStateConfig();

public:
    // NOLINTBEGIN
    // symbol: ??0ReplayStateConfig@@QEAA@W4ReplayStateMode@@@Z
    MCAPI explicit ReplayStateConfig(::ReplayStateMode mode);

    // symbol: ?getSanitizedHistorySize@ReplayStateConfig@@QEBA_KXZ
    MCAPI uint64 getSanitizedHistorySize() const;

    // symbol: ?setReplayStateConfigThresholds@ReplayStateConfig@@QEAAXM@Z
    MCAPI void setReplayStateConfigThresholds(float);

    // NOLINTEND
};
