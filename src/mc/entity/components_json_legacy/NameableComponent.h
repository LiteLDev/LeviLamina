#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class Player;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class NameableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkb3857d;
    ::ll::UntypedStorage<1, 1> mUnk1b5885;
    // NOLINTEND

public:
    // prevent constructor by default
    NameableComponent& operator=(NameableComponent const&);
    NameableComponent(NameableComponent const&);
    NameableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCAPI void nameEntity(::Actor& owner, ::Bedrock::Safety::RedactableString const& name);
    // NOLINTEND
};
