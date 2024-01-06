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
    // vIndex: 0, symbol: ??1EventResponse@@UEAA@XZ
    virtual ~EventResponse();

    // vIndex: 1, symbol:
    // ?getName@EventResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol: ?executeAction@DamageResponse@@UEBAXAEAVRenderParams@@@Z
    virtual void executeAction(class RenderParams& params) const = 0;

    // vIndex: 3, symbol:
    // ?buildSchema@EventResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z
    virtual void
    buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>&, class Factory<class EventResponse> const&)
        const;

    // NOLINTEND
};
