#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ChargeHeldItemDefinition {

public:
    // prevent constructor by default
    ChargeHeldItemDefinition& operator=(ChargeHeldItemDefinition const&) = delete;
    ChargeHeldItemDefinition(ChargeHeldItemDefinition const&)            = delete;
    ChargeHeldItemDefinition()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?initialize\@ChargeHeldItemDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVChargeHeldItemGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class ChargeHeldItemGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@ChargeHeldItemDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VChargeHeldItemDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ChargeHeldItemDefinition>>&);
    // NOLINTEND
};
