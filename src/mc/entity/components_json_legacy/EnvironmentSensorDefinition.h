#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
// clang-format on

class EnvironmentSensorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> mTriggers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void addEnvironmentTrigger(::ActorDefinitionTrigger const& trigger);
    // NOLINTEND
};
