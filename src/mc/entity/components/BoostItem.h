#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BoostItem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOSTITEM
public:
    BoostItem& operator=(BoostItem const&) = delete;
    BoostItem(BoostItem const&)            = delete;
    BoostItem()                            = delete;
#endif

public:
    /**
     * @symbol ?setReplacementItemDescriptor\@BoostItem\@\@QEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCAPI void setReplacementItemDescriptor(class ItemDescriptor const&);
    /**
     * @symbol ??1BoostItem\@\@QEAA\@XZ
     */
    MCAPI ~BoostItem();
};
