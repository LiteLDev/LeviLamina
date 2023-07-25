#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SonicBoomGoal {
public:
    // SonicBoomGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // SonicBoomGoal inner types define
    class Definition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SONICBOOMGOAL_DEFINITION
    public:
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;
        Definition()                             = delete;
#endif

    public:
        /**
         * @symbol ?initialize\@Definition\@SonicBoomGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class SonicBoomGoal&) const;
        /**
         * @symbol
         * ?buildSchema\@Definition\@SonicBoomGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@SonicBoomGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SonicBoomGoal::Definition>>&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SONICBOOMGOAL
public:
    SonicBoomGoal& operator=(SonicBoomGoal const&) = delete;
    SonicBoomGoal(SonicBoomGoal const&)            = delete;
    SonicBoomGoal()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@SonicBoomGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@SonicBoomGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@SonicBoomGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@SonicBoomGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@SonicBoomGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SonicBoomGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0SonicBoomGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI SonicBoomGoal(class Mob&);
};
