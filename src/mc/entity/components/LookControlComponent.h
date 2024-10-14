#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookControlComponent {
public:
    // prevent constructor by default
    LookControlComponent& operator=(LookControlComponent const&);
    LookControlComponent(LookControlComponent const&);

public:
    // NOLINTBEGIN
    MCAPI LookControlComponent();

    MCAPI bool getHasWantedPosition() const;

    MCAPI bool getHasWantedRotation() const;

    MCAPI class Vec3 getWantedPosition() const;

    MCAPI class Vec3 getWantedRotation() const;

    MCAPI float getXMax() const;

    MCAPI float getYMax() const;

    MCAPI void initialize(class Mob& owner);

    MCAPI class LookControlComponent& operator=(class LookControlComponent&&);

    MCAPI void setHasWantedPosition(bool hasWantedPosition);

    MCAPI void setHasWantedRotation(bool hasWantedRotation);

    MCAPI void setInternalType(std::unique_ptr<class LookControl> type);

    MCAPI void setLookAtPosition(class Actor const* target, float yMax, float xMax);

    MCAPI void setLookAtPosition(class Vec3 const& position, float yMax, float xMax);

    MCAPI void setLookAtRotation(class Vec3 const& rotation, float yMax, float xMax);

    MCAPI void setYMax(float yMax);

    MCAPI void update(class Mob& owner);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
