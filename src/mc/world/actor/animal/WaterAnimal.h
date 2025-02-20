#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Mob.h"

class WaterAnimal : public ::Mob {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 147
    virtual bool checkSpawnRules(bool) /*override*/;

    // vIndex: 177
    virtual float getFlopVerticalVelocityFactor() const;

    // vIndex: 178
    virtual float getFlopHorizontalVelocityFactor() const;

    // vIndex: 8
    virtual ~WaterAnimal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void preAiStep();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $checkSpawnRules(bool);

    MCFOLD float $getFlopVerticalVelocityFactor() const;

    MCAPI float $getFlopHorizontalVelocityFactor() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
