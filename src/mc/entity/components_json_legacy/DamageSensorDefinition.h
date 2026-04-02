#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DamageSensorComponent;
class EntityContext;
struct DamageSensorTrigger;
// clang-format on

class DamageSensorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DamageSensorTrigger>> mTriggers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addDamageSensorTrigger(::DamageSensorTrigger const& trigger);

    MCAPI void initialize(::EntityContext& entity, ::DamageSensorComponent& component) const;
    // NOLINTEND
};
