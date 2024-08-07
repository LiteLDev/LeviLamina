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
    // vIndex: 0
    virtual ~EmitVibrationResponse() = default;

    // vIndex: 1
    virtual std::string const& getName() const;

    // vIndex: 2
    virtual void executeAction(class RenderParams&) const;

    // vIndex: 3
    virtual void
    buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>>&, class Factory<class ActorEventResponse> const&)
        const;

    MCAPI static std::string const NameID;

    // NOLINTEND
};
