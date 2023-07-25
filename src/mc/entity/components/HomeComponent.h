#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class HomeComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOMECOMPONENT
public:
    HomeComponent& operator=(HomeComponent const&) = delete;
    HomeComponent(HomeComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0HomeComponent\@\@QEAA\@XZ
     */
    MCAPI HomeComponent();
    /**
     * @symbol ?addAdditionalSaveData\@HomeComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?getHomeDimension\@HomeComponent\@\@QEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getHomeDimension() const;
    /**
     * @symbol ?getHomePos\@HomeComponent\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getHomePos() const;
    /**
     * @symbol ?getRestrictionRadius\@HomeComponent\@\@QEBAHXZ
     */
    MCAPI int getRestrictionRadius() const;
    /**
     * @symbol ?hasRestriction\@HomeComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasRestriction() const;
    /**
     * @symbol ?hasValidHomePos\@HomeComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasValidHomePos() const;
    /**
     * @symbol ?isWithinRestriction\@HomeComponent\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isWithinRestriction(class BlockPos const&) const;
    /**
     * @symbol ??4HomeComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class HomeComponent& operator=(class HomeComponent&&);
    /**
     * @symbol ?readAdditionalSaveData\@HomeComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?setHome\@HomeComponent\@\@QEAAXAEBVBlockPos\@\@AEBV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void setHome(class BlockPos const&, class AutomaticID<class Dimension, int> const&);
    /**
     * @symbol ?tick\@HomeComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void tick(class Actor&);
};
