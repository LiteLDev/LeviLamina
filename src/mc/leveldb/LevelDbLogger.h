#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbLogger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDBLOGGER
public:
    LevelDbLogger& operator=(LevelDbLogger const&) = delete;
    LevelDbLogger(LevelDbLogger const&)            = delete;
    LevelDbLogger()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?Logv\@LevelDbLogger\@\@EEAAXPEBDPEAD\@Z
     */
    virtual void Logv(char const*, char*);
};
