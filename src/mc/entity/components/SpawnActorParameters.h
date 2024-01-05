#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SpawnActorParameters {
public:
    // prevent constructor by default
    SpawnActorParameters& operator=(SpawnActorParameters const&);

public:
    // NOLINTBEGIN
    // symbol: ??0SpawnActorParameters@@QEAA@XZ
    MCAPI SpawnActorParameters();

    // symbol: ??0SpawnActorParameters@@QEAA@$$QEAU0@@Z
    MCAPI SpawnActorParameters(struct SpawnActorParameters&&);

    // symbol: ??0SpawnActorParameters@@QEAA@AEBU0@@Z
    MCAPI SpawnActorParameters(struct SpawnActorParameters const&);

    // symbol: ?setItem@SpawnActorParameters@@QEAAXAEBVItemDescriptor@@@Z
    MCAPI void setItem(class ItemDescriptor const& itemDescriptor);

    // symbol:
    // ?setSpawnEntity@SpawnActorParameters@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setSpawnEntity(std::string const& name);

    // symbol:
    // ?setSpawnEvent@SpawnActorParameters@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setSpawnEvent(std::string const& name);

    // symbol:
    // ?setSpawnSound@SpawnActorParameters@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setSpawnSound(std::string const& name);

    // symbol: ?setSpawnTimeMax@SpawnActorParameters@@QEAAXAEBH@Z
    MCAPI void setSpawnTimeMax(int const& value);

    // symbol: ?setSpawnTimeMin@SpawnActorParameters@@QEAAXAEBH@Z
    MCAPI void setSpawnTimeMin(int const& value);

    // symbol: ?spawnsItemStack@SpawnActorParameters@@QEBA_NXZ
    MCAPI bool spawnsItemStack() const;

    // symbol: ??1SpawnActorParameters@@QEAA@XZ
    MCAPI ~SpawnActorParameters();

    // NOLINTEND
};
