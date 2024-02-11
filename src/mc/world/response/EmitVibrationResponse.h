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

class EmitVibrationResponse : public ::ActorEventResponse {
public:
    // prevent constructor by default
    EmitVibrationResponse& operator=(EmitVibrationResponse const&);
    EmitVibrationResponse(EmitVibrationResponse const&);
    EmitVibrationResponse();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EmitVibrationResponse@@UEAA@XZ
    virtual ~EmitVibrationResponse() = default;

    // vIndex: 1, symbol:
    // ?getName@EmitVibrationResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol: ?executeAction@EmitVibrationResponse@@UEBAXAEAVRenderParams@@@Z
    virtual void executeAction(class RenderParams&) const;

    // vIndex: 3, symbol:
    // ?buildSchema@EmitVibrationResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UActorEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VActorEventResponse@@$$V@@@Z
    virtual void
    buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>>&, class Factory<class ActorEventResponse> const&)
        const;

    // symbol: ?NameID@EmitVibrationResponse@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
