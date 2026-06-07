#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ScaleByAgeComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ScaleByAgeDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mStartScale;
    ::ll::TypedStorage<4, 4, float> mEndScale;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScaleByAgeDefinition();

    MCAPI void initialize(::EntityContext&, ::ScaleByAgeComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ScaleByAgeDefinition>>& root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND
};
