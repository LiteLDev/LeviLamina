#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SpawnActorEntry {

public:
    // prevent constructor by default
    SpawnActorEntry& operator=(SpawnActorEntry const&) = delete;
    SpawnActorEntry(SpawnActorEntry const&)            = delete;
    SpawnActorEntry()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1SpawnActorEntry\@\@QEAA\@XZ
     */
    MCAPI ~SpawnActorEntry();
    // NOLINTEND
};
