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
    virtual ~OnHitSubcomponent() = default;

    virtual void readfromJSON(::Json::Value& component) = 0;

    virtual void writetoJSON(::Json::Value& component) const = 0;

    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) = 0;

    virtual char const* getName() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
