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
     * @symbol  ??0ExplodeComponent\@\@QEAA\@XZ
     */
    MCAPI ExplodeComponent();
    /**
     * @symbol  ?addAdditionalSaveData\@ExplodeComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol  ?explode\@ExplodeComponent\@\@QEAAXAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void explode(class Actor &, class Vec3 const &);
    /**
     * @symbol  ?getFuseLength\@ExplodeComponent\@\@QEBAHXZ
     */
    MCAPI int getFuseLength() const;
    /**
     * @symbol  ?getInitialFuseLength\@ExplodeComponent\@\@QEBAHXZ
     */
    MCAPI int getInitialFuseLength() const;
    /**
     * @symbol  ?getIsFuseLit\@ExplodeComponent\@\@QEBA_NXZ
     */
    MCAPI bool getIsFuseLit() const;
    /**
     * @symbol  ?isFuseLit\@ExplodeComponent\@\@QEBA_NXZ
     */
    MCAPI bool isFuseLit() const;
    /**
     * @symbol  ?readAdditionalSaveData\@ExplodeComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?requiresTntExplodeGameRuleEnabled\@ExplodeComponent\@\@QEBA_NXZ
     */
    MCAPI bool requiresTntExplodeGameRuleEnabled() const;
    /**
     * @symbol  ?setAllowUnderwater\@ExplodeComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAllowUnderwater(bool);
    /**
     * @symbol  ?setFuseLength\@ExplodeComponent\@\@QEAAXH\@Z
     */
    MCAPI void setFuseLength(int);
    /**
     * @symbol  ?setTntExpodeGameRuleRequired\@ExplodeComponent\@\@QEAAXXZ
     */
    MCAPI void setTntExpodeGameRuleRequired();

};