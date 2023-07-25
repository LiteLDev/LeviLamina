#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OSInformation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OSINFORMATION
public:
    OSInformation& operator=(OSInformation const&) = delete;
    OSInformation(OSInformation const&)            = delete;
    OSInformation()                                = delete;
#endif

public:
    /**
     * @symbol ??1OSInformation\@\@QEAA\@XZ
     */
    MCAPI ~OSInformation();
};
