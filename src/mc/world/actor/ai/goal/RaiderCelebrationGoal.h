#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RaiderCelebrationGoal {
public:
    // RaiderCelebrationGoal inner types declare
    // clang-format off
    class RaiderCelebrationDefinition;
    // clang-format on

    // RaiderCelebrationGoal inner types define
    class RaiderCelebrationDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDERCELEBRATIONGOAL_RAIDERCELEBRATIONDEFINITION
    public:
        RaiderCelebrationDefinition& operator=(RaiderCelebrationDefinition const&) = delete;
        RaiderCelebrationDefinition(RaiderCelebrationDefinition const&)            = delete;
#endif

    public:
        /**
         * @symbol ??0RaiderCelebrationDefinition\@RaiderCelebrationGoal\@\@QEAA\@XZ
         */
        MCAPI RaiderCelebrationDefinition();
        /**
         * @symbol
         * ?addCelebrationSoundByName\@RaiderCelebrationDefinition\@RaiderCelebrationGoal\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI void addCelebrationSoundByName(std::string const&);
        /**
         * @symbol
         * ?initialize\@RaiderCelebrationDefinition\@RaiderCelebrationGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class RaiderCelebrationGoal&) const;
        /**
         * @symbol
         * ?buildSchema\@RaiderCelebrationDefinition\@RaiderCelebrationGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VRaiderCelebrationDefinition\@RaiderCelebrationGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RaiderCelebrationGoal::RaiderCelebrationDefinition>>&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDERCELEBRATIONGOAL
public:
    RaiderCelebrationGoal& operator=(RaiderCelebrationGoal const&) = delete;
    RaiderCelebrationGoal(RaiderCelebrationGoal const&)            = delete;
    RaiderCelebrationGoal()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RaiderCelebrationGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RaiderCelebrationGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@RaiderCelebrationGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@RaiderCelebrationGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@RaiderCelebrationGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RaiderCelebrationGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0RaiderCelebrationGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RaiderCelebrationGoal(class Mob&);
};
