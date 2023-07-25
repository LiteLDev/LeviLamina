#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RamAttackGoal {
public:
    // RamAttackGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // RamAttackGoal inner types define
    class Definition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAMATTACKGOAL_DEFINITION
    public:
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;
#endif

    public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAMATTACKGOAL_DEFINITION
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~Definition();
#endif
        /**
         * @symbol ??0Definition\@RamAttackGoal\@\@QEAA\@XZ
         */
        MCAPI Definition();
        /**
         * @symbol
         * ?addPreRamSoundEventByName\@Definition\@RamAttackGoal\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI void addPreRamSoundEventByName(std::string const&);
        /**
         * @symbol
         * ?addRamImpactSoundEventByName\@Definition\@RamAttackGoal\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI void addRamImpactSoundEventByName(std::string const&);
        /**
         * @symbol ?initialize\@Definition\@RamAttackGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class RamAttackGoal&) const;
        /**
         * @symbol
         * ?buildSchema\@Definition\@RamAttackGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@RamAttackGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RamAttackGoal::Definition>>&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAMATTACKGOAL
public:
    RamAttackGoal& operator=(RamAttackGoal const&) = delete;
    RamAttackGoal(RamAttackGoal const&)            = delete;
    RamAttackGoal()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RamAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RamAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@RamAttackGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@RamAttackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@RamAttackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RamAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0RamAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RamAttackGoal(class Mob&);

    // protected:
    /**
     * @symbol ?_initiateRamAttack\@RamAttackGoal\@\@IEAA_NXZ
     */
    MCAPI bool _initiateRamAttack();

    // private:
    /**
     * @symbol ?_hasChargePath\@RamAttackGoal\@\@AEAA_NXZ
     */
    MCAPI bool _hasChargePath();
    /**
     * @symbol ?_pathablePos\@RamAttackGoal\@\@AEAA_NAEBVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI bool _pathablePos(class BlockSource const&, class BlockPos);
    /**
     * @symbol ?_resetCooldown\@RamAttackGoal\@\@AEAAXXZ
     */
    MCAPI void _resetCooldown();
    /**
     * @symbol ?_tryKnockbackTarget\@RamAttackGoal\@\@AEAAXXZ
     */
    MCAPI void _tryKnockbackTarget();
    /**
     * @symbol ?_verifyTargetStillInPositionAndPrepareForRamAttack\@RamAttackGoal\@\@AEAA_NXZ
     */
    MCAPI bool _verifyTargetStillInPositionAndPrepareForRamAttack();

protected:
private:
};
