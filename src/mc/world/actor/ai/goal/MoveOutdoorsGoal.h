#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MoveOutdoorsGoal : public ::BaseMoveToBlockGoal {
public:
    // MoveOutdoorsGoal inner types declare
    // clang-format off
    class MoveOutdoorsDefinition;
    // clang-format on

    // MoveOutdoorsGoal inner types define
    class MoveOutdoorsDefinition {

    public:
        // prevent constructor by default
        MoveOutdoorsDefinition& operator=(MoveOutdoorsDefinition const&) = delete;
        MoveOutdoorsDefinition(MoveOutdoorsDefinition const&)            = delete;

    public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEOUTDOORSGOAL_MOVEOUTDOORSDEFINITION
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~MoveOutdoorsDefinition(); // NOLINT
#endif
        /**
         * @symbol ??0MoveOutdoorsDefinition\@MoveOutdoorsGoal\@\@QEAA\@XZ
         */
        MCAPI MoveOutdoorsDefinition(); // NOLINT
        /**
         * @symbol ?initialize\@MoveOutdoorsDefinition\@MoveOutdoorsGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class MoveOutdoorsGoal&) const; // NOLINT
        /**
         * @symbol
         * ?buildSchema\@MoveOutdoorsDefinition\@MoveOutdoorsGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VMoveOutdoorsDefinition\@MoveOutdoorsGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MoveOutdoorsGoal::MoveOutdoorsDefinition>>&); // NOLINT
    };

public:
    // prevent constructor by default
    MoveOutdoorsGoal& operator=(MoveOutdoorsGoal const&) = delete;
    MoveOutdoorsGoal(MoveOutdoorsGoal const&)            = delete;
    MoveOutdoorsGoal()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@MoveOutdoorsGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@MoveOutdoorsGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@MoveOutdoorsGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MoveOutdoorsGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?isValidTarget\@MoveOutdoorsGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ??0MoveOutdoorsGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI MoveOutdoorsGoal(class Mob&); // NOLINT
    /**
     * @symbol ?mobHasClearSpaceAbove\@MoveOutdoorsGoal\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool mobHasClearSpaceAbove(class BlockSource&, class BlockPos const&); // NOLINT

    // private:
    /**
     * @symbol ?_setNextTargetTick\@MoveOutdoorsGoal\@\@AEAAXXZ
     */
    MCAPI void _setNextTargetTick(); // NOLINT

private:
};
