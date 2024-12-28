#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

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
    ::ll::UntypedStorage<4, 4> mUnk5e9382;
    ::ll::UntypedStorage<4, 4> mUnk3d62a9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScaleByAgeDefinition& operator=(ScaleByAgeDefinition const&);
    ScaleByAgeDefinition(ScaleByAgeDefinition const&);

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
    MCAPI void* $ctor();
    // NOLINTEND
};
