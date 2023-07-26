#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NullLogger {

public:
    // prevent constructor by default
    NullLogger& operator=(NullLogger const&) = delete;
    NullLogger(NullLogger const&)            = delete;
    NullLogger()                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?Logv\@NullLogger\@\@UEAAXPEBDPEAD\@Z
     */
    virtual void Logv(char const*, char*); // NOLINT
    /**
     * @symbol ?instance\@NullLogger\@\@2V1\@A
     */
    MCAPI static class NullLogger instance; // NOLINT
};
