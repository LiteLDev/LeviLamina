#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScorePacketInfo {
public:
    // prevent constructor by default
    ScorePacketInfo& operator=(ScorePacketInfo const&);
    ScorePacketInfo(ScorePacketInfo const&);
    ScorePacketInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0ScorePacketInfo@@QEAA@$$QEAU0@@Z
    MCAPI ScorePacketInfo(struct ScorePacketInfo&&);

    // symbol: ??1ScorePacketInfo@@QEAA@XZ
    MCAPI ~ScorePacketInfo();

    // NOLINTEND
};
