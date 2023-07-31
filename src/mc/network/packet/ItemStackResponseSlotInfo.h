#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackResponseSlotInfo {

public:
    // prevent constructor by default
    ItemStackResponseSlotInfo& operator=(ItemStackResponseSlotInfo const&) = delete;
    ItemStackResponseSlotInfo(ItemStackResponseSlotInfo const&)            = delete;
    ItemStackResponseSlotInfo()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ItemStackResponseSlotInfo\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ItemStackResponseSlotInfo(struct ItemStackResponseSlotInfo&&);
    /**
     * @symbol ??1ItemStackResponseSlotInfo\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackResponseSlotInfo();
    // NOLINTEND
};
