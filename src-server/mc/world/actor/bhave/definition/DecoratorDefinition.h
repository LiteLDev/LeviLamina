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
    ::ll::UntypedStorage<8, 8> mUnkb6b773;
    // NOLINTEND

public:
    // prevent constructor by default
    DecoratorDefinition& operator=(DecoratorDefinition const&);
    DecoratorDefinition(DecoratorDefinition const&);
    DecoratorDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DecoratorDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::BehaviorDefinition> _decoratorLoadChildBehavior(::Json::Value value, ::BehaviorFactory const& factory, ::BehaviorTreeDefinitionPtr ptr);
    // NOLINTEND

};
