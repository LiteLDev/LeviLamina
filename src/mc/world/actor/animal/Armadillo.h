#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class Armadillo : public ::Animal {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual float getShadowRadius() const /*override*/;

    virtual ~Armadillo() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> getCustomHurtSound(::Mob& mob);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getShadowRadius() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
