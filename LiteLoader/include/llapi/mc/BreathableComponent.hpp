/**
 * @file  BreathableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
    BreathableComponent(class BreathableComponent const &) = delete;
#endif

public:
    /**
     * @hash   1058807871
     * @symbol  ??0BreathableComponent\@\@QEAA\@XZ
     */
    MCAPI BreathableComponent();
    /**
     * @hash   1002986200
     * @symbol  ?addAdditionalSaveData\@BreathableComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   1270167679
     * @symbol  ?canBreathe\@BreathableComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool canBreathe(class Actor const &) const;
    /**
     * @hash   -1946106086
     * @symbol  ?generatesBubbles\@BreathableComponent\@\@QEBA_NXZ
     */
    MCAPI bool generatesBubbles() const;
    /**
     * @hash   2067418856
     * @symbol  ?getAirRegenPerTick\@BreathableComponent\@\@QEBAHXZ
     */
    MCAPI int getAirRegenPerTick() const;
    /**
     * @hash   -305269823
     * @symbol  ?getAirSupply\@BreathableComponent\@\@QEBAFXZ
     */
    MCAPI short getAirSupply() const;
    /**
     * @hash   -1869983470
     * @symbol  ?getBreathableState\@BreathableComponent\@\@QEAAAEAW4BreathableState\@1\@XZ
     */
    MCAPI enum class BreathableComponent::BreathableState & getBreathableState();
    /**
     * @hash   -1571757638
     * @symbol  ?getInhaleTime\@BreathableComponent\@\@QEBAMXZ
     */
    MCAPI float getInhaleTime() const;
    /**
     * @hash   -1581869373
     * @symbol  ?getMaxAirSupply\@BreathableComponent\@\@QEBAFXZ
     */
    MCAPI short getMaxAirSupply() const;
    /**
     * @hash   -444833588
     * @symbol  ?getSuffocateTime\@BreathableComponent\@\@QEBAHXZ
     */
    MCAPI int getSuffocateTime() const;
    /**
     * @hash   -702643094
     * @symbol  ??4BreathableComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class BreathableComponent & operator=(class BreathableComponent &&);
    /**
     * @hash   -1745911098
     * @symbol  ?readAdditionalSaveData\@BreathableComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   298075871
     * @symbol  ?setAirSupply\@BreathableComponent\@\@QEAAXF\@Z
     */
    MCAPI void setAirSupply(short);
    /**
     * @hash   -785627138
     * @symbol  ?updateBreathableState\@BreathableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void updateBreathableState(class Actor &);
    /**
     * @hash   72328367
     * @symbol  ??1BreathableComponent\@\@QEAA\@XZ
     */
    MCAPI ~BreathableComponent();

};