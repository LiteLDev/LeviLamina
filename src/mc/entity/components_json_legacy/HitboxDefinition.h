#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class HitboxComponent;
struct Hitbox;
struct HitboxJson;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HitboxDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Hitbox>> mHitboxes;
    // NOLINTEND

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
