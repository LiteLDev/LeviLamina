#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreathableComponent {
public:
    // BreathableComponent inner types declare
    // clang-format off

    // clang-format on

    // BreathableComponent inner types define
    enum class BreathableState {};

public:
    // prevent constructor by default
    BreathableComponent& operator=(BreathableComponent const&) = delete;
    BreathableComponent(BreathableComponent const&)            = delete;

public:
    /**
     * @symbol ??0BreathableComponent\@\@QEAA\@XZ
     */
    MCAPI BreathableComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@BreathableComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?canBreathe\@BreathableComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool canBreathe(class Actor const&) const; // NOLINT
    /**
     * @symbol ?generatesBubbles\@BreathableComponent\@\@QEBA_NXZ
     */
    MCAPI bool generatesBubbles() const; // NOLINT
    /**
     * @symbol ?getAirRegenPerTick\@BreathableComponent\@\@QEBAHXZ
     */
    MCAPI int getAirRegenPerTick() const; // NOLINT
    /**
     * @symbol ?getAirSupply\@BreathableComponent\@\@QEBAFXZ
     */
    MCAPI short getAirSupply() const; // NOLINT
    /**
     * @symbol ?getBreathableState\@BreathableComponent\@\@QEAAAEAW4BreathableState\@1\@XZ
     */
    MCAPI enum class BreathableComponent::BreathableState& getBreathableState(); // NOLINT
    /**
     * @symbol ?getInhaleTime\@BreathableComponent\@\@QEBAMXZ
     */
    MCAPI float getInhaleTime() const; // NOLINT
    /**
     * @symbol ?getMaxAirSupply\@BreathableComponent\@\@QEBAFXZ
     */
    MCAPI short getMaxAirSupply() const; // NOLINT
    /**
     * @symbol ?getSuffocateTime\@BreathableComponent\@\@QEBAHXZ
     */
    MCAPI int getSuffocateTime() const; // NOLINT
    /**
     * @symbol ??4BreathableComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class BreathableComponent& operator=(class BreathableComponent&&); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@BreathableComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?setAirSupply\@BreathableComponent\@\@QEAAXF\@Z
     */
    MCAPI void setAirSupply(short); // NOLINT
    /**
     * @symbol ?updateBreathableState\@BreathableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void updateBreathableState(class Actor&); // NOLINT
};
