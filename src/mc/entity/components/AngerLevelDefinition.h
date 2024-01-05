#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AngerLevelDefinition {
public:
    // prevent constructor by default
    AngerLevelDefinition& operator=(AngerLevelDefinition const&);
    AngerLevelDefinition(AngerLevelDefinition const&);
    AngerLevelDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?addOnIncreaseSoundDefinition@AngerLevelDefinition@@QEAAXAEBVSoundDefinition@@@Z
    MCAPI void addOnIncreaseSoundDefinition(class SoundDefinition const&);

    // symbol: ?initialize@AngerLevelDefinition@@QEBAXAEAVEntityContext@@AEAVAngerLevelComponent@@@Z
    MCAPI void initialize(class EntityContext& entity, class AngerLevelComponent& component) const;

    // symbol:
    // ?buildSchema@AngerLevelDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VAngerLevelDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AngerLevelDefinition>>&
            root
    );

    // NOLINTEND
};
