#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/MeleeAttackDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class StompAttackDefinition : public ::MeleeAttackDefinition {

public:
    // prevent constructor by default
    StompAttackDefinition& operator=(StompAttackDefinition const&) = delete;
    StompAttackDefinition(StompAttackDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0StompAttackDefinition\@\@QEAA\@XZ
     */
    MCAPI StompAttackDefinition();
    /**
     * @symbol ?initialize\@StompAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVStompAttackGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class StompAttackGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@StompAttackDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VStompAttackDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class StompAttackDefinition>>&);
    // NOLINTEND
};
