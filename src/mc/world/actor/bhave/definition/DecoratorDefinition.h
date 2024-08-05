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
    // vIndex: 0
    virtual ~DecoratorDefinition() = default;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static std::unique_ptr<class BehaviorDefinition> _decoratorLoadChildBehavior(
        class Json::Value               value,
        class BehaviorFactory const&    factory,
        class BehaviorTreeDefinitionPtr ptr
    );

    // NOLINTEND
};
