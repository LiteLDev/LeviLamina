#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/util/Factory.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct ActorEventResponseCollection {
public:
    // prevent constructor by default
    ActorEventResponseCollection& operator=(ActorEventResponseCollection const&);
    ActorEventResponseCollection(ActorEventResponseCollection const&);
    ActorEventResponseCollection();

public:
    // NOLINTBEGIN
    MCAPI static std::shared_ptr<
        class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>>
    buildSchema(
        std::string const&                             name,
        class SemVersion const&                        version,
        class Factory<class ActorEventResponse> const& factory
    );

    // NOLINTEND
};
