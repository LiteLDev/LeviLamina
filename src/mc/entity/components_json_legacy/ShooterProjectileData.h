#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShooterProjectileData {
public:
    // prevent constructor by default
    ShooterProjectileData();

public:
    // NOLINTBEGIN
    MCAPI ShooterProjectileData(struct ShooterProjectileData const&);

    MCAPI struct ShooterProjectileData& operator=(struct ShooterProjectileData const&);

    MCAPI void setActorDefByName(std::string const& name);

    MCAPI ~ShooterProjectileData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
