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
    MCAPI void addOnIncreaseSoundDefinition(class SoundDefinition const&);

    MCAPI void initialize(class EntityContext& entity, class AngerLevelComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AngerLevelDefinition>>&
            root
    );

    // NOLINTEND
};
