#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct BossComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BossDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<1, 1, bool>           mShouldDarkenSky;
    ::ll::TypedStorage<4, 4, int>            mHudRange;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity, ::BossComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BossDefinition>>& root);
    // NOLINTEND
};
