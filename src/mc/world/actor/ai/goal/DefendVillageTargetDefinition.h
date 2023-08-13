#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/target/TargetGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DefendVillageTargetDefinition : public ::TargetGoalDefinition {

public:
    // prevent constructor by default
    DefendVillageTargetDefinition& operator=(DefendVillageTargetDefinition const&) = delete;
    DefendVillageTargetDefinition(DefendVillageTargetDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0DefendVillageTargetDefinition\@\@QEAA\@XZ
     */
    MCAPI DefendVillageTargetDefinition();
    /**
     * @symbol
     * ?initialize\@DefendVillageTargetDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDefendVillageTargetGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class DefendVillageTargetGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@DefendVillageTargetDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefendVillageTargetDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DefendVillageTargetDefinition>>&);
    // NOLINTEND
};
