#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class OnPlacedTriggerDescription {
public:
    // prevent constructor by default
    OnPlacedTriggerDescription& operator=(OnPlacedTriggerDescription const&);
    OnPlacedTriggerDescription(OnPlacedTriggerDescription const&);
    OnPlacedTriggerDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~OnPlacedTriggerDescription();

    // vIndex: 1, symbol:
    // ?getName@OnPlacedTriggerDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // symbol: ?NameID@OnPlacedTriggerDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
