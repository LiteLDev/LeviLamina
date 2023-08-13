#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/FlushableEnv.h"

class FlushableStorageAreaEnv : public ::FlushableEnv {

public:
    // prevent constructor by default
    FlushableStorageAreaEnv& operator=(FlushableStorageAreaEnv const&) = delete;
    FlushableStorageAreaEnv(FlushableStorageAreaEnv const&)            = delete;
    FlushableStorageAreaEnv()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 20
     * @symbol ?flushToPermanentStorage\@FlushableStorageAreaEnv\@\@UEAAXXZ
     */
    virtual void flushToPermanentStorage();
    // NOLINTEND
};
