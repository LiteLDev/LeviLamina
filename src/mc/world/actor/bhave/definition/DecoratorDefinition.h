#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
class BehaviorTreeDefinitionPtr;
namespace Json { class Value; }
// clang-format on

class DecoratorDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BehaviorDefinition>> mChild;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DecoratorDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::BehaviorDefinition>
    _decoratorLoadChildBehavior(::Json::Value value, ::BehaviorFactory const& factory, ::BehaviorTreeDefinitionPtr ptr);
    // NOLINTEND
};
