#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class InsideBlockEventMap;
class InsideBlockNotifierComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InsideBlockNotifierDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::InsideBlockEventMap>> mBlockList;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext&, ::InsideBlockNotifierComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::InsideBlockNotifierDefinition>>&
            root
    );
    // NOLINTEND
};
