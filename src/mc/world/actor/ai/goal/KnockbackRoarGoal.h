#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class KnockbackRoarGoal {
public:
    // KnockbackRoarGoal inner types declare
    // clang-format off
    class KnockbackRoarDefinition;
    // clang-format on

    // KnockbackRoarGoal inner types define
    class KnockbackRoarDefinition {

    public:
        // prevent constructor by default
        KnockbackRoarDefinition& operator=(KnockbackRoarDefinition const&) = delete;
        KnockbackRoarDefinition(KnockbackRoarDefinition const&)            = delete;
        KnockbackRoarDefinition()                                          = delete;

    public:
        /**
         * @symbol ?initialize\@KnockbackRoarDefinition\@KnockbackRoarGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class KnockbackRoarGoal&) const; // NOLINT
        /**
         * @symbol
         * ?buildSchema\@KnockbackRoarDefinition\@KnockbackRoarGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VKnockbackRoarDefinition\@KnockbackRoarGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class KnockbackRoarGoal::KnockbackRoarDefinition>>&); // NOLINT
        /**
         * @symbol ?getStrictParsingVersion\@KnockbackRoarDefinition\@KnockbackRoarGoal\@\@SA?AVSemVersion\@\@XZ
         */
        MCAPI static class SemVersion getStrictParsingVersion(); // NOLINT
    };

public:
    // prevent constructor by default
    KnockbackRoarGoal& operator=(KnockbackRoarGoal const&) = delete;
    KnockbackRoarGoal(KnockbackRoarGoal const&)            = delete;
    KnockbackRoarGoal()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@KnockbackRoarGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@KnockbackRoarGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@KnockbackRoarGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@KnockbackRoarGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@KnockbackRoarGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@KnockbackRoarGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0KnockbackRoarGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI KnockbackRoarGoal(class Mob&); // NOLINT
};
