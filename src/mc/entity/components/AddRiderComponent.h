#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorDefinitionIdentifier;
// clang-format on

struct AddRiderComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionIdentifier>> mPassengersTypes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void reloadComponent(::Actor& owner);
    // NOLINTEND
};
