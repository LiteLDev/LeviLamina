#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BuoyancyComponent {

public:
    // prevent constructor by default
    BuoyancyComponent& operator=(BuoyancyComponent const&) = delete;
    BuoyancyComponent(BuoyancyComponent const&)            = delete;

public:
    /**
     * @symbol ??0BuoyancyComponent\@\@QEAA\@XZ
     */
    MCAPI BuoyancyComponent(); // NOLINT
    /**
     * @symbol ?canFloat\@BuoyancyComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool canFloat(class Actor const&) const; // NOLINT
    /**
     * @symbol ?getBaseBuoyancy\@BuoyancyComponent\@\@QEBAMXZ
     */
    MCAPI float getBaseBuoyancy() const; // NOLINT
    /**
     * @symbol ?getBigWaveProbability\@BuoyancyComponent\@\@QEBAMXZ
     */
    MCAPI float getBigWaveProbability() const; // NOLINT
    /**
     * @symbol ?getBigWaveSpeedMultiplier\@BuoyancyComponent\@\@QEBAMXZ
     */
    MCAPI float getBigWaveSpeedMultiplier() const; // NOLINT
    /**
     * @symbol ?getTimer\@BuoyancyComponent\@\@QEBANXZ
     */
    MCAPI double getTimer() const; // NOLINT
    /**
     * @symbol ?increaseTimer\@BuoyancyComponent\@\@QEAAXM\@Z
     */
    MCAPI void increaseTimer(float); // NOLINT
    /**
     * @symbol
     * ?loadData\@BuoyancyComponent\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void loadData(std::string const&, class SemVersion const&); // NOLINT
    /**
     * @symbol ?needToResurface\@BuoyancyComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool needToResurface(class Actor const&) const; // NOLINT
    /**
     * @symbol ?shouldApplyGravity\@BuoyancyComponent\@\@QEBA_NXZ
     */
    MCAPI bool shouldApplyGravity() const; // NOLINT
    /**
     * @symbol ?shouldSimulateWaves\@BuoyancyComponent\@\@QEBA_NXZ
     */
    MCAPI bool shouldSimulateWaves() const; // NOLINT
};
