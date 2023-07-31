#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnData {

public:
    // prevent constructor by default
    SpawnData& operator=(SpawnData const&) = delete;
    SpawnData()                            = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
