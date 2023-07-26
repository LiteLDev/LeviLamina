#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GameEventMovementTrackingDefinition {

public:
    // prevent constructor by default
    GameEventMovementTrackingDefinition& operator=(GameEventMovementTrackingDefinition const&) = delete;
    GameEventMovementTrackingDefinition(GameEventMovementTrackingDefinition const&)            = delete;
    GameEventMovementTrackingDefinition()                                                      = delete;

public:
    /**
     * @symbol
     * ?initialize\@GameEventMovementTrackingDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVGameEventMovementTrackingComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class GameEventMovementTrackingComponent&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@GameEventMovementTrackingDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VGameEventMovementTrackingDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      class GameEventMovementTrackingDefinition>>&); // NOLINT
};
