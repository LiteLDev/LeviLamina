#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct HeartbeatServerComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HeartbeatDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkc972be;
    ::ll::UntypedStorage<8, 216> mUnk6a3f0a;
    // NOLINTEND

public:
    // prevent constructor by default
    HeartbeatDefinition& operator=(HeartbeatDefinition const&);
    HeartbeatDefinition(HeartbeatDefinition const&);
    HeartbeatDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext& entity, ::HeartbeatServerComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::HeartbeatDefinition>>& root
    );
    // NOLINTEND
};
