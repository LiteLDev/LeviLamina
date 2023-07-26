#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class VillagerCelebrationGoal {
public:
    // VillagerCelebrationGoal inner types declare
    // clang-format off
    class VillagerCelebrationDefinition;
    // clang-format on

    // VillagerCelebrationGoal inner types define
    class VillagerCelebrationDefinition {

    public:
        // prevent constructor by default
        VillagerCelebrationDefinition& operator=(VillagerCelebrationDefinition const&) = delete;
        VillagerCelebrationDefinition(VillagerCelebrationDefinition const&)            = delete;
        VillagerCelebrationDefinition()                                                = delete;

    public:
        /**
         * @symbol
         * ?buildSchema\@VillagerCelebrationDefinition\@VillagerCelebrationGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VVillagerCelebrationDefinition\@VillagerCelebrationGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class VillagerCelebrationGoal::VillagerCelebrationDefinition>>&); // NOLINT
    };

public:
    // prevent constructor by default
    VillagerCelebrationGoal& operator=(VillagerCelebrationGoal const&) = delete;
    VillagerCelebrationGoal(VillagerCelebrationGoal const&)            = delete;
    VillagerCelebrationGoal()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@VillagerCelebrationGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@VillagerCelebrationGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@VillagerCelebrationGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@VillagerCelebrationGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@VillagerCelebrationGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@VillagerCelebrationGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT

    // private:
    /**
     * @symbol ?_launchFirework\@VillagerCelebrationGoal\@\@AEAAXXZ
     */
    MCAPI void _launchFirework(); // NOLINT
    /**
     * @symbol ?_setNextFireworkTick\@VillagerCelebrationGoal\@\@AEAAXXZ
     */
    MCAPI void _setNextFireworkTick(); // NOLINT

private:
};
