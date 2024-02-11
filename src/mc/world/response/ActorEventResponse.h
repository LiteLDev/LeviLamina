#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/Factory.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ActorEventResponse {
public:
    // prevent constructor by default
    ActorEventResponse& operator=(ActorEventResponse const&);
    ActorEventResponse(ActorEventResponse const&);
    ActorEventResponse();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorEventResponse@@UEAA@XZ
    virtual ~ActorEventResponse() = default;

    // vIndex: 1, symbol:
    // ?getName@ActorEventResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol: ?executeAction@EmitVibrationResponse@@UEBAXAEAVRenderParams@@@Z
    virtual void executeAction(class RenderParams&) const = 0;

    // vIndex: 3, symbol:
    // ?buildSchema@ActorEventResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UActorEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VActorEventResponse@@$$V@@@Z
    virtual void
    buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>>&, class Factory<class ActorEventResponse> const&)
        const;

    // NOLINTEND
};
