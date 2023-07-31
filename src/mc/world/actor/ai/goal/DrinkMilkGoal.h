#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DrinkMilkGoal {
public:
    // DrinkMilkGoal inner types declare
    // clang-format off
    class DrinkMilkDefinition;
    // clang-format on

    // DrinkMilkGoal inner types define
    class DrinkMilkDefinition {

    public:
        // prevent constructor by default
        DrinkMilkDefinition& operator=(DrinkMilkDefinition const&) = delete;
        DrinkMilkDefinition(DrinkMilkDefinition const&)            = delete;
        DrinkMilkDefinition()                                      = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol
         * ?buildSchema\@DrinkMilkDefinition\@DrinkMilkGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDrinkMilkDefinition\@DrinkMilkGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DrinkMilkGoal::DrinkMilkDefinition>>&);
        /**
         * @symbol ?initialize\@DrinkMilkDefinition\@DrinkMilkGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class DrinkMilkGoal&) const;
        // NOLINTEND
    };

public:
    // prevent constructor by default
    DrinkMilkGoal& operator=(DrinkMilkGoal const&) = delete;
    DrinkMilkGoal(DrinkMilkGoal const&)            = delete;
    DrinkMilkGoal()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@DrinkMilkGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DrinkMilkGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@DrinkMilkGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@DrinkMilkGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@DrinkMilkGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DrinkMilkGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0DrinkMilkGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DrinkMilkGoal(class Mob&);
    // NOLINTEND
};
