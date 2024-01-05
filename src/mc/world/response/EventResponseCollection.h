#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/Factory.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"

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
    // symbol:
    // ?buildSchema@EventResponseCollection@@SA?AV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVSemVersion@@AEBV?$Factory@VEventResponse@@$$V@@@Z
    MCAPI static std::shared_ptr<
        class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>
    buildSchema(
        std::string const&                        name,
        class SemVersion const&                   version,
        class Factory<class EventResponse> const& factory
    );

    // NOLINTEND
};
