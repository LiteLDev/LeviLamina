#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/util/Factory.h"

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
    // vIndex: 0
    virtual ~ActorEventResponse() = default;

    // vIndex: 1
    virtual std::string const& getName() const;

    // vIndex: 2
    virtual void executeAction(class RenderParams& params) const = 0;

    // vIndex: 3
    virtual void
    buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>>&, class Factory<class ActorEventResponse> const&)
        const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void
    buildSchema$(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>>&, class Factory<class ActorEventResponse> const&)
        const;

    MCAPI std::string const& getName$() const;

    // NOLINTEND
};
