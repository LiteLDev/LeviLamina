#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyStructureActorInfo {
public:
    // prevent constructor by default
    LegacyStructureActorInfo& operator=(LegacyStructureActorInfo const&);
    LegacyStructureActorInfo(LegacyStructureActorInfo const&);
    LegacyStructureActorInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0LegacyStructureActorInfo@@QEAA@AEBVVec3@@AEBVBlockPos@@VCompoundTag@@@Z
    MCAPI LegacyStructureActorInfo(class Vec3 const& pos, class BlockPos const& blockPos, class CompoundTag tag);

    // NOLINTEND
};
