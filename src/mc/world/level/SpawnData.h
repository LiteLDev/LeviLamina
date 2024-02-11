#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnData {
public:
    // prevent constructor by default
    SpawnData& operator=(SpawnData const&);
    SpawnData();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SpawnData@@UEAA@XZ
    virtual ~SpawnData() = default;

    // symbol: ??0SpawnData@@QEAA@AEBVCompoundTag@@@Z
    MCAPI explicit SpawnData(class CompoundTag const& tag);

    // symbol: ??0SpawnData@@QEAA@AEBV0@@Z
    MCAPI SpawnData(class SpawnData const& rhs);

    // symbol: ??0SpawnData@@QEAA@HUActorDefinitionIdentifier@@@Z
    MCAPI SpawnData(int randomWeight, struct ActorDefinitionIdentifier actorId);

    // symbol: ?save@SpawnData@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> save();

    // NOLINTEND
};
