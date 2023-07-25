#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChatEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHATEVENT
public:
    ChatEvent& operator=(ChatEvent const&) = delete;
    ChatEvent()                            = delete;
#endif

public:
    /**
     * @symbol ??0ChatEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ChatEvent(struct ChatEvent const&);
    /**
     * @symbol ??1ChatEvent\@\@QEAA\@XZ
     */
    MCAPI ~ChatEvent();
};
