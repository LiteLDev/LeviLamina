/**
 * @file  RepairItemEntry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure RepairItemEntry.
 *
 */
struct RepairItemEntry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPAIRITEMENTRY
public:
    RepairItemEntry(struct RepairItemEntry const &) = delete;
    RepairItemEntry() = delete;
#endif

public:
    /**
     * @symbol ??4RepairItemEntry\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct RepairItemEntry & operator=(struct RepairItemEntry &&);
    /**
     * @symbol ??4RepairItemEntry\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct RepairItemEntry & operator=(struct RepairItemEntry const &);
    /**
     * @symbol ??1RepairItemEntry\@\@QEAA\@XZ
     */
    MCAPI ~RepairItemEntry();

};