#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShooterProjectileData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOOTERPROJECTILEDATA
public:
    ShooterProjectileData() = delete;
#endif

public:
    /**
     * @symbol ??0ShooterProjectileData\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ShooterProjectileData(struct ShooterProjectileData const&);
    /**
     * @symbol ??4ShooterProjectileData\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ShooterProjectileData& operator=(struct ShooterProjectileData const&);
    /**
     * @symbol
     * ?setActorDefByName\@ShooterProjectileData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setActorDefByName(std::string const&);
    /**
     * @symbol ??1ShooterProjectileData\@\@QEAA\@XZ
     */
    MCAPI ~ShooterProjectileData();
};
