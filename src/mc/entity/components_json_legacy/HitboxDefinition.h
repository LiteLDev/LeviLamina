#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
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
    MCNAPI void addAABB(::HitboxJson const& aabb);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::HitboxDefinition>>& root);
    // NOLINTEND
};
