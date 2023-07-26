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

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;

    public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAMATTACKGOAL_DEFINITION
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~Definition(); // NOLINT
#endif
        /**
         * @symbol ??0Definition\@RamAttackGoal\@\@QEAA\@XZ
         */
        MCAPI Definition(); // NOLINT
        /**
         * @symbol
         * ?addPreRamSoundEventByName\@Definition\@RamAttackGoal\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI void addPreRamSoundEventByName(std::string const&); // NOLINT
        /**
         * @symbol
         * ?addRamImpactSoundEventByName\@Definition\@RamAttackGoal\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI void addRamImpactSoundEventByName(std::string const&); // NOLINT
        /**
         * @symbol ?initialize\@Definition\@RamAttackGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class RamAttackGoal&) const; // NOLINT
        /**
         * @symbol
         * ?buildSchema\@Definition\@RamAttackGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@RamAttackGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RamAttackGoal::Definition>>&); // NOLINT
    };

public:
    // prevent constructor by default
    RamAttackGoal& operator=(RamAttackGoal const&) = delete;
    RamAttackGoal(RamAttackGoal const&)            = delete;
    RamAttackGoal()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@RamAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RamAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@RamAttackGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@RamAttackGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@RamAttackGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RamAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0RamAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RamAttackGoal(class Mob&); // NOLINT

    // protected:
    /**
     * @symbol ?_initiateRamAttack\@RamAttackGoal\@\@IEAA_NXZ
     */
    MCAPI bool _initiateRamAttack(); // NOLINT

    // private:
    /**
     * @symbol ?_hasChargePath\@RamAttackGoal\@\@AEAA_NXZ
     */
    MCAPI bool _hasChargePath(); // NOLINT
    /**
     * @symbol ?_pathablePos\@RamAttackGoal\@\@AEAA_NAEBVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI bool _pathablePos(class BlockSource const&, class BlockPos); // NOLINT
    /**
     * @symbol ?_resetCooldown\@RamAttackGoal\@\@AEAAXXZ
     */
    MCAPI void _resetCooldown(); // NOLINT
    /**
     * @symbol ?_tryKnockbackTarget\@RamAttackGoal\@\@AEAAXXZ
     */
    MCAPI void _tryKnockbackTarget(); // NOLINT
    /**
     * @symbol ?_verifyTargetStillInPositionAndPrepareForRamAttack\@RamAttackGoal\@\@AEAA_NXZ
     */
    MCAPI bool _verifyTargetStillInPositionAndPrepareForRamAttack(); // NOLINT

protected:
private:
};
