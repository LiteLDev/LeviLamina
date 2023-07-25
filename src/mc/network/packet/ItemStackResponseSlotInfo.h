#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackResponseSlotInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKRESPONSESLOTINFO
public:
    ItemStackResponseSlotInfo& operator=(ItemStackResponseSlotInfo const&) = delete;
    ItemStackResponseSlotInfo(ItemStackResponseSlotInfo const&)            = delete;
    ItemStackResponseSlotInfo()                                            = delete;
#endif

public:
    /**
     * @symbol ??0ItemStackResponseSlotInfo\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ItemStackResponseSlotInfo(struct ItemStackResponseSlotInfo&&);
    /**
     * @symbol ??1ItemStackResponseSlotInfo\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackResponseSlotInfo();
};
