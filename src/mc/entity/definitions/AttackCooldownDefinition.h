#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct AttackCooldownComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AttackCooldownDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnkc4b4cd;
    ::ll::UntypedStorage<4, 8>   mUnk664c4b;
    // NOLINTEND

public:
    // prevent constructor by default
    AttackCooldownDefinition& operator=(AttackCooldownDefinition const&);
    AttackCooldownDefinition(AttackCooldownDefinition const&);
    AttackCooldownDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity, ::AttackCooldownComponent& cooldownComponent) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AttackCooldownDefinition>>& root
    );
    // NOLINTEND
};
