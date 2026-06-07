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
    virtual ~OnHitSubcomponent();

    virtual void readfromJSON(::Json::Value& component) = 0;

    virtual void writetoJSON(::Json::Value& component) const = 0;

    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) = 0;

    virtual char const* getName() const;
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
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
