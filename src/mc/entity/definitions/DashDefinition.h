#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct DashComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DashDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk239876;
    ::ll::UntypedStorage<4, 4> mUnk1340a1;
    ::ll::UntypedStorage<4, 4> mUnk6e36af;
    // NOLINTEND

public:
    // prevent constructor by default
    DashDefinition& operator=(DashDefinition const&);
    DashDefinition(DashDefinition const&);
    DashDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity, ::DashComponent& component) const;

    MCAPI void uninitialize(::EntityContext& entity, ::DashComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::DashDefinition>>& root);
    // NOLINTEND
};
