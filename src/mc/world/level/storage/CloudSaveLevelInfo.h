#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CloudSaveLevelInfo {
public:
    // prevent constructor by default
    CloudSaveLevelInfo& operator=(CloudSaveLevelInfo const&);
    CloudSaveLevelInfo(CloudSaveLevelInfo const&);
    CloudSaveLevelInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0CloudSaveLevelInfo@@QEAA@AEBVCompoundTag@@@Z
    MCAPI explicit CloudSaveLevelInfo(class CompoundTag const&);

    // symbol: ?hasInfo@CloudSaveLevelInfo@@QEBA?B_NXZ
    MCAPI bool const hasInfo() const;

    // symbol: ?serialize@CloudSaveLevelInfo@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void serialize(class CompoundTag&) const;

    // symbol: ??1CloudSaveLevelInfo@@QEAA@XZ
    MCAPI ~CloudSaveLevelInfo();

    // NOLINTEND
};
