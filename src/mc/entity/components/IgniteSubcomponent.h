#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class IgniteSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    IgniteSubcomponent& operator=(IgniteSubcomponent const&);
    IgniteSubcomponent(IgniteSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IgniteSubcomponent() = default;

    // vIndex: 1
    virtual void readfromJSON(class Json::Value& component, class SemVersion const& engineVersion);

    // vIndex: 2
    virtual void writetoJSON(class Json::Value& component) const;

    // vIndex: 3
    virtual void doOnHitEffect(class Actor& owner, class ProjectileComponent& component);

    // vIndex: 4
    virtual char const* getName();

    MCAPI IgniteSubcomponent();

    // NOLINTEND
};
