#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobSpawnHerdInfo {
public:
    // prevent constructor by default
    MobSpawnHerdInfo(MobSpawnHerdInfo const&);
    MobSpawnHerdInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0MobSpawnHerdInfo@@QEAA@IIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I0I@Z
    MCAPI MobSpawnHerdInfo(uint, uint, std::string const&, uint, std::string const&, uint);

    // symbol: ??4MobSpawnHerdInfo@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct MobSpawnHerdInfo& operator=(struct MobSpawnHerdInfo const&);

    // symbol: ??1MobSpawnHerdInfo@@QEAA@XZ
    MCAPI ~MobSpawnHerdInfo();

    // NOLINTEND
};
