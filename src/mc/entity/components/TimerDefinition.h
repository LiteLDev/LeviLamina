#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TimerDefinition {

public:
    // prevent constructor by default
    TimerDefinition& operator=(TimerDefinition const&) = delete;
    TimerDefinition(TimerDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0TimerDefinition\@\@QEAA\@XZ
     */
    MCAPI TimerDefinition();
    /**
     * @symbol ?addWeightedChoiceEntry\@TimerDefinition\@\@QEAAXAEBUWeightChoiceEntry\@\@\@Z
     */
    MCAPI void addWeightedChoiceEntry(struct WeightChoiceEntry const&);
    /**
     * @symbol
     * ?buildSchema\@TimerDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VTimerDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TimerDefinition>>&);
    /**
     * @symbol ?initialize\@TimerDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVTimerComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class TimerComponent&) const;
    // NOLINTEND
};
