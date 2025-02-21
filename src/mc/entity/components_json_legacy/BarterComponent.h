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
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mItemOriginationActorUniqueID;
    ::ll::TypedStorage<2, 2, short>           mBarterItemId;
    ::ll::TypedStorage<1, 1, bool>            mExecuteTrade;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onBarterItemPickedUp(::Actor const& owner, ::ActorUniqueID actorUniqueID, short barterItemId);
    // NOLINTEND
};
