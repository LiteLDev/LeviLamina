#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/util/Factory.h"

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
    MCVAPI void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>>&
                                                       root,
        class Factory<class ActorEventResponse> const& factory
    ) const;

    MCVAPI void executeAction(class RenderParams& pars) const;

    MCVAPI std::string const& getName() const;

    // NOLINTEND
};
