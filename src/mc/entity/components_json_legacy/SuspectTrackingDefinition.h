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
    // prevent constructor by default
    SuspectTrackingDefinition& operator=(SuspectTrackingDefinition const&);
    SuspectTrackingDefinition(SuspectTrackingDefinition const&);
    SuspectTrackingDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext&, ::SuspectTrackingComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SuspectTrackingDefinition>>& root
    );
    // NOLINTEND
};
