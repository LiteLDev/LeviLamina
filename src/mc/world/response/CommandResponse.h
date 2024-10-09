#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/util/Factory.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CommandResponse {
public:
    // prevent constructor by default
    CommandResponse& operator=(CommandResponse const&);
    CommandResponse(CommandResponse const&);
    CommandResponse();

public:
    // NOLINTBEGIN
    MCVAPI void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>& root,
        class Factory<class EventResponse> const&                                                              factory
    ) const;

    MCVAPI void executeAction(class RenderParams& pars) const;

    MCVAPI std::string const& getName() const;

    // NOLINTEND
};
