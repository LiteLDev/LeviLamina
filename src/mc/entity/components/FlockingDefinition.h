#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class FlockingDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOCKINGDEFINITION
public:
    FlockingDefinition& operator=(FlockingDefinition const&) = delete;
    FlockingDefinition(FlockingDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0FlockingDefinition\@\@QEAA\@XZ
     */
    MCAPI FlockingDefinition();
    /**
     * @symbol ?initialize\@FlockingDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVFlockingComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class FlockingComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@FlockingDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VFlockingDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class FlockingDefinition>>&);
};
