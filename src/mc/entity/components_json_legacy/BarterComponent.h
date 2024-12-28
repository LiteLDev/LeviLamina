#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorUniqueID;
// clang-format on

class BarterComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9c2a5f;
    ::ll::UntypedStorage<2, 2> mUnkfd7a63;
    ::ll::UntypedStorage<1, 1> mUnk692957;
    // NOLINTEND

public:
    // prevent constructor by default
    BarterComponent& operator=(BarterComponent const&);
    BarterComponent(BarterComponent const&);
    BarterComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onBarterItemPickedUp(::Actor const& owner, ::ActorUniqueID actorUniqueID, short barterItemId);

    MCAPI void stopBarter();
    // NOLINTEND
};
