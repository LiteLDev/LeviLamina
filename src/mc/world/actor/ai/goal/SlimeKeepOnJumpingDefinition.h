#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SlimeKeepOnJumpingDefinition : public ::BaseGoalDefinition {

public:
    // prevent constructor by default
    SlimeKeepOnJumpingDefinition& operator=(SlimeKeepOnJumpingDefinition const&) = delete;
    SlimeKeepOnJumpingDefinition(SlimeKeepOnJumpingDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0SlimeKeepOnJumpingDefinition\@\@QEAA\@XZ
     */
    MCAPI SlimeKeepOnJumpingDefinition();
    /**
     * @symbol ?initialize\@SlimeKeepOnJumpingDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVSlimeKeepOnJumpingGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class SlimeKeepOnJumpingGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@SlimeKeepOnJumpingDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VSlimeKeepOnJumpingDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeKeepOnJumpingDefinition>>&);
    // NOLINTEND
};
