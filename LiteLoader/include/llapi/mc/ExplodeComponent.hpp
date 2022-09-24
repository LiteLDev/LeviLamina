/**
 * @file  ExplodeComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ExplodeComponent.
 *
 */
class ExplodeComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPLODECOMPONENT
public:
    class ExplodeComponent& operator=(class ExplodeComponent const &) = delete;
    ExplodeComponent(class ExplodeComponent const &) = delete;
#endif

public:
    /**
     * @hash   -1157387624
     * @symbol ??0ExplodeComponent@@QEAA@XZ
     */
    MCAPI ExplodeComponent();
    /**
     * @hash   -1784905880
     * @symbol ?addAdditionalSaveData@ExplodeComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -1550641313
     * @symbol ?explode@ExplodeComponent@@QEAAXAEAVActor@@AEBVVec3@@@Z
     */
    MCAPI void explode(class Actor &, class Vec3 const &);
    /**
     * @hash   -451077994
     * @symbol ?getFuseLength@ExplodeComponent@@QEBAHXZ
     */
    MCAPI int getFuseLength() const;
    /**
     * @hash   -753260984
     * @symbol ?getInitialFuseLength@ExplodeComponent@@QEBAHXZ
     */
    MCAPI int getInitialFuseLength() const;
    /**
     * @hash   -1514303246
     * @symbol ?getIsFuseLit@ExplodeComponent@@QEBA_NXZ
     */
    MCAPI bool getIsFuseLit() const;
    /**
     * @hash   1097190464
     * @symbol ?isFuseLit@ExplodeComponent@@QEBA_NXZ
     */
    MCAPI bool isFuseLit() const;
    /**
     * @hash   -192510894
     * @symbol ?readAdditionalSaveData@ExplodeComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   387128244
     * @symbol ?requiresTntExplodeGameRuleEnabled@ExplodeComponent@@QEBA_NXZ
     */
    MCAPI bool requiresTntExplodeGameRuleEnabled() const;
    /**
     * @hash   -1440695142
     * @symbol ?setAllowUnderwater@ExplodeComponent@@QEAAX_N@Z
     */
    MCAPI void setAllowUnderwater(bool);
    /**
     * @hash   -1728928088
     * @symbol ?setFuseLength@ExplodeComponent@@QEAAXH@Z
     */
    MCAPI void setFuseLength(int);
    /**
     * @hash   68883541
     * @symbol ?setTntExpodeGameRuleRequired@ExplodeComponent@@QEAAXXZ
     */
    MCAPI void setTntExpodeGameRuleRequired();

};