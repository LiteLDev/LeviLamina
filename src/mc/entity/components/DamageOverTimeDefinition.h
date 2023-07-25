#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DamageOverTimeDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGEOVERTIMEDEFINITION
public:
    DamageOverTimeDefinition& operator=(DamageOverTimeDefinition const&) = delete;
    DamageOverTimeDefinition(DamageOverTimeDefinition const&)            = delete;
    DamageOverTimeDefinition()                                           = delete;
#endif

public:
    /**
     * @symbol ?initialize\@DamageOverTimeDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDamageOverTimeComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class DamageOverTimeComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@DamageOverTimeDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDamageOverTimeDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DamageOverTimeDefinition>>&);
};
