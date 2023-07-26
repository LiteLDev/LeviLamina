#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemUseOnEvent {

public:
    // prevent constructor by default
    ItemUseOnEvent& operator=(ItemUseOnEvent const&) = delete;
    ItemUseOnEvent()                                 = delete;

public:
    /**
     * @symbol ??0ItemUseOnEvent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ItemUseOnEvent(struct ItemUseOnEvent&&); // NOLINT
    /**
     * @symbol ??0ItemUseOnEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ItemUseOnEvent(struct ItemUseOnEvent const&); // NOLINT
    /**
     * @symbol ??1ItemUseOnEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemUseOnEvent(); // NOLINT
};
