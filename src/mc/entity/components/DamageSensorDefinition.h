#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DamageSensorDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGESENSORDEFINITION
public:
    DamageSensorDefinition& operator=(DamageSensorDefinition const&) = delete;
    DamageSensorDefinition(DamageSensorDefinition const&)            = delete;
    DamageSensorDefinition()                                         = delete;
#endif

public:
    /**
     * @symbol ?addDamageSensorTrigger\@DamageSensorDefinition\@\@QEAAXAEBUDamageSensorTrigger\@\@\@Z
     */
    MCAPI void addDamageSensorTrigger(struct DamageSensorTrigger const&);
    /**
     * @symbol ?initialize\@DamageSensorDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDamageSensorComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class DamageSensorComponent&) const;
    /**
     * @symbol ?uninitialize\@DamageSensorDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDamageSensorComponent\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&, class DamageSensorComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@DamageSensorDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDamageSensorDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DamageSensorDefinition>>&);
};
