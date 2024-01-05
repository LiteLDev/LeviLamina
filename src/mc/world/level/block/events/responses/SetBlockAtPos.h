#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/Factory.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/response/EventResponse.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SetBlockAtPos : public ::EventResponse {
public:
    // prevent constructor by default
    SetBlockAtPos& operator=(SetBlockAtPos const&);
    SetBlockAtPos(SetBlockAtPos const&);
    SetBlockAtPos();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SetBlockAtPos@@UEAA@XZ
    virtual ~SetBlockAtPos() = default;

    // vIndex: 1, symbol:
    // ?getName@SetBlockAtPos@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol: ?executeAction@SetBlockAtPos@@UEBAXAEAVRenderParams@@@Z
    virtual void executeAction(class RenderParams& params) const;

    // vIndex: 3, symbol:
    // ?buildSchema@SetBlockAtPos@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z
    virtual void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>& root,
        class Factory<class EventResponse> const&                                                              factory
    ) const;

    // symbol: ?NameID@SetBlockAtPos@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
