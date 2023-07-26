/**
 * @file  ShooterProjectileData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct ShooterProjectileData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOOTERPROJECTILEDATA
public:
    struct ShooterProjectileData& operator=(struct ShooterProjectileData const &) = delete;
    ShooterProjectileData() = delete;
#endif

public:
    /**
     * @symbol  ??0ShooterProjectileData\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ShooterProjectileData(struct ShooterProjectileData const &);
    /**
     * @symbol  ?setActorDefByName\@ShooterProjectileData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setActorDefByName(std::string const &);
    /**
     * @symbol  ??1ShooterProjectileData\@\@QEAA\@XZ
     */
    MCAPI ~ShooterProjectileData();

};