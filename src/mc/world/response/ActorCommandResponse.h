#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
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

    MCVAPI void executeAction(class RenderParams& params) const;

    MCVAPI std::string const& getName() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForActorEventResponse();

    MCAPI static void** $vftableForCommandResponseBase();

    MCAPI void buildSchema$(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>>&
                                                       root,
        class Factory<class ActorEventResponse> const& factory
    ) const;

    MCAPI void executeAction$(class RenderParams& params) const;

    MCAPI std::string const& getName$() const;

    // NOLINTEND
};
