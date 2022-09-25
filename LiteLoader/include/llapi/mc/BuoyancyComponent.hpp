/**
 * @file  BuoyancyComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1086399271
     * @symbol ??0BuoyancyComponent@@QEAA@XZ
     */
    MCAPI BuoyancyComponent();
    /**
     * @hash   -1821698927
     * @symbol ??0BuoyancyComponent@@QEAA@AEBV0@@Z
     */
    MCAPI BuoyancyComponent(class BuoyancyComponent const &);
    /**
     * @hash   -1605966701
     * @symbol ?canFloat@BuoyancyComponent@@QEBA_NAEBVActor@@@Z
     */
    MCAPI bool canFloat(class Actor const &) const;
    /**
     * @hash   747028916
     * @symbol ?getBaseBuoyancy@BuoyancyComponent@@QEBAMXZ
     */
    MCAPI float getBaseBuoyancy() const;
    /**
     * @hash   1259276858
     * @symbol ?getBigWaveProbability@BuoyancyComponent@@QEBAMXZ
     */
    MCAPI float getBigWaveProbability() const;
    /**
     * @hash   1783676720
     * @symbol ?getBigWaveSpeedMultiplier@BuoyancyComponent@@QEBAMXZ
     */
    MCAPI float getBigWaveSpeedMultiplier() const;
    /**
     * @hash   -780751092
     * @symbol ?getTimer@BuoyancyComponent@@QEBANXZ
     */
    MCAPI double getTimer() const;
    /**
     * @hash   1471069726
     * @symbol ?increaseTimer@BuoyancyComponent@@QEAAXM@Z
     */
    MCAPI void increaseTimer(float);
    /**
     * @hash   1167178087
     * @symbol ?loadData@BuoyancyComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@@Z
     */
    MCAPI void loadData(std::string const &, class SemVersion const &);
    /**
     * @hash   1170261685
     * @symbol ?needToResurface@BuoyancyComponent@@QEBA_NAEBVActor@@@Z
     */
    MCAPI bool needToResurface(class Actor const &) const;
    /**
     * @hash   -863249554
     * @symbol ??4BuoyancyComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class BuoyancyComponent & operator=(class BuoyancyComponent &&);
    /**
     * @hash   -41110282
     * @symbol ?shouldApplyGravity@BuoyancyComponent@@QEBA_NXZ
     */
    MCAPI bool shouldApplyGravity() const;
    /**
     * @hash   2023106340
     * @symbol ?shouldSimulateWaves@BuoyancyComponent@@QEBA_NXZ
     */
    MCAPI bool shouldSimulateWaves() const;

};