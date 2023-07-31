#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RepairItemEntry {

public:
    // prevent constructor by default
    RepairItemEntry(RepairItemEntry const&) = delete;
    RepairItemEntry()                       = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
