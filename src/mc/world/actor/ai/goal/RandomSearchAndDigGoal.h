#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RandomSearchAndDigGoal : public ::Goal {
public:
    // RandomSearchAndDigGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // RandomSearchAndDigGoal inner types define
    enum class CanUseOutcome {};

    class Definition : public ::BaseGoalDefinition {

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMSEARCHANDDIGGOAL_DEFINITION
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~Definition();
#endif
        /**
         * @symbol ??0Definition\@RandomSearchAndDigGoal\@\@QEAA\@XZ
         */
        MCAPI Definition();
        /**
         * @symbol
         * ?addWeightedChoiceEntry\@Definition\@RandomSearchAndDigGoal\@\@QEAAXAEBURandomSearchAndDigItemChoiceEntry\@\@\@Z
         */
        MCAPI void addWeightedChoiceEntry(struct RandomSearchAndDigItemChoiceEntry const&);
        /**
         * @symbol ?initialize\@Definition\@RandomSearchAndDigGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class RandomSearchAndDigGoal&) const;
        /**
         * @symbol
         * ?buildSchema\@Definition\@RandomSearchAndDigGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@RandomSearchAndDigGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RandomSearchAndDigGoal::Definition>>&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    RandomSearchAndDigGoal& operator=(RandomSearchAndDigGoal const&) = delete;
    RandomSearchAndDigGoal(RandomSearchAndDigGoal const&)            = delete;
    RandomSearchAndDigGoal()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomSearchAndDigGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RandomSearchAndDigGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@RandomSearchAndDigGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@RandomSearchAndDigGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@RandomSearchAndDigGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomSearchAndDigGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0RandomSearchAndDigGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RandomSearchAndDigGoal(class Mob&);
    /**
     * @symbol ?_canUse\@RandomSearchAndDigGoal\@\@QEAA?AW4CanUseOutcome\@1\@XZ
     */
    MCAPI enum class RandomSearchAndDigGoal::CanUseOutcome _canUse();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_emitDiggingParticles\@RandomSearchAndDigGoal\@\@AEAAXXZ
     */
    MCAPI void _emitDiggingParticles();
    /**
     * @symbol ?_triggerEvent\@RandomSearchAndDigGoal\@\@AEBAXAEBVActorDefinitionTrigger\@\@\@Z
     */
    MCAPI void _triggerEvent(class ActorDefinitionTrigger const&) const;
    /**
     * @symbol ?_isValidTarget\@RandomSearchAndDigGoal\@\@CA_NAEBVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI static bool _isValidTarget(class BlockSource const&, class BlockPos);
    // NOLINTEND
};
