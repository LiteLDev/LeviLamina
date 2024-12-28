#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
// clang-format on

class IllagerBeastBlockedComponent {
public:
    // prevent constructor by default
    IllagerBeastBlockedComponent& operator=(IllagerBeastBlockedComponent const&);
    IllagerBeastBlockedComponent(IllagerBeastBlockedComponent const&);
    IllagerBeastBlockedComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onBlocked(::Actor& owner, ::ActorDamageSource const& source, ::Actor& blocker);
    // NOLINTEND
};
