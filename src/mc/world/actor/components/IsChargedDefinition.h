#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsChargedDefinition {
public:
    // prevent constructor by default
    IsChargedDefinition& operator=(IsChargedDefinition const&);
    IsChargedDefinition(IsChargedDefinition const&);
    IsChargedDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@IsChargedDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void initialize(class EntityContext& entity) const;

    // symbol: ?uninitialize@IsChargedDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void uninitialize(class EntityContext& entity) const;

    // symbol:
    // ?buildSchema@IsChargedDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsChargedDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsChargedDefinition>>&
            root
    );

    // NOLINTEND
};
