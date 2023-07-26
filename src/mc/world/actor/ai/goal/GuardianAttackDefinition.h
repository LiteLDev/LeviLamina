#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GuardianAttackDefinition {

public:
    // prevent constructor by default
    GuardianAttackDefinition& operator=(GuardianAttackDefinition const&) = delete;
    GuardianAttackDefinition(GuardianAttackDefinition const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?validateMobType\@GuardianAttackDefinition\@\@UEBA_NAEAVMob\@\@\@Z
     */
    virtual bool validateMobType(class Mob&) const; // NOLINT
    /**
     * @symbol ??0GuardianAttackDefinition\@\@QEAA\@XZ
     */
    MCAPI GuardianAttackDefinition(); // NOLINT
    /**
     * @symbol ?initialize\@GuardianAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVGuardianAttackGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class GuardianAttackGoal&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@GuardianAttackDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VGuardianAttackDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GuardianAttackDefinition>>&); // NOLINT
};
