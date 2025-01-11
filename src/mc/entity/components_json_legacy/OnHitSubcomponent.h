#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class OnHitSubcomponent {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnHitSubcomponent();

    // vIndex: 1
    virtual void readfromJSON(::Json::Value&) = 0;

    // vIndex: 2
    virtual void writetoJSON(::Json::Value&) const = 0;

    // vIndex: 3
    virtual void doOnHitEffect(::Actor&, ::ProjectileComponent&) = 0;

    // vIndex: 4
    virtual char const* getName();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OnHitSubcomponent();

    MCAPI bool _canAttack(::Actor* projectileOwnerActor, ::Actor* hitActor) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $getName();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
