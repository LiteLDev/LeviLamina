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
    // vIndex: 0, symbol: __gen_??1ActorCommandResponse@@UEAA@XZ
    virtual ~ActorCommandResponse() = default;

    // vIndex: 1, symbol:
    // ?getName@ActorCommandResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol: ?executeAction@ActorCommandResponse@@UEBAXAEAVRenderParams@@@Z
    virtual void executeAction(class RenderParams&) const;

    // vIndex: 3, symbol:
    // ?buildSchema@ActorCommandResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UActorEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VActorEventResponse@@$$V@@@Z
    virtual void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>>&
                                                       root,
        class Factory<class ActorEventResponse> const& factory
    ) const;

    // NOLINTEND
};
