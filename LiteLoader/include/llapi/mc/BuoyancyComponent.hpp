/**
 * @file  BuoyancyComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BuoyancyComponent.
 *
 */
class BuoyancyComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUOYANCYCOMPONENT
public:
    class BuoyancyComponent& operator=(class BuoyancyComponent const &) = delete;
#endif

public:
    /**
     * @symbol  ??0BuoyancyComponent\@\@QEAA\@XZ
     */
    MCAPI BuoyancyComponent();
    /**
     * @symbol  ??0BuoyancyComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI BuoyancyComponent(class BuoyancyComponent const &);
    /**
     * @symbol  ?canFloat\@BuoyancyComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool canFloat(class Actor const &) const;
    /**
     * @symbol  ?getBaseBuoyancy\@BuoyancyComponent\@\@QEBAMXZ
     */
    MCAPI float getBaseBuoyancy() const;
    /**
     * @symbol  ?getBigWaveProbability\@BuoyancyComponent\@\@QEBAMXZ
     */
    MCAPI float getBigWaveProbability() const;
    /**
     * @symbol  ?getBigWaveSpeedMultiplier\@BuoyancyComponent\@\@QEBAMXZ
     */
    MCAPI float getBigWaveSpeedMultiplier() const;
    /**
     * @symbol  ?getTimer\@BuoyancyComponent\@\@QEBANXZ
     */
    MCAPI double getTimer() const;
    /**
     * @symbol  ?increaseTimer\@BuoyancyComponent\@\@QEAAXM\@Z
     */
    MCAPI void increaseTimer(float);
    /**
     * @symbol  ?loadData\@BuoyancyComponent\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void loadData(std::string const &, class SemVersion const &);
    /**
     * @symbol  ?needToResurface\@BuoyancyComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool needToResurface(class Actor const &) const;
    /**
     * @symbol  ??4BuoyancyComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class BuoyancyComponent & operator=(class BuoyancyComponent &&);
    /**
     * @symbol  ?shouldApplyGravity\@BuoyancyComponent\@\@QEBA_NXZ
     */
    MCAPI bool shouldApplyGravity() const;
    /**
     * @symbol  ?shouldSimulateWaves\@BuoyancyComponent\@\@QEBA_NXZ
     */
    MCAPI bool shouldSimulateWaves() const;

};