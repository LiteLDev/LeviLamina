#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnData {
public:
    // prevent constructor by default
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

    // symbol: ??4SpawnData@@QEAAAEAV0@AEBV0@@Z
    MCAPI class SpawnData& operator=(class SpawnData const&);

    // symbol: ??8SpawnData@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class SpawnData const&) const;

    // symbol: ?save@SpawnData@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> save();

    // NOLINTEND
};
