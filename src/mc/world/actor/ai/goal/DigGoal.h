#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DigGoal {
public:
    // DigGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // DigGoal inner types define
    enum class CanUseResult {};

    class Definition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIGGOAL_DEFINITION
    public:
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;
#endif

    public:
        /**
         * @symbol ??0Definition\@DigGoal\@\@QEAA\@XZ
         */
        MCAPI Definition();
        /**
         * @symbol ?initialize\@Definition\@DigGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class DigGoal&) const;
        /**
         * @symbol
         * ?buildSchema\@Definition\@DigGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@DigGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DigGoal::Definition>>&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIGGOAL
public:
    DigGoal& operator=(DigGoal const&) = delete;
    DigGoal(DigGoal const&)            = delete;
    DigGoal()                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@DigGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DigGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@DigGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@DigGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@DigGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DigGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0DigGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DigGoal(class Mob&);

    // private:
    /**
     * @symbol ?_canUse\@DigGoal\@\@AEBA?AW4CanUseResult\@1\@XZ
     */
    MCAPI enum class DigGoal::CanUseResult _canUse() const;

private:
};
