#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
struct ActorUniqueID;
struct NpcDialogueScene;
// clang-format on

namespace NpcHelpers {
// functions
// NOLINTBEGIN
MCAPI ::ActorUniqueID const tryGetActorUniqueId(::WeakEntityRef const& ref);

MCAPI ::NpcDialogueScene* tryGetScene(::WeakEntityRef const& entityRef, ::std::string const& scene);
// NOLINTEND

}
