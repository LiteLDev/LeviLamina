#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AvoidMobTypeDefinition : public ::BaseGoalDefinition {

public:
    // prevent constructor by default
    AvoidMobTypeDefinition& operator=(AvoidMobTypeDefinition const&) = delete;
    AvoidMobTypeDefinition(AvoidMobTypeDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0AvoidMobTypeDefinition\@\@QEAA\@XZ
     */
    MCAPI AvoidMobTypeDefinition();
    /**
     * @symbol ?initialize\@AvoidMobTypeDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVAvoidMobTypeGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class AvoidMobTypeGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@AvoidMobTypeDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VAvoidMobTypeDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AvoidMobTypeDefinition>>&);
    // NOLINTEND
};
