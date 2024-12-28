#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct OnWakeWithOwnerDefinition : public ::ActorDefinitionTrigger {
public:
    // prevent constructor by default
    OnWakeWithOwnerDefinition& operator=(OnWakeWithOwnerDefinition const&);
    OnWakeWithOwnerDefinition(OnWakeWithOwnerDefinition const&);
    OnWakeWithOwnerDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::OnWakeWithOwnerDefinition>>& root
    );
    // NOLINTEND
};
