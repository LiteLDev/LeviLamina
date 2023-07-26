#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MoveIndoorsGoal {
public:
    // MoveIndoorsGoal inner types declare
    // clang-format off
    class MoveIndoorsDefinition;
    // clang-format on

    // MoveIndoorsGoal inner types define
    class MoveIndoorsDefinition {

    public:
        // prevent constructor by default
        MoveIndoorsDefinition& operator=(MoveIndoorsDefinition const&) = delete;
        MoveIndoorsDefinition(MoveIndoorsDefinition const&)            = delete;

    public:
        /**
         * @symbol ??0MoveIndoorsDefinition\@MoveIndoorsGoal\@\@QEAA\@XZ
         */
        MCAPI MoveIndoorsDefinition(); // NOLINT
        /**
         * @symbol ?addCooldownTicksBySeconds\@MoveIndoorsDefinition\@MoveIndoorsGoal\@\@QEAAXAEBM\@Z
         */
        MCAPI void addCooldownTicksBySeconds(float const&); // NOLINT
        /**
         * @symbol ?initialize\@MoveIndoorsDefinition\@MoveIndoorsGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class MoveIndoorsGoal&) const; // NOLINT
        /**
         * @symbol
         * ?buildSchema\@MoveIndoorsDefinition\@MoveIndoorsGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VMoveIndoorsDefinition\@MoveIndoorsGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MoveIndoorsGoal::MoveIndoorsDefinition>>&); // NOLINT
    };

public:
    // prevent constructor by default
    MoveIndoorsGoal& operator=(MoveIndoorsGoal const&) = delete;
    MoveIndoorsGoal(MoveIndoorsGoal const&)            = delete;
    MoveIndoorsGoal()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@MoveIndoorsGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MoveIndoorsGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@MoveIndoorsGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@MoveIndoorsGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@MoveIndoorsGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MoveIndoorsGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0MoveIndoorsGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI MoveIndoorsGoal(class Mob&); // NOLINT

    // private:
    /**
     * @symbol ?_isInside\@MoveIndoorsGoal\@\@AEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool _isInside(class BlockPos const&); // NOLINT
    /**
     * @symbol ?_startPathfinding\@MoveIndoorsGoal\@\@AEAAXXZ
     */
    MCAPI void _startPathfinding(); // NOLINT

private:
};
