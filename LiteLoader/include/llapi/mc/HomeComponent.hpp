/**
 * @file  HomeComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HomeComponent.
 *
 */
class HomeComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOMECOMPONENT
public:
    class HomeComponent& operator=(class HomeComponent const &) = delete;
    HomeComponent(class HomeComponent const &) = delete;
#endif

public:
    /**
     * @hash   1812104042
     * @symbol ??0HomeComponent@@QEAA@XZ
     */
    MCAPI HomeComponent();
    /**
     * @hash   992149752
     * @symbol ?addAdditionalSaveData@HomeComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   1994372290
     * @symbol ?getHomeDimension@HomeComponent@@QEBA?AV?$AutomaticID@VDimension@@H@@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getHomeDimension() const;
    /**
     * @hash   -1594541554
     * @symbol ?getHomePos@HomeComponent@@QEBA?AVBlockPos@@XZ
     */
    MCAPI class BlockPos getHomePos() const;
    /**
     * @hash   -1921934970
     * @symbol ?getRestrictionRadius@HomeComponent@@QEBAHXZ
     */
    MCAPI int getRestrictionRadius() const;
    /**
     * @hash   1406972116
     * @symbol ?hasRestriction@HomeComponent@@QEBA_NXZ
     */
    MCAPI bool hasRestriction() const;
    /**
     * @hash   1828834786
     * @symbol ?hasValidHomePos@HomeComponent@@QEBA_NXZ
     */
    MCAPI bool hasValidHomePos() const;
    /**
     * @hash   1546658691
     * @symbol ?isWithinRestriction@HomeComponent@@QEBA_NAEBVBlockPos@@@Z
     */
    MCAPI bool isWithinRestriction(class BlockPos const &) const;
    /**
     * @hash   1943514400
     * @symbol ??4HomeComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class HomeComponent & operator=(class HomeComponent &&);
    /**
     * @hash   537576252
     * @symbol ?readAdditionalSaveData@HomeComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1434732977
     * @symbol ?setHome@HomeComponent@@QEAAXAEBVBlockPos@@AEBV?$AutomaticID@VDimension@@H@@@Z
     */
    MCAPI void setHome(class BlockPos const &, class AutomaticID<class Dimension, int> const &);
    /**
     * @hash   -1547359630
     * @symbol ?tick@HomeComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void tick(class Actor &);

};