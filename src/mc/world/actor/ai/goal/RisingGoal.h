#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseTimedActorFlagGoal.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RisingGoal : public ::BaseTimedActorFlagGoal {
public:
    // RisingGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // RisingGoal inner types define
    class Definition {

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;
        Definition()                             = delete;

    public:
        /**
         * @symbol
         * ?buildSchema\@Definition\@RisingGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@RisingGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RisingGoal::Definition>>&); // NOLINT
    };

public:
    // prevent constructor by default
    RisingGoal& operator=(RisingGoal const&) = delete;
    RisingGoal(RisingGoal const&)            = delete;
    RisingGoal()                             = delete;

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
     * @symbol ??0RisingGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RisingGoal(class Mob&); // NOLINT
};
