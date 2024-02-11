#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/Factory.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ActorCommandResponse {
public:
    // prevent constructor by default
    ActorCommandResponse& operator=(ActorCommandResponse const&);
    ActorCommandResponse(ActorCommandResponse const&);
    ActorCommandResponse();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@ActorCommandResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UActorEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VActorEventResponse@@$$V@@@Z
    MCVAPI void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>>&
                                                       root,
        class Factory<class ActorEventResponse> const& factory
    ) const;

    // symbol: ?executeAction@ActorCommandResponse@@UEBAXAEAVRenderParams@@@Z
    MCVAPI void executeAction(class RenderParams& pars) const;

    // symbol: ?getName@ActorCommandResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string const& getName() const;

    // NOLINTEND
};
