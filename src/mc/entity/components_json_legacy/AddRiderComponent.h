#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorDefinitionIdentifier;
// clang-format on

class AddRiderComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mPassengerType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void reloadComponent(::Actor& owner);

    MCAPI ~AddRiderComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
