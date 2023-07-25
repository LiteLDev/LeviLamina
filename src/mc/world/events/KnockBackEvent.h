#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct KnockBackEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KNOCKBACKEVENT
public:
    KnockBackEvent& operator=(KnockBackEvent const&) = delete;
    KnockBackEvent(KnockBackEvent const&)            = delete;
    KnockBackEvent()                                 = delete;
#endif

public:
    /**
     * @symbol ??1KnockBackEvent\@\@QEAA\@XZ
     */
    MCAPI ~KnockBackEvent();
};
