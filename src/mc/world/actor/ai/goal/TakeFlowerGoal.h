#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TakeFlowerGoal {
public:
    // TakeFlowerGoal inner types declare
    // clang-format off
    class TakeFlowerDefinition;
    // clang-format on

    // TakeFlowerGoal inner types define
    class TakeFlowerDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAKEFLOWERGOAL_TAKEFLOWERDEFINITION
    public:
        TakeFlowerDefinition& operator=(TakeFlowerDefinition const&) = delete;
        TakeFlowerDefinition(TakeFlowerDefinition const&)            = delete;
        TakeFlowerDefinition()                                       = delete;
#endif

    public:
        /**
         * @symbol
         * ?buildSchema\@TakeFlowerDefinition\@TakeFlowerGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VTakeFlowerDefinition\@TakeFlowerGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TakeFlowerGoal::TakeFlowerDefinition>>&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAKEFLOWERGOAL
public:
    TakeFlowerGoal& operator=(TakeFlowerGoal const&) = delete;
    TakeFlowerGoal(TakeFlowerGoal const&)            = delete;
    TakeFlowerGoal()                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@TakeFlowerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@TakeFlowerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@TakeFlowerGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@TakeFlowerGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@TakeFlowerGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@TakeFlowerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0TakeFlowerGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI TakeFlowerGoal(class Mob&);
};
