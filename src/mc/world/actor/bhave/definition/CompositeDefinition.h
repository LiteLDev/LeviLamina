#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CompositeDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    CompositeDefinition& operator=(CompositeDefinition const&);
    CompositeDefinition(CompositeDefinition const&);
    CompositeDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CompositeDefinition@@UEAA@XZ
    virtual ~CompositeDefinition() = default;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_compositeLoadChildrenBehaviors@CompositeDefinition@@KAXVValue@Json@@AEAV?$vector@V?$unique_ptr@VBehaviorDefinition@@U?$default_delete@VBehaviorDefinition@@@std@@@std@@V?$allocator@V?$unique_ptr@VBehaviorDefinition@@U?$default_delete@VBehaviorDefinition@@@std@@@std@@@2@@std@@AEBVBehaviorFactory@@VBehaviorTreeDefinitionPtr@@@Z
    MCAPI static void _compositeLoadChildrenBehaviors(
        class Json::Value                                       value,
        std::vector<std::unique_ptr<class BehaviorDefinition>>& childList,
        class BehaviorFactory const&                            factory,
        class BehaviorTreeDefinitionPtr                         ptr
    );

    // NOLINTEND
};
