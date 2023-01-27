/**
 * @file  ExplodeComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -2008618360
     * @symbol  ??0ExplodeComponent\@\@QEAA\@XZ
     */
    MCAPI ExplodeComponent();
    /**
     * @hash   1658830680
     * @symbol  ?addAdditionalSaveData\@ExplodeComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   1893095247
     * @symbol  ?explode\@ExplodeComponent\@\@QEAAXAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void explode(class Actor &, class Vec3 const &);
    /**
     * @hash   -200064794
     * @symbol  ?getFuseLength\@ExplodeComponent\@\@QEBAHXZ
     */
    MCAPI int getFuseLength() const;
    /**
     * @hash   -502247784
     * @symbol  ?getInitialFuseLength\@ExplodeComponent\@\@QEBAHXZ
     */
    MCAPI int getInitialFuseLength() const;
    /**
     * @hash   -1409223662
     * @symbol  ?getIsFuseLit\@ExplodeComponent\@\@QEBA_NXZ
     */
    MCAPI bool getIsFuseLit() const;
    /**
     * @hash   1202270048
     * @symbol  ?isFuseLit\@ExplodeComponent\@\@QEBA_NXZ
     */
    MCAPI bool isFuseLit() const;
    /**
     * @hash   -1043680126
     * @symbol  ?readAdditionalSaveData\@ExplodeComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -464040988
     * @symbol  ?requiresTntExplodeGameRuleEnabled\@ExplodeComponent\@\@QEBA_NXZ
     */
    MCAPI bool requiresTntExplodeGameRuleEnabled() const;
    /**
     * @hash   2003102922
     * @symbol  ?setAllowUnderwater\@ExplodeComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAllowUnderwater(bool);
    /**
     * @hash   1714869976
     * @symbol  ?setFuseLength\@ExplodeComponent\@\@QEAAXH\@Z
     */
    MCAPI void setFuseLength(int);
    /**
     * @hash   -782285691
     * @symbol  ?setTntExpodeGameRuleRequired\@ExplodeComponent\@\@QEAAXXZ
     */
    MCAPI void setTntExpodeGameRuleRequired();

};