#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbLogger {

public:
    // prevent constructor by default
    LevelDbLogger& operator=(LevelDbLogger const&) = delete;
    LevelDbLogger(LevelDbLogger const&)            = delete;
    LevelDbLogger()                                = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
