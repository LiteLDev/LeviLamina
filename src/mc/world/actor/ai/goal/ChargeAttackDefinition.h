#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ChargeAttackDefinition : public ::BaseGoalDefinition {

public:
    // prevent constructor by default
    ChargeAttackDefinition& operator=(ChargeAttackDefinition const&) = delete;
    ChargeAttackDefinition(ChargeAttackDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0ChargeAttackDefinition\@\@QEAA\@XZ
     */
    MCAPI ChargeAttackDefinition();
    /**
     * @symbol ?initialize\@ChargeAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVChargeAttackGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class ChargeAttackGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@ChargeAttackDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VChargeAttackDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ChargeAttackDefinition>>&);
    // NOLINTEND
};
