#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SpawnActorDefinition {
public:
    // prevent constructor by default
    SpawnActorDefinition& operator=(SpawnActorDefinition const&);
    SpawnActorDefinition(SpawnActorDefinition const&);
    SpawnActorDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@SpawnActorDefinition@@QEBAXAEAVEntityContext@@AEAVSpawnActorComponent@@@Z
    MCAPI void initialize(class EntityContext& entity, class SpawnActorComponent& component) const;

    // symbol:
    // ?buildSchema@SpawnActorDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSpawnActorDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SpawnActorDefinition>>&
            root
    );

    // NOLINTEND
};
