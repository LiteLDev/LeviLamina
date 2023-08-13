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

class VillagerCelebrationGoal : public ::Goal {
public:
    // VillagerCelebrationGoal inner types declare
    // clang-format off
    class VillagerCelebrationDefinition;
    // clang-format on

    // VillagerCelebrationGoal inner types define
    class VillagerCelebrationDefinition : public ::BaseGoalDefinition {

    public:
        // prevent constructor by default
        VillagerCelebrationDefinition& operator=(VillagerCelebrationDefinition const&) = delete;
        VillagerCelebrationDefinition(VillagerCelebrationDefinition const&)            = delete;
        VillagerCelebrationDefinition()                                                = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0();
        /**
         * @symbol
         * ?buildSchema\@VillagerCelebrationDefinition\@VillagerCelebrationGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VVillagerCelebrationDefinition\@VillagerCelebrationGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class VillagerCelebrationGoal::VillagerCelebrationDefinition>>&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    VillagerCelebrationGoal& operator=(VillagerCelebrationGoal const&) = delete;
    VillagerCelebrationGoal(VillagerCelebrationGoal const&)            = delete;
    VillagerCelebrationGoal()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@VillagerCelebrationGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@VillagerCelebrationGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@VillagerCelebrationGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@VillagerCelebrationGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@VillagerCelebrationGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@VillagerCelebrationGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_launchFirework\@VillagerCelebrationGoal\@\@AEAAXXZ
     */
    MCAPI void _launchFirework();
    /**
     * @symbol ?_setNextFireworkTick\@VillagerCelebrationGoal\@\@AEAAXXZ
     */
    MCAPI void _setNextFireworkTick();
    // NOLINTEND
};
