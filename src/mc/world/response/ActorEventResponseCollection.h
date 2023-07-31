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
    ActorEventResponseCollection& operator=(ActorEventResponseCollection const&) = delete;
    ActorEventResponseCollection(ActorEventResponseCollection const&)            = delete;
    ActorEventResponseCollection()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?buildSchema\@ActorEventResponseCollection\@\@SA?AV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UActorEventResponseCollection\@\@\@JsonUtil\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVSemVersion\@\@AEBV?$Factory\@VActorEventResponse\@\@$$V\@\@\@Z
     */
    MCAPI static std::shared_ptr<
        class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>>
    buildSchema(std::string const&, class SemVersion const&, class Factory<class ActorEventResponse> const&);
    // NOLINTEND
};
