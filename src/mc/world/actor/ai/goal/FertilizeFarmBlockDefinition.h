#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class FertilizeFarmBlockDefinition : public ::BaseGoalDefinition {

public:
    // prevent constructor by default
    FertilizeFarmBlockDefinition& operator=(FertilizeFarmBlockDefinition const&) = delete;
    FertilizeFarmBlockDefinition(FertilizeFarmBlockDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0FertilizeFarmBlockDefinition\@\@QEAA\@XZ
     */
    MCAPI FertilizeFarmBlockDefinition();
    /**
     * @symbol ?initialize\@FertilizeFarmBlockDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVFertilizeFarmBlockGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class FertilizeFarmBlockGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@FertilizeFarmBlockDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VFertilizeFarmBlockDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class FertilizeFarmBlockDefinition>>&);
    // NOLINTEND
};
