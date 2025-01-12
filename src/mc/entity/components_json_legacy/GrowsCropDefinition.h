#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

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
    ::ll::UntypedStorage<4, 4> mUnk4b3638;
    ::ll::UntypedStorage<4, 4> mUnk6bb96a;
    // NOLINTEND

public:
    // prevent constructor by default
    GrowsCropDefinition& operator=(GrowsCropDefinition const&);
    GrowsCropDefinition(GrowsCropDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GrowsCropDefinition();

    MCFOLD void initialize(::EntityContext&, ::GrowsCropComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GrowsCropDefinition>>& root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
