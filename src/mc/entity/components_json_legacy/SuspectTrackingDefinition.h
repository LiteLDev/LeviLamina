#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class SuspectTrackingComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SuspectTrackingDefinition {
public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void initialize(::EntityContext&, ::SuspectTrackingComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SuspectTrackingDefinition>>& root
    );
    // NOLINTEND
};
