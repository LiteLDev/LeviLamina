#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct OnHurtByPlayerDefinition : public ::ActorDefinitionTrigger {
public:
    // prevent constructor by default
    OnHurtByPlayerDefinition& operator=(OnHurtByPlayerDefinition const&);
    OnHurtByPlayerDefinition(OnHurtByPlayerDefinition const&);
    OnHurtByPlayerDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::OnHurtByPlayerDefinition>>& root
    );
    // NOLINTEND
};
