#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class OnHitSubcomponent {
public:
    // prevent constructor by default
    OnHitSubcomponent& operator=(OnHitSubcomponent const&);
    OnHitSubcomponent(OnHitSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnHitSubcomponent();

    // vIndex: 1
    virtual void readfromJSON(class Json::Value& component, class SemVersion const& engineVersion) = 0;

    // vIndex: 2
    virtual void writetoJSON(class Json::Value& component) const = 0;

    // vIndex: 3
    virtual void doOnHitEffect(class Actor& owner, class ProjectileComponent& component) = 0;

    // vIndex: 4
    virtual char const* getName();

    MCAPI OnHitSubcomponent();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _canAttack(class Actor* projectileOwnerActor, class Actor* hitActor) const;

    // NOLINTEND
};
