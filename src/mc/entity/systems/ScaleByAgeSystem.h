#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace ScaleByAgeSystem {
// NOLINTBEGIN
// symbol:
// ?_tick@ScaleByAgeSystem@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorTickedFlag@@@@@@@entt@@AEBVStrictEntityContext@@AEBVAgeableComponent@@AEAUActorDataBoundingBoxComponent@@AEAUActorDataDirtyFlagsComponent@@AEAVActorOwnerComponent@@AEAVScaleByAgeComponent@@V?$EntityModifier@UShouldUpdateBoundingBoxRequestComponent@@@@@Z
MCAPI void
_tick(entt::type_list<struct Include<class FlagComponent<struct ActorTickedFlag>>>, class StrictEntityContext const&, class AgeableComponent const&, struct ActorDataBoundingBoxComponent&, struct ActorDataDirtyFlagsComponent&, class ActorOwnerComponent&, class ScaleByAgeComponent&, class EntityModifier<struct ShouldUpdateBoundingBoxRequestComponent>);

// symbol: ?registerSystems@ScaleByAgeSystem@@YAXAEAVEntitySystems@@AEBVBaseGameVersion@@@Z
MCAPI void registerSystems(class EntitySystems&, class BaseGameVersion const&);
// NOLINTEND

}; // namespace ScaleByAgeSystem
