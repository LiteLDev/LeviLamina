#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct OutOfControlComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class OutOfControlDefinition {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity, ::OutOfControlComponent&) const;

    MCAPI void uninitialize(::EntityContext& entity, ::OutOfControlComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::OutOfControlDefinition>>& root
    );
    // NOLINTEND
};
