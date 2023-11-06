#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnData {
public:
    // prevent constructor by default
    SpawnData& operator=(SpawnData const&);
    SpawnData();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SpawnData() = default;

    // symbol: ??0SpawnData@@QEAA@AEBVCompoundTag@@@Z
    MCAPI explicit SpawnData(class CompoundTag const&);

    // symbol: ??0SpawnData@@QEAA@AEBV0@@Z
    MCAPI SpawnData(class SpawnData const&);

    // symbol: ?save@SpawnData@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> save();

    // NOLINTEND
};
