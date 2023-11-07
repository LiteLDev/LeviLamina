#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class OnPlayerDestroyedTriggerDescription {
public:
    // prevent constructor by default
    OnPlayerDestroyedTriggerDescription& operator=(OnPlayerDestroyedTriggerDescription const&);
    OnPlayerDestroyedTriggerDescription(OnPlayerDestroyedTriggerDescription const&);
    OnPlayerDestroyedTriggerDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OnPlayerDestroyedTriggerDescription@@UEAA@XZ
    virtual ~OnPlayerDestroyedTriggerDescription() = default;

    // vIndex: 1, symbol:
    // ?getName@OnPlayerDestroyedTriggerDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // symbol:
    // ?NameID@OnPlayerDestroyedTriggerDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
