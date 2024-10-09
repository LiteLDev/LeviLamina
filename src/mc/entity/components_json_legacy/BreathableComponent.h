#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreathableComponent {
public:
    // BreathableComponent inner types define
    enum class BreathableState {};

public:
    // prevent constructor by default
    BreathableComponent& operator=(BreathableComponent const&);

public:
    // NOLINTBEGIN
    MCAPI BreathableComponent();

    MCAPI BreathableComponent(class BreathableComponent const&);

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI bool canBreathe(class Actor const& owner) const;

    MCAPI bool generatesBubbles() const;

    MCAPI int getAirRegenPerTick() const;

    MCAPI short getAirSupply() const;

    MCAPI ::BreathableComponent::BreathableState& getBreathableState();

    MCAPI float getInhaleTime() const;

    MCAPI short getMaxAirSupply() const;

    MCAPI int getSuffocateTime() const;

    MCAPI class BreathableComponent& operator=(class BreathableComponent&&);

    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper&);

    MCAPI void setAirSupply(short supply);

    MCAPI void updateBreathableState(class Actor& owner);

    MCAPI ~BreathableComponent();

    // NOLINTEND
};
