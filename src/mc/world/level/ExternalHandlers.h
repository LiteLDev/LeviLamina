#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ExternalHandlers {
// NOLINTBEGIN
// symbol:
// ?executeActorTrigger@ExternalHandlers@@YAXAEAVActor@@AEBVActorDefinitionTrigger@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@std@@AEBVVariantParameterList@@@Z
MCAPI void
executeActorTrigger(class Actor&, class ActorDefinitionTrigger const&, std::vector<std::pair<std::string const, std::string const>>&, class VariantParameterList const&);

// symbol:
// ?executeBlockEvent@ExternalHandlers@@YAXPEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
MCAPI void executeBlockEvent(class Block const*, std::string const&, class RenderParams&);

// symbol: ?executeBlockTrigger@ExternalHandlers@@YAXAEBVBlock@@AEBVDefinitionTrigger@@AEAVRenderParams@@@Z
MCAPI void executeBlockTrigger(class Block const&, class DefinitionTrigger const&, class RenderParams&);

// symbol: ?executeEventResponse@ExternalHandlers@@YAXAEBVEventResponse@@AEAVRenderParams@@@Z
MCAPI void executeEventResponse(class EventResponse const&, class RenderParams&);

// symbol:
// ?executeItemStackEvent@ExternalHandlers@@YA_NAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
MCAPI bool executeItemStackEvent(class ItemStackBase&, std::string const&, class RenderParams&);
// NOLINTEND

}; // namespace ExternalHandlers
