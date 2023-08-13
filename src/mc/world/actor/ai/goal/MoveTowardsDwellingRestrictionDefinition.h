#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/MoveTowardsRestrictionDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MoveTowardsDwellingRestrictionDefinition : public ::MoveTowardsRestrictionDefinition {

public:
    // prevent constructor by default
    MoveTowardsDwellingRestrictionDefinition& operator=(MoveTowardsDwellingRestrictionDefinition const&) = delete;
    MoveTowardsDwellingRestrictionDefinition(MoveTowardsDwellingRestrictionDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0MoveTowardsDwellingRestrictionDefinition\@\@QEAA\@XZ
     */
    MCAPI MoveTowardsDwellingRestrictionDefinition();
    /**
     * @symbol
     * ?buildSchema\@MoveTowardsDwellingRestrictionDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VMoveTowardsDwellingRestrictionDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MoveTowardsDwellingRestrictionDefinition>>&);
    // NOLINTEND
};
