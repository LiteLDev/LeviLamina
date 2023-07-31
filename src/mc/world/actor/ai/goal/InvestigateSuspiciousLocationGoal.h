#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InvestigateSuspiciousLocationGoal {
public:
    // InvestigateSuspiciousLocationGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // InvestigateSuspiciousLocationGoal inner types define
    class Definition {

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0Definition\@InvestigateSuspiciousLocationGoal\@\@QEAA\@XZ
         */
        MCAPI Definition();
        /**
         * @symbol
         * ?buildSchema\@Definition\@InvestigateSuspiciousLocationGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@InvestigateSuspiciousLocationGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InvestigateSuspiciousLocationGoal::Definition>>&);
        /**
         * @symbol ?initialize\@Definition\@InvestigateSuspiciousLocationGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class InvestigateSuspiciousLocationGoal&) const;
        // NOLINTEND
    };

public:
    // prevent constructor by default
    InvestigateSuspiciousLocationGoal& operator=(InvestigateSuspiciousLocationGoal const&) = delete;
    InvestigateSuspiciousLocationGoal(InvestigateSuspiciousLocationGoal const&)            = delete;
    InvestigateSuspiciousLocationGoal()                                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@InvestigateSuspiciousLocationGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@InvestigateSuspiciousLocationGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@InvestigateSuspiciousLocationGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@InvestigateSuspiciousLocationGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@InvestigateSuspiciousLocationGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@InvestigateSuspiciousLocationGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0InvestigateSuspiciousLocationGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI InvestigateSuspiciousLocationGoal(class Mob&);
    // NOLINTEND
};
