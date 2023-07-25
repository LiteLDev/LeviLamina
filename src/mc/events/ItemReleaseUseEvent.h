#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemReleaseUseEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMRELEASEUSEEVENT
public:
    ItemReleaseUseEvent& operator=(ItemReleaseUseEvent const&) = delete;
    ItemReleaseUseEvent(ItemReleaseUseEvent const&)            = delete;
    ItemReleaseUseEvent()                                      = delete;
#endif

public:
    /**
     * @symbol ??1ItemReleaseUseEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemReleaseUseEvent();
};
