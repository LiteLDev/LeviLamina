#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class NpcComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class NpcDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkfae3eb;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcDefinition& operator=(NpcDefinition const&);
    NpcDefinition(NpcDefinition const&);
    NpcDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity, ::NpcComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::NpcDefinition>>& root);
    // NOLINTEND
};
