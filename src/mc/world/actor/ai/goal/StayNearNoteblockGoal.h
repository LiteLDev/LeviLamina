#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class StayNearNoteblockGoal {
public:
    // StayNearNoteblockGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // StayNearNoteblockGoal inner types define
    class Definition {

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;

    public:
        // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STAYNEARNOTEBLOCKGOAL_DEFINITION
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~Definition();
#endif
        /**
         * @symbol ??0Definition\@StayNearNoteblockGoal\@\@QEAA\@XZ
         */
        MCAPI Definition();
        /**
         * @symbol ?initialize\@Definition\@StayNearNoteblockGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class StayNearNoteblockGoal&) const;
        /**
         * @symbol
         * ?buildSchema\@Definition\@StayNearNoteblockGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@StayNearNoteblockGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class StayNearNoteblockGoal::Definition>>&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    StayNearNoteblockGoal& operator=(StayNearNoteblockGoal const&) = delete;
    StayNearNoteblockGoal(StayNearNoteblockGoal const&)            = delete;
    StayNearNoteblockGoal()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@StayNearNoteblockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@StayNearNoteblockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@StayNearNoteblockGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@StayNearNoteblockGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@StayNearNoteblockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@StayNearNoteblockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0StayNearNoteblockGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI StayNearNoteblockGoal(class Mob&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_hasLastVibrationAtNoteblock\@StayNearNoteblockGoal\@\@AEAA?BV?$optional\@VBlockPos\@\@\@std\@\@XZ
     */
    MCAPI std::optional<class BlockPos> const _hasLastVibrationAtNoteblock();
    // NOLINTEND
};
