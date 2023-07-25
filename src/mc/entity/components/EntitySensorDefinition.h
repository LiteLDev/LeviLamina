#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EntitySensorDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSENSORDEFINITION
public:
    EntitySensorDefinition& operator=(EntitySensorDefinition const&) = delete;
    EntitySensorDefinition(EntitySensorDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0EntitySensorDefinition\@\@QEAA\@XZ
     */
    MCAPI EntitySensorDefinition();
    /**
     * @symbol ?initialize\@EntitySensorDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVEntitySensorComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class EntitySensorComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@EntitySensorDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VEntitySensorDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EntitySensorDefinition>>&);
};
