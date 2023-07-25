#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MessageEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MESSAGEEVENT
public:
    MessageEvent& operator=(MessageEvent const&) = delete;
    MessageEvent(MessageEvent const&)            = delete;
    MessageEvent()                               = delete;
#endif

public:
    /**
     * @symbol ??1MessageEvent\@\@QEAA\@XZ
     */
    MCAPI ~MessageEvent();
};
