#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNDATA
public:
    SpawnData& operator=(SpawnData const&) = delete;
    SpawnData()                            = delete;
#endif

public:
    /**
     * @symbol ??0SpawnData\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI SpawnData(class SpawnData const&);
    /**
     * @symbol ??0SpawnData\@\@QEAA\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI SpawnData(class CompoundTag const&);
    /**
     * @symbol
     * ?save\@SpawnData\@\@QEAA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save();
};
