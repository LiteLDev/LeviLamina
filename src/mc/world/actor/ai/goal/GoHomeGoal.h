#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GoHomeGoal {
public:
    // GoHomeGoal inner types declare
    // clang-format off
    class GoHomeDefinition;
    // clang-format on

    // GoHomeGoal inner types define
    class GoHomeDefinition {

    public:
        // prevent constructor by default
        GoHomeDefinition& operator=(GoHomeDefinition const&) = delete;
        GoHomeDefinition(GoHomeDefinition const&)            = delete;
        GoHomeDefinition()                                   = delete;

    public:
        /**
         * @symbol ?initialize\@GoHomeDefinition\@GoHomeGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class GoHomeGoal&) const; // NOLINT
        /**
         * @symbol
         * ?buildSchema\@GoHomeDefinition\@GoHomeGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VGoHomeDefinition\@GoHomeGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GoHomeGoal::GoHomeDefinition>>&); // NOLINT
    };

public:
    // prevent constructor by default
    GoHomeGoal& operator=(GoHomeGoal const&) = delete;
    GoHomeGoal(GoHomeGoal const&)            = delete;
    GoHomeGoal()                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@GoHomeGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@GoHomeGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@GoHomeGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@GoHomeGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@GoHomeGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@GoHomeGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0GoHomeGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI GoHomeGoal(class Mob&); // NOLINT

    // private:
    /**
     * @symbol ?_getHomeDimension\@GoHomeGoal\@\@AEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> _getHomeDimension() const; // NOLINT
    /**
     * @symbol ?_getHomePos\@GoHomeGoal\@\@AEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos _getHomePos() const; // NOLINT
    /**
     * @symbol ?_hasRequiredComponents\@GoHomeGoal\@\@AEBA_NXZ
     */
    MCAPI bool _hasRequiredComponents() const; // NOLINT
    /**
     * @symbol ?_triggerOnFailedEvents\@GoHomeGoal\@\@AEAAXXZ
     */
    MCAPI void _triggerOnFailedEvents(); // NOLINT

private:
};
