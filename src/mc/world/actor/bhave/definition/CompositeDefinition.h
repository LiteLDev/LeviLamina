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

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompositeDefinition() = default;

    MCAPI CompositeDefinition();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static void _compositeLoadChildrenBehaviors(
        class Json::Value                                       value,
        std::vector<std::unique_ptr<class BehaviorDefinition>>& childList,
        class BehaviorFactory const&                            factory,
        class BehaviorTreeDefinitionPtr                         ptr
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};
