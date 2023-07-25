#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AreaAttackDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AREAATTACKDEFINITION
public:
    AreaAttackDefinition& operator=(AreaAttackDefinition const&) = delete;
    AreaAttackDefinition(AreaAttackDefinition const&)            = delete;
    AreaAttackDefinition()                                       = delete;
#endif

public:
    /**
     * @symbol ?initialize\@AreaAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVAreaAttackComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class AreaAttackComponent&) const;
    /**
     * @symbol
     * ?setDamageCause\@AreaAttackDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setDamageCause(std::string const&);
    /**
     * @symbol
     * ?buildSchema\@AreaAttackDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VAreaAttackDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AreaAttackDefinition>>&);
};
