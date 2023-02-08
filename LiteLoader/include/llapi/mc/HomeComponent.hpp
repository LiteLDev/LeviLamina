/**
 * @file  HomeComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   968130778
     * @symbol  ??0HomeComponent\@\@QEAA\@XZ
     */
    MCAPI HomeComponent();
    /**
     * @hash   148176488
     * @symbol  ?addAdditionalSaveData\@HomeComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   1150429778
     * @symbol  ?getHomeDimension\@HomeComponent\@\@QEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getHomeDimension() const;
    /**
     * @hash   1856483230
     * @symbol  ?getHomePos\@HomeComponent\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getHomePos() const;
    /**
     * @hash   -1670921770
     * @symbol  ?getRestrictionRadius\@HomeComponent\@\@QEBAHXZ
     */
    MCAPI int getRestrictionRadius() const;
    /**
     * @hash   563029604
     * @symbol  ?hasRestriction\@HomeComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasRestriction() const;
    /**
     * @hash   984892274
     * @symbol  ?hasValidHomePos\@HomeComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasValidHomePos() const;
    /**
     * @hash   702716179
     * @symbol  ?isWithinRestriction\@HomeComponent\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isWithinRestriction(class BlockPos const &) const;
    /**
     * @hash   -2127301568
     * @symbol  ??4HomeComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class HomeComponent & operator=(class HomeComponent &&);
    /**
     * @hash   -306366260
     * @symbol  ?readAdditionalSaveData\@HomeComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   590805841
     * @symbol  ?setHome\@HomeComponent\@\@QEAAXAEBVBlockPos\@\@AEBV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void setHome(class BlockPos const &, class AutomaticID<class Dimension, int> const &);
    /**
     * @hash   1903680530
     * @symbol  ?tick\@HomeComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void tick(class Actor &);

};