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
    virtual ~OnHitSubcomponent() = default;

    // vIndex: 1
    virtual void readfromJSON(::Json::Value&) = 0;

    // vIndex: 2
    virtual void writetoJSON(::Json::Value&) const = 0;

    // vIndex: 3
    virtual void doOnHitEffect(::Actor&, ::ProjectileComponent&) = 0;

    // vIndex: 4
    virtual char const* getName() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _canAttack(::Actor* projectileOwnerActor, ::Actor* hitActor) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
