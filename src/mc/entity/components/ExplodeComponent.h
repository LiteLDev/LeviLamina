#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExplodeComponent {

public:
    // prevent constructor by default
    ExplodeComponent& operator=(ExplodeComponent const&) = delete;
    ExplodeComponent(ExplodeComponent const&)            = delete;

public:
    /**
     * @symbol ??0ExplodeComponent\@\@QEAA\@XZ
     */
    MCAPI ExplodeComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@ExplodeComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?explode\@ExplodeComponent\@\@QEAAXAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void explode(class Actor&, class Vec3 const&); // NOLINT
    /**
     * @symbol ?getFuseLength\@ExplodeComponent\@\@QEBAHXZ
     */
    MCAPI int getFuseLength() const; // NOLINT
    /**
     * @symbol ?getInitialFuseLength\@ExplodeComponent\@\@QEBAHXZ
     */
    MCAPI int getInitialFuseLength() const; // NOLINT
    /**
     * @symbol ?getIsFuseLit\@ExplodeComponent\@\@QEBA_NXZ
     */
    MCAPI bool getIsFuseLit() const; // NOLINT
    /**
     * @symbol ?isFuseLit\@ExplodeComponent\@\@QEBA_NXZ
     */
    MCAPI bool isFuseLit() const; // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@ExplodeComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?requiresTntExplodeGameRuleEnabled\@ExplodeComponent\@\@QEBA_NXZ
     */
    MCAPI bool requiresTntExplodeGameRuleEnabled() const; // NOLINT
    /**
     * @symbol ?setAllowUnderwater\@ExplodeComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAllowUnderwater(bool); // NOLINT
    /**
     * @symbol ?setFuseLength\@ExplodeComponent\@\@QEAAXH\@Z
     */
    MCAPI void setFuseLength(int); // NOLINT
    /**
     * @symbol ?setTntExpodeGameRuleRequired\@ExplodeComponent\@\@QEAAXXZ
     */
    MCAPI void setTntExpodeGameRuleRequired(); // NOLINT
};
