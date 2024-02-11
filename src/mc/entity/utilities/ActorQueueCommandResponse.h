#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/Factory.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/entity/systems/common/CommandOriginSystem.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ActorQueueCommandResponse {
public:
    // prevent constructor by default
    ActorQueueCommandResponse& operator=(ActorQueueCommandResponse const&);
    ActorQueueCommandResponse(ActorQueueCommandResponse const&);
    ActorQueueCommandResponse();

public:
    // NOLINTBEGIN
    // symbol: ?_getCommandOriginSystem@ActorQueueCommandResponse@@MEBA?AW4CommandOriginSystem@@XZ
    MCVAPI ::CommandOriginSystem _getCommandOriginSystem() const;

    // symbol:
    // ?buildSchema@ActorQueueCommandResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UActorEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VActorEventResponse@@$$V@@@Z
    MCVAPI void
    buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>>&, class Factory<class ActorEventResponse> const&)
        const;

    // symbol: ?executeAction@ActorQueueCommandResponse@@UEBAXAEAVRenderParams@@@Z
    MCVAPI void executeAction(class RenderParams&) const;

    // symbol:
    // ?getName@ActorQueueCommandResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string const& getName() const;

    // symbol: ?NameID@ActorQueueCommandResponse@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
