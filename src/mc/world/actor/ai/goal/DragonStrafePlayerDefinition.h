#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/DragonBaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DragonStrafePlayerDefinition : public ::DragonBaseGoalDefinition {

public:
    // prevent constructor by default
    DragonStrafePlayerDefinition& operator=(DragonStrafePlayerDefinition const&) = delete;
    DragonStrafePlayerDefinition(DragonStrafePlayerDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0DragonStrafePlayerDefinition\@\@QEAA\@XZ
     */
    MCAPI DragonStrafePlayerDefinition();
    /**
     * @symbol ?initialize\@DragonStrafePlayerDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDragonStrafePlayerGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class DragonStrafePlayerGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@DragonStrafePlayerDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDragonStrafePlayerDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DragonStrafePlayerDefinition>>&);
    // NOLINTEND
};
