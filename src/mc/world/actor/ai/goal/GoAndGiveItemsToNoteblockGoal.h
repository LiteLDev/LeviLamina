#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GoAndGiveItemsToNoteblockGoal {
public:
    // GoAndGiveItemsToNoteblockGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // GoAndGiveItemsToNoteblockGoal inner types define
    class Definition {

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;

    public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GOANDGIVEITEMSTONOTEBLOCKGOAL_DEFINITION
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~Definition(); // NOLINT
#endif
        /**
         * @symbol ??0Definition\@GoAndGiveItemsToNoteblockGoal\@\@QEAA\@XZ
         */
        MCAPI Definition(); // NOLINT
        /**
         * @symbol ?initialize\@Definition\@GoAndGiveItemsToNoteblockGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class GoAndGiveItemsToNoteblockGoal&) const; // NOLINT
        /**
         * @symbol
         * ?buildSchema\@Definition\@GoAndGiveItemsToNoteblockGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@GoAndGiveItemsToNoteblockGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GoAndGiveItemsToNoteblockGoal::Definition>>&); // NOLINT
    };

public:
    // prevent constructor by default
    GoAndGiveItemsToNoteblockGoal& operator=(GoAndGiveItemsToNoteblockGoal const&) = delete;
    GoAndGiveItemsToNoteblockGoal(GoAndGiveItemsToNoteblockGoal const&)            = delete;
    GoAndGiveItemsToNoteblockGoal()                                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@GoAndGiveItemsToNoteblockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@GoAndGiveItemsToNoteblockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@GoAndGiveItemsToNoteblockGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@GoAndGiveItemsToNoteblockGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@GoAndGiveItemsToNoteblockGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@GoAndGiveItemsToNoteblockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0GoAndGiveItemsToNoteblockGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI GoAndGiveItemsToNoteblockGoal(class Mob&); // NOLINT
};
