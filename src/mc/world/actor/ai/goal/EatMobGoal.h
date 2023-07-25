#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EatMobGoal {
public:
    // EatMobGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // EatMobGoal inner types define
    class Definition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EATMOBGOAL_DEFINITION
    public:
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;
#endif

    public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EATMOBGOAL_DEFINITION
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~Definition();
#endif
        /**
         * @symbol ??0Definition\@EatMobGoal\@\@QEAA\@XZ
         */
        MCAPI Definition();
        /**
         * @symbol ?initialize\@Definition\@EatMobGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class EatMobGoal&) const;
        /**
         * @symbol
         * ?buildSchema\@Definition\@EatMobGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@EatMobGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EatMobGoal::Definition>>&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EATMOBGOAL
public:
    EatMobGoal& operator=(EatMobGoal const&) = delete;
    EatMobGoal(EatMobGoal const&)            = delete;
    EatMobGoal()                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@EatMobGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@EatMobGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@EatMobGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@EatMobGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@EatMobGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@EatMobGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0EatMobGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI EatMobGoal(class Mob&);
};
