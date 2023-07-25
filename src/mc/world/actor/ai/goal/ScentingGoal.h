#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseTimedActorFlagGoal.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ScentingGoal : public ::BaseTimedActorFlagGoal {
public:
    // ScentingGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // ScentingGoal inner types define
    class Definition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCENTINGGOAL_DEFINITION
    public:
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;
        Definition()                             = delete;
#endif

    public:
        /**
         * @symbol
         * ?buildSchema\@Definition\@ScentingGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@ScentingGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ScentingGoal::Definition>>&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCENTINGGOAL
public:
    ScentingGoal& operator=(ScentingGoal const&) = delete;
    ScentingGoal(ScentingGoal const&)            = delete;
    ScentingGoal()                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @symbol ??0ScentingGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI ScentingGoal(class Mob&);
};
