#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SendEventData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENDEVENTDATA
public:
    SendEventData() = delete;
#endif

public:
    /**
     * @symbol ??0SendEventData\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SendEventData(struct SendEventData const&);
    /**
     * @symbol ??4SendEventData\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct SendEventData& operator=(struct SendEventData const&);
    /**
     * @symbol ??1SendEventData\@\@QEAA\@XZ
     */
    MCAPI ~SendEventData();
};
