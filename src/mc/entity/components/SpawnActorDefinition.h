#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SpawnActorDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNACTORDEFINITION
public:
    SpawnActorDefinition& operator=(SpawnActorDefinition const&) = delete;
    SpawnActorDefinition(SpawnActorDefinition const&)            = delete;
    SpawnActorDefinition()                                       = delete;
#endif

public:
    /**
     * @symbol ?initialize\@SpawnActorDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVSpawnActorComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class SpawnActorComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@SpawnActorDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VSpawnActorDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SpawnActorDefinition>>&);
};
