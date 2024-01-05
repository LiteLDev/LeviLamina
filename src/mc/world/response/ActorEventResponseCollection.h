#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/Factory.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"

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
    // symbol:
    // ?buildSchema@ActorEventResponseCollection@@SA?AV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UActorEventResponseCollection@@@JsonUtil@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVSemVersion@@AEBV?$Factory@VActorEventResponse@@$$V@@@Z
    MCAPI static std::shared_ptr<
        class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>>
    buildSchema(
        std::string const&                             name,
        class SemVersion const&                        version,
        class Factory<class ActorEventResponse> const& factory
    );

    // NOLINTEND
};
