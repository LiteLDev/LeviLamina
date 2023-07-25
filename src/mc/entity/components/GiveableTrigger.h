#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GiveableTrigger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GIVEABLETRIGGER
public:
    GiveableTrigger& operator=(GiveableTrigger const&) = delete;
    GiveableTrigger()                                  = delete;
#endif

public:
    /**
     * @symbol ??0GiveableTrigger\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI GiveableTrigger(struct GiveableTrigger const&);
    /**
     * @symbol ?addItem\@GiveableTrigger\@\@QEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCAPI void addItem(class ItemDescriptor const&);
    /**
     * @symbol ??1GiveableTrigger\@\@QEAA\@XZ
     */
    MCAPI ~GiveableTrigger();
};
