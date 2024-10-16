#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ParticleOnHitSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    ParticleOnHitSubcomponent& operator=(ParticleOnHitSubcomponent const&);
    ParticleOnHitSubcomponent(ParticleOnHitSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ParticleOnHitSubcomponent() = default;

    // vIndex: 1
    virtual void readfromJSON(class Json::Value& value, class SemVersion const&);

    // vIndex: 2
    virtual void writetoJSON(class Json::Value& component) const;

    // vIndex: 3
    virtual void doOnHitEffect(class Actor& owner, class ProjectileComponent& component);

    // vIndex: 4
    virtual char const* getName();

    MCAPI ParticleOnHitSubcomponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void doOnHitEffect$(class Actor& owner, class ProjectileComponent& component);

    MCAPI char const* getName$();

    MCAPI void readfromJSON$(class Json::Value& value, class SemVersion const&);

    MCAPI void writetoJSON$(class Json::Value& component) const;

    // NOLINTEND
};
