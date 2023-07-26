#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BoostItem {

public:
    // prevent constructor by default
    BoostItem& operator=(BoostItem const&) = delete;
    BoostItem(BoostItem const&)            = delete;
    BoostItem()                            = delete;

public:
    /**
     * @symbol ?setReplacementItemDescriptor\@BoostItem\@\@QEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCAPI void setReplacementItemDescriptor(class ItemDescriptor const&); // NOLINT
    /**
     * @symbol ??1BoostItem\@\@QEAA\@XZ
     */
    MCAPI ~BoostItem(); // NOLINT
};
