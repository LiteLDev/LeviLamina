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

class DamageResponse : public ::EventResponse {
public:
    // prevent constructor by default
    DamageResponse& operator=(DamageResponse const&);
    DamageResponse(DamageResponse const&);
    DamageResponse();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DamageResponse@@UEAA@XZ
    virtual ~DamageResponse() = default;

    // vIndex: 1, symbol:
    // ?getName@DamageResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol: ?executeAction@DamageResponse@@UEBAXAEAVRenderParams@@@Z
    virtual void executeAction(class RenderParams& params) const;

    // vIndex: 3, symbol:
    // ?buildSchema@DamageResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z
    virtual void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>& root,
        class Factory<class EventResponse> const&                                                              factory
    ) const;

    // symbol: ?NameID@DamageResponse@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?repairOrHurtItem@DamageResponse@@AEBAXAEBHAEAVRenderParams@@@Z
    MCAPI void repairOrHurtItem(int const& amount, class RenderParams& params) const;

    // NOLINTEND
};
