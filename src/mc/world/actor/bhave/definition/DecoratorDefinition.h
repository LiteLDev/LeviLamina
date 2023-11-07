#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class DecoratorDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    DecoratorDefinition& operator=(DecoratorDefinition const&);
    DecoratorDefinition(DecoratorDefinition const&);
    DecoratorDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DecoratorDefinition() = default;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_decoratorLoadChildBehavior@DecoratorDefinition@@KA?AV?$unique_ptr@VBehaviorDefinition@@U?$default_delete@VBehaviorDefinition@@@std@@@std@@VValue@Json@@AEBVBehaviorFactory@@VBehaviorTreeDefinitionPtr@@@Z
    MCAPI static std::unique_ptr<class BehaviorDefinition>
    _decoratorLoadChildBehavior(class Json::Value, class BehaviorFactory const&, class BehaviorTreeDefinitionPtr);

    // NOLINTEND
};
