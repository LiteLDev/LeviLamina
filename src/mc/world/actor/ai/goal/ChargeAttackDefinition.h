#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ChargeAttackDefinition {

public:
    // prevent constructor by default
    ChargeAttackDefinition& operator=(ChargeAttackDefinition const&) = delete;
    ChargeAttackDefinition(ChargeAttackDefinition const&)            = delete;

public:
    /**
     * @symbol ??0ChargeAttackDefinition\@\@QEAA\@XZ
     */
    MCAPI ChargeAttackDefinition(); // NOLINT
    /**
     * @symbol ?initialize\@ChargeAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVChargeAttackGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class ChargeAttackGoal&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@ChargeAttackDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VChargeAttackDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ChargeAttackDefinition>>&); // NOLINT
};
