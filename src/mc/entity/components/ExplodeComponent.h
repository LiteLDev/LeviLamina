#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExplodeComponent {

public:
    // prevent constructor by default
    ExplodeComponent& operator=(ExplodeComponent const&) = delete;
    ExplodeComponent(ExplodeComponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ExplodeComponent\@\@QEAA\@XZ
     */
    MCAPI ExplodeComponent();
    /**
     * @symbol ?addAdditionalSaveData\@ExplodeComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?explode\@ExplodeComponent\@\@QEAAXAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void explode(class Actor&, class Vec3 const&);
    /**
     * @symbol ?getFuseLength\@ExplodeComponent\@\@QEBAHXZ
     */
    MCAPI int getFuseLength() const;
    /**
     * @symbol ?getInitialFuseLength\@ExplodeComponent\@\@QEBAHXZ
     */
    MCAPI int getInitialFuseLength() const;
    /**
     * @symbol ?getIsFuseLit\@ExplodeComponent\@\@QEBA_NXZ
     */
    MCAPI bool getIsFuseLit() const;
    /**
     * @symbol ?isFuseLit\@ExplodeComponent\@\@QEBA_NXZ
     */
    MCAPI bool isFuseLit() const;
    /**
     * @symbol
     * ?readAdditionalSaveData\@ExplodeComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?requiresTntExplodeGameRuleEnabled\@ExplodeComponent\@\@QEBA_NXZ
     */
    MCAPI bool requiresTntExplodeGameRuleEnabled() const;
    /**
     * @symbol ?setAllowUnderwater\@ExplodeComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAllowUnderwater(bool);
    /**
     * @symbol ?setFuseLength\@ExplodeComponent\@\@QEAAXH\@Z
     */
    MCAPI void setFuseLength(int);
    /**
     * @symbol ?setTntExpodeGameRuleRequired\@ExplodeComponent\@\@QEAAXXZ
     */
    MCAPI void setTntExpodeGameRuleRequired();
    // NOLINTEND
};
