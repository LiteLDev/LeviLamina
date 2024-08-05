#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/Factory.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EventResponse {
public:
    // prevent constructor by default
    EventResponse& operator=(EventResponse const&);
    EventResponse(EventResponse const&);
    EventResponse();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EventResponse();

    // vIndex: 1
    virtual std::string const& getName() const;

    // vIndex: 2
    virtual void executeAction(class RenderParams& params) const = 0;

    // vIndex: 3
    virtual void
    buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>&, class Factory<class EventResponse> const&)
        const;

    // NOLINTEND
};
