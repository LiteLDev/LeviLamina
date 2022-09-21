/**
 * @file  MC/BreathableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreathableComponent.
 *
 */
class BreathableComponent {

#define AFTER_EXTRA
// Add Member There
public:
enum class BreathableState;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREATHABLECOMPONENT
public:
    class BreathableComponent& operator=(class BreathableComponent const &) = delete;
#endif

public:
    /**
     * @hash   2023175215
     * @symbol ??0BreathableComponent@@QEAA@XZ
     */
    MCAPI BreathableComponent();
    /**
     * @hash   -1217475743
     * @symbol ??0BreathableComponent@@QEAA@AEBV0@@Z
     */
    MCAPI BreathableComponent(class BreathableComponent const &);
    /**
     * @hash   1967353544
     * @symbol ?addAdditionalSaveData@BreathableComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -2060432273
     * @symbol ?canBreathe@BreathableComponent@@QEBA_NAEBVActor@@@Z
     */
    MCAPI bool canBreathe(class Actor const &) const;
    /**
     * @hash   -2051185670
     * @symbol ?generatesBubbles@BreathableComponent@@QEBA_NXZ
     */
    MCAPI bool generatesBubbles() const;
    /**
     * @hash   1939982568
     * @symbol ?getAirRegenPerTick@BreathableComponent@@QEBAHXZ
     */
    MCAPI int getAirRegenPerTick() const;
    /**
     * @hash   659097521
     * @symbol ?getAirSupply@BreathableComponent@@QEBAFXZ
     */
    MCAPI short getAirSupply() const;
    /**
     * @hash   -1017860926
     * @symbol ?getBreathableState@BreathableComponent@@QEAAAEAW4BreathableState@1@XZ
     */
    MCAPI enum BreathableComponent::BreathableState & getBreathableState();
    /**
     * @hash   -1837285782
     * @symbol ?getInhaleTime@BreathableComponent@@QEBAMXZ
     */
    MCAPI float getInhaleTime() const;
    /**
     * @hash   -617502029
     * @symbol ?getMaxAirSupply@BreathableComponent@@QEBAFXZ
     */
    MCAPI short getMaxAirSupply() const;
    /**
     * @hash   -695846788
     * @symbol ?getSuffocateTime@BreathableComponent@@QEBAHXZ
     */
    MCAPI int getSuffocateTime() const;
    /**
     * @hash   -839443366
     * @symbol ??4BreathableComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class BreathableComponent & operator=(class BreathableComponent &&);
    /**
     * @hash   -781543754
     * @symbol ?readAdditionalSaveData@BreathableComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1262443215
     * @symbol ?setAirSupply@BreathableComponent@@QEAAXF@Z
     */
    MCAPI void setAirSupply(short);
    /**
     * @hash   178740206
     * @symbol ?updateBreathableState@BreathableComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void updateBreathableState(class Actor &);
    /**
     * @hash   -65086945
     * @symbol ??1BreathableComponent@@QEAA@XZ
     */
    MCAPI ~BreathableComponent();

};