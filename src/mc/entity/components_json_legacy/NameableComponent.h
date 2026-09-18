#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Interaction;
class Player;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class NameableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mAllowNameTagRenaming;
    ::ll::TypedStorage<1, 1, bool> mAlwaysShow;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Interaction getInteraction(::Actor& owner, ::Player& player);

    MCAPI void nameEntity(::Actor& owner, ::Bedrock::Safety::RedactableString const& name);
    // NOLINTEND
};
