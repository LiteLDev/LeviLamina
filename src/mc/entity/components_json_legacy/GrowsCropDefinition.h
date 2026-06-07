#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class GrowsCropComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GrowsCropDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mCharges;
    ::ll::TypedStorage<4, 4, float> mChance;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GrowsCropDefinition();

    MCAPI void initialize(::EntityContext&, ::GrowsCropComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GrowsCropDefinition>>& root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
