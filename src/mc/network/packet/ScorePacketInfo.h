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
    MCAPI ScorePacketInfo(struct ScorePacketInfo&&);

    MCAPI ~ScorePacketInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ScorePacketInfo&&);

    MCAPI void dtor$();

    // NOLINTEND
};
