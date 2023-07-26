#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AvoidBlockGoal {
public:
    // AvoidBlockGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // AvoidBlockGoal inner types define
    class Definition {

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;

    public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AVOIDBLOCKGOAL_DEFINITION
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~Definition(); // NOLINT
#endif
        /**
         * @symbol ??0Definition\@AvoidBlockGoal\@\@QEAA\@XZ
         */
        MCAPI Definition(); // NOLINT
        /**
         * @symbol ?initialize\@Definition\@AvoidBlockGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class AvoidBlockGoal&) const; // NOLINT
        /**
         * @symbol
         * ?setSoundEvent\@Definition\@AvoidBlockGoal\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI void setSoundEvent(std::string const&); // NOLINT
        /**
         * @symbol
         * ?setTargetSelectionMethod\@Definition\@AvoidBlockGoal\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI void setTargetSelectionMethod(std::string const&); // NOLINT
        /**
         * @symbol
         * ?buildSchema\@Definition\@AvoidBlockGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@AvoidBlockGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AvoidBlockGoal::Definition>>&); // NOLINT
    };

public:
    // prevent constructor by default
    AvoidBlockGoal& operator=(AvoidBlockGoal const&) = delete;
    AvoidBlockGoal(AvoidBlockGoal const&)            = delete;
    AvoidBlockGoal()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@AvoidBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@AvoidBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@AvoidBlockGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@AvoidBlockGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@AvoidBlockGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@AvoidBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0AvoidBlockGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI AvoidBlockGoal(class Mob&); // NOLINT

    // private:
    /**
     * @symbol ?_isValidTarget\@AvoidBlockGoal\@\@AEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool _isValidTarget(class Block const&) const; // NOLINT

private:
};
