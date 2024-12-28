#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class HitboxComponent;
struct HitboxJson;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HitboxDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5e2e52;
    // NOLINTEND

public:
    // prevent constructor by default
    HitboxDefinition& operator=(HitboxDefinition const&);
    HitboxDefinition(HitboxDefinition const&);
    HitboxDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAABB(::HitboxJson const& aabb);

    MCAPI void initialize(::EntityContext&, ::HitboxComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::HitboxDefinition>>& root);
    // NOLINTEND
};
