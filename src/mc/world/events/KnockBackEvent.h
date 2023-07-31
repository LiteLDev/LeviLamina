#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct KnockBackEvent {

public:
    // prevent constructor by default
    KnockBackEvent& operator=(KnockBackEvent const&) = delete;
    KnockBackEvent(KnockBackEvent const&)            = delete;
    KnockBackEvent()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1KnockBackEvent\@\@QEAA\@XZ
     */
    MCAPI ~KnockBackEvent();
    // NOLINTEND
};
