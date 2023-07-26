#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class HomeComponent {

public:
    // prevent constructor by default
    HomeComponent& operator=(HomeComponent const&) = delete;
    HomeComponent(HomeComponent const&)            = delete;

public:
    /**
     * @symbol ??0HomeComponent\@\@QEAA\@XZ
     */
    MCAPI HomeComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@HomeComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?getHomeDimension\@HomeComponent\@\@QEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getHomeDimension() const; // NOLINT
    /**
     * @symbol ?getHomePos\@HomeComponent\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getHomePos() const; // NOLINT
    /**
     * @symbol ?getRestrictionRadius\@HomeComponent\@\@QEBAHXZ
     */
    MCAPI int getRestrictionRadius() const; // NOLINT
    /**
     * @symbol ?hasRestriction\@HomeComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasRestriction() const; // NOLINT
    /**
     * @symbol ?hasValidHomePos\@HomeComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasValidHomePos() const; // NOLINT
    /**
     * @symbol ?isWithinRestriction\@HomeComponent\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isWithinRestriction(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ??4HomeComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class HomeComponent& operator=(class HomeComponent&&); // NOLINT
    /**
     * @symbol ?readAdditionalSaveData\@HomeComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?setHome\@HomeComponent\@\@QEAAXAEBVBlockPos\@\@AEBV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void setHome(class BlockPos const&, class AutomaticID<class Dimension, int> const&); // NOLINT
    /**
     * @symbol ?tick\@HomeComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void tick(class Actor&); // NOLINT
};
