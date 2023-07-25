#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MountTamingEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOUNTTAMINGEVENT
public:
    MountTamingEvent& operator=(MountTamingEvent const&) = delete;
    MountTamingEvent(MountTamingEvent const&)            = delete;
    MountTamingEvent()                                   = delete;
#endif

public:
    /**
     * @symbol ??1MountTamingEvent\@\@QEAA\@XZ
     */
    MCAPI ~MountTamingEvent();
};
