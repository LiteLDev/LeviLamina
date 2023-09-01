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
    ActorCommandResponse& operator=(ActorCommandResponse const&) = delete;
    ActorCommandResponse(ActorCommandResponse const&)            = delete;
    ActorCommandResponse()                                       = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?getName@ActorCommandResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol: ?executeAction@ActorCommandResponse@@UEBAXAEAVRenderParams@@@Z
    virtual void executeAction(class RenderParams&) const;

    // vIndex: 3, symbol:
    // ?buildSchema@ActorCommandResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UActorEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VActorEventResponse@@$$V@@@Z
    virtual void
    buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>>&, class Factory<class ActorEventResponse> const&)
        const;

    // NOLINTEND
};
