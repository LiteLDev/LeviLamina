#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NullLogger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NULLLOGGER
public:
    NullLogger& operator=(NullLogger const&) = delete;
    NullLogger(NullLogger const&)            = delete;
    NullLogger()                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?Logv\@NullLogger\@\@UEAAXPEBDPEAD\@Z
     */
    virtual void Logv(char const*, char*);
    /**
     * @symbol ?instance\@NullLogger\@\@2V1\@A
     */
    MCAPI static class NullLogger instance;
};
