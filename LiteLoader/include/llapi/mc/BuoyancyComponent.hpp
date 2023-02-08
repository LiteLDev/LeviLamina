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
     * @hash   -2021060183
     * @symbol  ??0BuoyancyComponent\@\@QEAA\@XZ
     */
    MCAPI BuoyancyComponent();
    /**
     * @hash   -1615306879
     * @symbol  ??0BuoyancyComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI BuoyancyComponent(class BuoyancyComponent const &);
    /**
     * @hash   1754570323
     * @symbol  ?canFloat\@BuoyancyComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool canFloat(class Actor const &) const;
    /**
     * @hash   1012557060
     * @symbol  ?getBaseBuoyancy\@BuoyancyComponent\@\@QEBAMXZ
     */
    MCAPI float getBaseBuoyancy() const;
    /**
     * @hash   1524774250
     * @symbol  ?getBigWaveProbability\@BuoyancyComponent\@\@QEBAMXZ
     */
    MCAPI float getBigWaveProbability() const;
    /**
     * @hash   2049174112
     * @symbol  ?getBigWaveSpeedMultiplier\@BuoyancyComponent\@\@QEBAMXZ
     */
    MCAPI float getBigWaveSpeedMultiplier() const;
    /**
     * @hash   -1715181364
     * @symbol  ?getTimer\@BuoyancyComponent\@\@QEBANXZ
     */
    MCAPI double getTimer() const;
    /**
     * @hash   536639454
     * @symbol  ?increaseTimer\@BuoyancyComponent\@\@QEAAXM\@Z
     */
    MCAPI void increaseTimer(float);
    /**
     * @hash   232701687
     * @symbol  ?loadData\@BuoyancyComponent\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void loadData(std::string const &, class SemVersion const &);
    /**
     * @hash   235785285
     * @symbol  ?needToResurface\@BuoyancyComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool needToResurface(class Actor const &) const;
    /**
     * @hash   -656980514
     * @symbol  ??4BuoyancyComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class BuoyancyComponent & operator=(class BuoyancyComponent &&);
    /**
     * @hash   -975571306
     * @symbol  ?shouldApplyGravity\@BuoyancyComponent\@\@QEBA_NXZ
     */
    MCAPI bool shouldApplyGravity() const;
    /**
     * @hash   2128185924
     * @symbol  ?shouldSimulateWaves\@BuoyancyComponent\@\@QEBA_NXZ
     */
    MCAPI bool shouldSimulateWaves() const;

};