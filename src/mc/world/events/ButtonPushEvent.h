#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ButtonPushEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUTTONPUSHEVENT
public:
    ButtonPushEvent& operator=(ButtonPushEvent const&) = delete;
    ButtonPushEvent(ButtonPushEvent const&)            = delete;
    ButtonPushEvent()                                  = delete;
#endif

public:
    /**
     * @symbol ??1ButtonPushEvent\@\@QEAA\@XZ
     */
    MCAPI ~ButtonPushEvent();
};
