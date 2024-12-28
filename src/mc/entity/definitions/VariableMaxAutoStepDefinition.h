#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct VariableMaxAutoStepComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class VariableMaxAutoStepDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk825ef0;
    ::ll::UntypedStorage<4, 4> mUnkfa0d76;
    ::ll::UntypedStorage<4, 4> mUnkb88705;
    // NOLINTEND

public:
    // prevent constructor by default
    VariableMaxAutoStepDefinition& operator=(VariableMaxAutoStepDefinition const&);
    VariableMaxAutoStepDefinition(VariableMaxAutoStepDefinition const&);
    VariableMaxAutoStepDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext&, ::VariableMaxAutoStepComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::VariableMaxAutoStepDefinition>>&
            root
    );
    // NOLINTEND
};
