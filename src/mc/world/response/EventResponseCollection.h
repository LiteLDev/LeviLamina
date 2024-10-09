#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/util/Factory.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct EventResponseCollection {
public:
    // prevent constructor by default
    EventResponseCollection& operator=(EventResponseCollection const&);
    EventResponseCollection(EventResponseCollection const&);
    EventResponseCollection();

public:
    // NOLINTBEGIN
    MCAPI static std::shared_ptr<
        class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>
    buildSchema(
        std::string const&                        name,
        class SemVersion const&                   version,
        class Factory<class EventResponse> const& factory
    );

    // NOLINTEND
};
