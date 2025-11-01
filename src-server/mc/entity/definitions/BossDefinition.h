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
    ::ll::UntypedStorage<8, 32> mUnk52b324;
    ::ll::UntypedStorage<1, 1> mUnk2b5987;
    ::ll::UntypedStorage<4, 4> mUnkefda71;
    // NOLINTEND

public:
    // prevent constructor by default
    BossDefinition& operator=(BossDefinition const&);
    BossDefinition(BossDefinition const&);
    BossDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext& entity, ::BossComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BossDefinition>>& root);
    // NOLINTEND

};
