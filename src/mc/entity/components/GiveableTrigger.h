#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GiveableTrigger {

public:
    // prevent constructor by default
    GiveableTrigger& operator=(GiveableTrigger const&) = delete;
    GiveableTrigger()                                  = delete;

public:
    /**
     * @symbol ??0GiveableTrigger\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI GiveableTrigger(struct GiveableTrigger const&); // NOLINT
    /**
     * @symbol ?addItem\@GiveableTrigger\@\@QEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCAPI void addItem(class ItemDescriptor const&); // NOLINT
    /**
     * @symbol ??1GiveableTrigger\@\@QEAA\@XZ
     */
    MCAPI ~GiveableTrigger(); // NOLINT
};
