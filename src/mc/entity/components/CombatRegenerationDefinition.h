#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CombatRegenerationDefinition {
public:
    // prevent constructor by default
    CombatRegenerationDefinition& operator=(CombatRegenerationDefinition const&);
    CombatRegenerationDefinition(CombatRegenerationDefinition const&);
    CombatRegenerationDefinition();

public:
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class CombatRegenerationDefinition>>& root
    );

    // NOLINTEND
};
