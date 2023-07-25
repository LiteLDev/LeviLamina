#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RailMovementDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAILMOVEMENTDEFINITION
public:
    RailMovementDefinition& operator=(RailMovementDefinition const&) = delete;
    RailMovementDefinition(RailMovementDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0RailMovementDefinition\@\@QEAA\@XZ
     */
    MCAPI RailMovementDefinition();
    /**
     * @symbol ?initialize\@RailMovementDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVRailMovementComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class RailMovementComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@RailMovementDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VRailMovementDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RailMovementDefinition>>&);
};
