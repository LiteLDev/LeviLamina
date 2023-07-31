#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class JumpToBlockGoal {
public:
    // JumpToBlockGoal inner types declare
    // clang-format off
    class Definition;
    struct WeightedJumpToBlockPos;
    // clang-format on

    // JumpToBlockGoal inner types define
    class Definition {

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;

    public:
        // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUMPTOBLOCKGOAL_DEFINITION
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~Definition();
#endif
        /**
         * @symbol ??0Definition\@JumpToBlockGoal\@\@QEAA\@XZ
         */
        MCAPI Definition();
        /**
         * @symbol ?initialize\@Definition\@JumpToBlockGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class JumpToBlockGoal&) const;
        /**
         * @symbol
         * ?buildSchema\@Definition\@JumpToBlockGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@JumpToBlockGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class JumpToBlockGoal::Definition>>&);
        // NOLINTEND
    };

    struct WeightedJumpToBlockPos {

    public:
        // prevent constructor by default
        WeightedJumpToBlockPos& operator=(WeightedJumpToBlockPos const&) = delete;
        WeightedJumpToBlockPos(WeightedJumpToBlockPos const&)            = delete;
        WeightedJumpToBlockPos()                                         = delete;
    };

public:
    // prevent constructor by default
    JumpToBlockGoal& operator=(JumpToBlockGoal const&) = delete;
    JumpToBlockGoal(JumpToBlockGoal const&)            = delete;
    JumpToBlockGoal()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@JumpToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@JumpToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol ?canBeInterrupted\@JumpToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl 4
     * @symbol ?start\@JumpToBlockGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@JumpToBlockGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@JumpToBlockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@JumpToBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0JumpToBlockGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI JumpToBlockGoal(class Mob&);
    /**
     * @symbol ?resetCooldown\@JumpToBlockGoal\@\@QEAAXXZ
     */
    MCAPI void resetCooldown();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_calculateJumpCurve\@JumpToBlockGoal\@\@AEAA_NMAEBVBlockPos\@\@AEAUWeightedJumpToBlockPos\@1\@\@Z
     */
    MCAPI bool _calculateJumpCurve(float, class BlockPos const&, struct JumpToBlockGoal::WeightedJumpToBlockPos&);
    /**
     * @symbol ?_clearGoalState\@JumpToBlockGoal\@\@AEAAXXZ
     */
    MCAPI void _clearGoalState();
    /**
     * @symbol ?_findCandidateBlocks\@JumpToBlockGoal\@\@AEAA_NAEAVNavigationComponent\@\@\@Z
     */
    MCAPI bool _findCandidateBlocks(class NavigationComponent&);
    /**
     * @symbol ?_findJumpableBlocks\@JumpToBlockGoal\@\@AEAA_N_N\@Z
     */
    MCAPI bool _findJumpableBlocks(bool);
    /**
     * @symbol ?_findTargetBlock\@JumpToBlockGoal\@\@AEAA_NXZ
     */
    MCAPI bool _findTargetBlock();
    /**
     * @symbol ?_validTransition\@JumpToBlockGoal\@\@AEBA_NAEBVVec3\@\@0\@Z
     */
    MCAPI bool _validTransition(class Vec3 const&, class Vec3 const&) const;
    // NOLINTEND
};
