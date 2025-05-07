#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
// clang-format on

class Creeper : public ::Monster {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdee87c;
    ::ll::UntypedStorage<4, 4> mUnk98851d;
    ::ll::UntypedStorage<4, 4> mUnkad2ca7;
    // NOLINTEND

public:
    // prevent constructor by default
    Creeper& operator=(Creeper const&);
    Creeper(Creeper const&);
    Creeper();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 123
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 8
    virtual ~Creeper() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $normalTick();

    MCAPI void $die(::ActorDamageSource const& source);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
