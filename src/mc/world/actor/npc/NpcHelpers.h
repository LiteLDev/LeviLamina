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
MCNAPI ::ActorUniqueID const tryGetActorUniqueId(::WeakEntityRef const& ref);

MCNAPI ::NpcDialogueScene* tryGetScene(::WeakEntityRef const& entityRef, ::std::string const& scene);
// NOLINTEND

} // namespace NpcHelpers
