#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementAttributesComponent {
public:
    // MovementAttributesComponent inner types define
    using MemberPtr = ::std::optional<float> MovementAttributesComponent::*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mMovementSpeed;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mUnderwaterMovementSpeed;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mLavaMovementSpeed;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mJumpStrength;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mHealth;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mHunger;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mFrictionModifier;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mBounciness;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mAirDragModifier;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float getAirDragModifier() const;

    MCAPI float getBounciness() const;

    MCAPI float getFrictionModifier() const;

    MCAPI float getHealth() const;

    MCAPI float getHunger() const;

    MCAPI float getJumpStrength() const;

    MCAPI float getLavaMovementSpeed() const;

    MCAPI float getMovementSpeed() const;

    MCFOLD float getUnderwaterMovementSpeed() const;

    MCAPI bool operator==(::MovementAttributesComponent const& other) const;
    // NOLINTEND
};
