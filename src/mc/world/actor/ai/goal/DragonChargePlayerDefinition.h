#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/DragonBaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DragonChargePlayerDefinition : public ::DragonBaseGoalDefinition {

public:
    // prevent constructor by default
    DragonChargePlayerDefinition& operator=(DragonChargePlayerDefinition const&) = delete;
    DragonChargePlayerDefinition(DragonChargePlayerDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0DragonChargePlayerDefinition\@\@QEAA\@XZ
     */
    MCAPI DragonChargePlayerDefinition();
    /**
     * @symbol ?initialize\@DragonChargePlayerDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDragonChargePlayerGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class DragonChargePlayerGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@DragonChargePlayerDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDragonChargePlayerDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DragonChargePlayerDefinition>>&);
    // NOLINTEND
};
