#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorUniqueID;
struct SynchedActorDataComponent;
// clang-format on

namespace FireworksMovementSystems {

struct IsRocketNotAttachedToThis {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID const&>                                                   mThis;
    ::ll::TypedStorage<8, 8, ::ViewT<::StrictEntityContext, ::SynchedActorDataComponent const> const&> mView;
    // NOLINTEND

public:
    // prevent constructor by default
    IsRocketNotAttachedToThis& operator=(IsRocketNotAttachedToThis const&);
    IsRocketNotAttachedToThis(IsRocketNotAttachedToThis const&);
    IsRocketNotAttachedToThis();
};

} // namespace FireworksMovementSystems
