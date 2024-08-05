#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CloudSaveLevelInfo {
public:
    // prevent constructor by default
    CloudSaveLevelInfo& operator=(CloudSaveLevelInfo const&);
    CloudSaveLevelInfo();

public:
    // NOLINTBEGIN
    MCAPI CloudSaveLevelInfo(class CloudSaveLevelInfo const&);

    MCAPI explicit CloudSaveLevelInfo(class CompoundTag const&);

    MCAPI bool const hasInfo() const;

    MCAPI void serialize(class CompoundTag&) const;

    MCAPI ~CloudSaveLevelInfo();

    // NOLINTEND
};
