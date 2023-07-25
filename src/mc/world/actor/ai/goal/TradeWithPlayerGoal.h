#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TradeWithPlayerGoal {
public:
    // TradeWithPlayerGoal inner types declare
    // clang-format off
    class TradeWithPlayerDefinition;
    // clang-format on

    // TradeWithPlayerGoal inner types define
    class TradeWithPlayerDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADEWITHPLAYERGOAL_TRADEWITHPLAYERDEFINITION
    public:
        TradeWithPlayerDefinition& operator=(TradeWithPlayerDefinition const&) = delete;
        TradeWithPlayerDefinition(TradeWithPlayerDefinition const&)            = delete;
        TradeWithPlayerDefinition()                                            = delete;
#endif

    public:
        /**
         * @symbol
         * ?buildSchema\@TradeWithPlayerDefinition\@TradeWithPlayerGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VTradeWithPlayerDefinition\@TradeWithPlayerGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TradeWithPlayerGoal::TradeWithPlayerDefinition>>&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADEWITHPLAYERGOAL
public:
    TradeWithPlayerGoal& operator=(TradeWithPlayerGoal const&) = delete;
    TradeWithPlayerGoal(TradeWithPlayerGoal const&)            = delete;
    TradeWithPlayerGoal()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@TradeWithPlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@TradeWithPlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@TradeWithPlayerGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@TradeWithPlayerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
};
