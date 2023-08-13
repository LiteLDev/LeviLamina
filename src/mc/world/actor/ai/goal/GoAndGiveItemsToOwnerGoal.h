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

class GoAndGiveItemsToOwnerGoal : public ::Goal {
public:
    // GoAndGiveItemsToOwnerGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // GoAndGiveItemsToOwnerGoal inner types define
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GOANDGIVEITEMSTOOWNERGOAL_DEFINITION
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~Definition();
#endif
        /**
         * @symbol ??0Definition\@GoAndGiveItemsToOwnerGoal\@\@QEAA\@XZ
         */
        MCAPI Definition();
        /**
         * @symbol ?initialize\@Definition\@GoAndGiveItemsToOwnerGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class GoAndGiveItemsToOwnerGoal&) const;
        /**
         * @symbol
         * ?buildSchema\@Definition\@GoAndGiveItemsToOwnerGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@GoAndGiveItemsToOwnerGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GoAndGiveItemsToOwnerGoal::Definition>>&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    GoAndGiveItemsToOwnerGoal& operator=(GoAndGiveItemsToOwnerGoal const&) = delete;
    GoAndGiveItemsToOwnerGoal(GoAndGiveItemsToOwnerGoal const&)            = delete;
    GoAndGiveItemsToOwnerGoal()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@GoAndGiveItemsToOwnerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@GoAndGiveItemsToOwnerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@GoAndGiveItemsToOwnerGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@GoAndGiveItemsToOwnerGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@GoAndGiveItemsToOwnerGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@GoAndGiveItemsToOwnerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0GoAndGiveItemsToOwnerGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI GoAndGiveItemsToOwnerGoal(class Mob&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_attemptToGiveItem\@GoAndGiveItemsToOwnerGoal\@\@AEAA_NXZ
     */
    MCAPI bool _attemptToGiveItem();
    // NOLINTEND
};
