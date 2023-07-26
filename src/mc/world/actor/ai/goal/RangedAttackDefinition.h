#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RangedAttackDefinition {

public:
    // prevent constructor by default
    RangedAttackDefinition& operator=(RangedAttackDefinition const&) = delete;
    RangedAttackDefinition(RangedAttackDefinition const&)            = delete;

public:
    /**
     * @symbol ??0RangedAttackDefinition\@\@QEAA\@XZ
     */
    MCAPI RangedAttackDefinition(); // NOLINT
    /**
     * @symbol ?initialize\@RangedAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVRangedAttackGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class RangedAttackGoal&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@RangedAttackDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VRangedAttackDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RangedAttackDefinition>>&); // NOLINT
};
