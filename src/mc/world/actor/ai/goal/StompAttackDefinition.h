#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/MeleeAttackDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class StompAttackDefinition : public ::MeleeAttackDefinition {
public:
    // prevent constructor by default
    StompAttackDefinition& operator=(StompAttackDefinition const&);
    StompAttackDefinition(StompAttackDefinition const&);
    StompAttackDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StompAttackDefinition() = default;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class StompAttackDefinition>>&
            root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
