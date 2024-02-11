#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/Factory.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"

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
    // symbol:
    // ?buildSchema@CommandResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z
    MCVAPI void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>& root,
        class Factory<class EventResponse> const&                                                              factory
    ) const;

    // symbol: ?executeAction@CommandResponse@@UEBAXAEAVRenderParams@@@Z
    MCVAPI void executeAction(class RenderParams& pars) const;

    // symbol: ?getName@CommandResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string const& getName() const;

    // NOLINTEND
};
