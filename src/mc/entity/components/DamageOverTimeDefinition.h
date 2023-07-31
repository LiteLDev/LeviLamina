#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DamageOverTimeDefinition {

public:
    // prevent constructor by default
    DamageOverTimeDefinition& operator=(DamageOverTimeDefinition const&) = delete;
    DamageOverTimeDefinition(DamageOverTimeDefinition const&)            = delete;
    DamageOverTimeDefinition()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?buildSchema\@DamageOverTimeDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDamageOverTimeDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DamageOverTimeDefinition>>&);
    /**
     * @symbol ?initialize\@DamageOverTimeDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDamageOverTimeComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class DamageOverTimeComponent&) const;
    // NOLINTEND
};
