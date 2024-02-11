#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorPathingData {
public:
    // ActorPathingData inner types declare
    // clang-format off
    struct MinMaxHeightCacheEntry;
    // clang-format on

    // ActorPathingData inner types define
    struct MinMaxHeightCacheEntry {
    public:
        // prevent constructor by default
        MinMaxHeightCacheEntry& operator=(MinMaxHeightCacheEntry const&);
        MinMaxHeightCacheEntry(MinMaxHeightCacheEntry const&);
        MinMaxHeightCacheEntry();
    };

public:
    // prevent constructor by default
    ActorPathingData& operator=(ActorPathingData const&);
    ActorPathingData(ActorPathingData const&);
    ActorPathingData();

public:
    // NOLINTBEGIN
    // symbol: ??1ActorPathingData@@QEAA@XZ
    MCAPI ~ActorPathingData();

    // NOLINTEND
};
