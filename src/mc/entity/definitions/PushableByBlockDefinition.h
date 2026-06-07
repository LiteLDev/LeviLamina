#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct PushableByBlockComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class PushableByBlockDefinition {
public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void initialize(::EntityContext&, ::PushableByBlockComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::PushableByBlockDefinition>>& root
    );
    // NOLINTEND
};
