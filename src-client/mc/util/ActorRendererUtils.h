#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseActorRenderContext;
struct ActorUniqueID;
struct BlockActorRenderData;
// clang-format on

namespace ActorRendererUtils {
// functions
// NOLINTBEGIN
MCNAPI void renderRotatingActor(
    ::BaseActorRenderContext&                             renderContext,
    ::BlockActorRenderData const&                         blockEntityRenderData,
    ::Actor&                                              renderedActor,
    ::std::unordered_map<::std::string, ::ActorUniqueID>& spawnerActorIdMap,
    ::ActorUniqueID&                                      nextSpawnerActorId,
    float                                                 spin,
    float                                                 oSpin
);
// NOLINTEND

} // namespace ActorRendererUtils
