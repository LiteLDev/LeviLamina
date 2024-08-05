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
    MCVAPI ::CommandOriginSystem _getCommandOriginSystem() const;

    MCVAPI void
    buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>>&, class Factory<class ActorEventResponse> const&)
        const;

    MCVAPI void executeAction(class RenderParams&) const;

    MCVAPI std::string const& getName() const;

    MCAPI static std::string const NameID;

    // NOLINTEND
};
