#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GoAndGiveItemsToOwnerGoal {
public:
    // GoAndGiveItemsToOwnerGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // GoAndGiveItemsToOwnerGoal inner types define
    class Definition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOANDGIVEITEMSTOOWNERGOAL_DEFINITION
    public:
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;
#endif

    public:
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
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GoAndGiveItemsToOwnerGoal::Definition>>&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOANDGIVEITEMSTOOWNERGOAL
public:
    GoAndGiveItemsToOwnerGoal& operator=(GoAndGiveItemsToOwnerGoal const&) = delete;
    GoAndGiveItemsToOwnerGoal(GoAndGiveItemsToOwnerGoal const&)            = delete;
    GoAndGiveItemsToOwnerGoal()                                            = delete;
#endif

public:
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
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
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

    // private:
    /**
     * @symbol ?_attemptToGiveItem\@GoAndGiveItemsToOwnerGoal\@\@AEAA_NXZ
     */
    MCAPI bool _attemptToGiveItem();

private:
};
