#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorDefinitionIdentifier;
// clang-format on

struct AddRiderComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mPassengerType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void reloadComponent(::Actor& owner);

    MCNAPI ~AddRiderComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
