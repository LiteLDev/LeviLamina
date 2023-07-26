#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseTimedActorFlagGoal.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class FeelingHappyGoal : public ::BaseTimedActorFlagGoal {
public:
    // FeelingHappyGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // FeelingHappyGoal inner types define
    class Definition {

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;
        Definition()                             = delete;

    public:
        /**
         * @symbol
         * ?buildSchema\@Definition\@FeelingHappyGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@FeelingHappyGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class FeelingHappyGoal::Definition>>&); // NOLINT
    };

public:
    // prevent constructor by default
    FeelingHappyGoal& operator=(FeelingHappyGoal const&) = delete;
    FeelingHappyGoal(FeelingHappyGoal const&)            = delete;
    FeelingHappyGoal()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @symbol ??0FeelingHappyGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI FeelingHappyGoal(class Mob&); // NOLINT
};
