#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SpawnActorEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNACTORENTRY
public:
    SpawnActorEntry& operator=(SpawnActorEntry const&) = delete;
    SpawnActorEntry(SpawnActorEntry const&)            = delete;
    SpawnActorEntry()                                  = delete;
#endif

public:
    /**
     * @symbol ??1SpawnActorEntry\@\@QEAA\@XZ
     */
    MCAPI ~SpawnActorEntry();
};
