#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsShakingDefinition {
public:
    // prevent constructor by default
    IsShakingDefinition& operator=(IsShakingDefinition const&);
    IsShakingDefinition(IsShakingDefinition const&);
    IsShakingDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@IsShakingDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void initialize(class EntityContext& entity) const;

    // symbol: ?uninitialize@IsShakingDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void uninitialize(class EntityContext& entity) const;

    // symbol:
    // ?buildSchema@IsShakingDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsShakingDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsShakingDefinition>>&
            root
    );

    // NOLINTEND
};
