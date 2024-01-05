#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreathableComponent {
public:
    // BreathableComponent inner types define
    enum class BreathableState {};

public:
    // prevent constructor by default
    BreathableComponent& operator=(BreathableComponent const&);
    BreathableComponent(BreathableComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BreathableComponent@@QEAA@XZ
    MCAPI BreathableComponent();

    // symbol: ?addAdditionalSaveData@BreathableComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?canBreathe@BreathableComponent@@QEBA_NAEBVActor@@@Z
    MCAPI bool canBreathe(class Actor const& owner) const;

    // symbol: ?generatesBubbles@BreathableComponent@@QEBA_NXZ
    MCAPI bool generatesBubbles() const;

    // symbol: ?getAirRegenPerTick@BreathableComponent@@QEBAHXZ
    MCAPI int getAirRegenPerTick() const;

    // symbol: ?getAirSupply@BreathableComponent@@QEBAFXZ
    MCAPI short getAirSupply() const;

    // symbol: ?getBreathableState@BreathableComponent@@QEAAAEAW4BreathableState@1@XZ
    MCAPI ::BreathableComponent::BreathableState& getBreathableState();

    // symbol: ?getInhaleTime@BreathableComponent@@QEBAMXZ
    MCAPI float getInhaleTime() const;

    // symbol: ?getMaxAirSupply@BreathableComponent@@QEBAFXZ
    MCAPI short getMaxAirSupply() const;

    // symbol: ?getSuffocateTime@BreathableComponent@@QEBAHXZ
    MCAPI int getSuffocateTime() const;

    // symbol: ??4BreathableComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class BreathableComponent& operator=(class BreathableComponent&&);

    // symbol: ?readAdditionalSaveData@BreathableComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper&);

    // symbol: ?setAirSupply@BreathableComponent@@QEAAXF@Z
    MCAPI void setAirSupply(short supply);

    // symbol: ?updateBreathableState@BreathableComponent@@QEAAXAEAVActor@@@Z
    MCAPI void updateBreathableState(class Actor& owner);

    // symbol: ??1BreathableComponent@@QEAA@XZ
    MCAPI ~BreathableComponent();

    // NOLINTEND
};
