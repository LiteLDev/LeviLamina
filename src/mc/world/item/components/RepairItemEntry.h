#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RepairItemEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPAIRITEMENTRY
public:
    RepairItemEntry(RepairItemEntry const&) = delete;
    RepairItemEntry()                       = delete;
#endif

public:
    /**
     * @symbol ??4RepairItemEntry\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct RepairItemEntry& operator=(struct RepairItemEntry&&);
    /**
     * @symbol ??4RepairItemEntry\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct RepairItemEntry& operator=(struct RepairItemEntry const&);
    /**
     * @symbol ??1RepairItemEntry\@\@QEAA\@XZ
     */
    MCAPI ~RepairItemEntry();
};
