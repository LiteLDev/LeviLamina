#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/Factory.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/response/ActorEventResponse.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SetPropertyResponse : public ::ActorEventResponse {
public:
    // prevent constructor by default
    SetPropertyResponse& operator=(SetPropertyResponse const&);
    SetPropertyResponse(SetPropertyResponse const&);
    SetPropertyResponse();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SetPropertyResponse@@UEAA@XZ
    virtual ~SetPropertyResponse() = default;

    // vIndex: 1, symbol:
    // ?getName@SetPropertyResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol: ?executeAction@SetPropertyResponse@@UEBAXAEAVRenderParams@@@Z
    virtual void executeAction(class RenderParams& params) const;

    // vIndex: 3, symbol:
    // ?buildSchema@SetPropertyResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UActorEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VActorEventResponse@@$$V@@@Z
    virtual void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>>&
                                                       root,
        class Factory<class ActorEventResponse> const& factory
    ) const;

    // symbol: ?NameID@SetPropertyResponse@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
