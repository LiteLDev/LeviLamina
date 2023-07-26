#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShooterProjectileData {

public:
    // prevent constructor by default
    ShooterProjectileData() = delete;

public:
    /**
     * @symbol ??0ShooterProjectileData\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ShooterProjectileData(struct ShooterProjectileData const&); // NOLINT
    /**
     * @symbol ??4ShooterProjectileData\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ShooterProjectileData& operator=(struct ShooterProjectileData const&); // NOLINT
    /**
     * @symbol
     * ?setActorDefByName\@ShooterProjectileData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setActorDefByName(std::string const&); // NOLINT
    /**
     * @symbol ??1ShooterProjectileData\@\@QEAA\@XZ
     */
    MCAPI ~ShooterProjectileData(); // NOLINT
};
