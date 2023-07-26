#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RailMovementDefinition {

public:
    // prevent constructor by default
    RailMovementDefinition& operator=(RailMovementDefinition const&) = delete;
    RailMovementDefinition(RailMovementDefinition const&)            = delete;

public:
    /**
     * @symbol ??0RailMovementDefinition\@\@QEAA\@XZ
     */
    MCAPI RailMovementDefinition(); // NOLINT
    /**
     * @symbol ?initialize\@RailMovementDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVRailMovementComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class RailMovementComponent&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@RailMovementDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VRailMovementDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      class RailMovementDefinition>>&); // NOLINT
};
