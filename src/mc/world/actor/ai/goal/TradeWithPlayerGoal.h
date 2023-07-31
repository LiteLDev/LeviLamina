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

    public:
        // prevent constructor by default
        TradeWithPlayerDefinition& operator=(TradeWithPlayerDefinition const&) = delete;
        TradeWithPlayerDefinition(TradeWithPlayerDefinition const&)            = delete;
        TradeWithPlayerDefinition()                                            = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol
         * ?buildSchema\@TradeWithPlayerDefinition\@TradeWithPlayerGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VTradeWithPlayerDefinition\@TradeWithPlayerGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TradeWithPlayerGoal::TradeWithPlayerDefinition>>&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    TradeWithPlayerGoal& operator=(TradeWithPlayerGoal const&) = delete;
    TradeWithPlayerGoal(TradeWithPlayerGoal const&)            = delete;
    TradeWithPlayerGoal()                                      = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
