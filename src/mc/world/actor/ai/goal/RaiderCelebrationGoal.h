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

    public:
        // prevent constructor by default
        RaiderCelebrationDefinition& operator=(RaiderCelebrationDefinition const&) = delete;
        RaiderCelebrationDefinition(RaiderCelebrationDefinition const&)            = delete;

    public:
        /**
         * @symbol ??0RaiderCelebrationDefinition\@RaiderCelebrationGoal\@\@QEAA\@XZ
         */
        MCAPI RaiderCelebrationDefinition(); // NOLINT
        /**
         * @symbol
         * ?addCelebrationSoundByName\@RaiderCelebrationDefinition\@RaiderCelebrationGoal\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI void addCelebrationSoundByName(std::string const&); // NOLINT
        /**
         * @symbol
         * ?initialize\@RaiderCelebrationDefinition\@RaiderCelebrationGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class RaiderCelebrationGoal&) const; // NOLINT
        /**
         * @symbol
         * ?buildSchema\@RaiderCelebrationDefinition\@RaiderCelebrationGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VRaiderCelebrationDefinition\@RaiderCelebrationGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RaiderCelebrationGoal::RaiderCelebrationDefinition>>&); // NOLINT
    };

public:
    // prevent constructor by default
    RaiderCelebrationGoal& operator=(RaiderCelebrationGoal const&) = delete;
    RaiderCelebrationGoal(RaiderCelebrationGoal const&)            = delete;
    RaiderCelebrationGoal()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@RaiderCelebrationGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RaiderCelebrationGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@RaiderCelebrationGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@RaiderCelebrationGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@RaiderCelebrationGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RaiderCelebrationGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0RaiderCelebrationGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RaiderCelebrationGoal(class Mob&); // NOLINT
};
