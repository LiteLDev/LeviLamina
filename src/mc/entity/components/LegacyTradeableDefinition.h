#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class LegacyTradeableDefinition {

public:
    // prevent constructor by default
    LegacyTradeableDefinition& operator=(LegacyTradeableDefinition const&) = delete;
    LegacyTradeableDefinition(LegacyTradeableDefinition const&)            = delete;

public:
    /**
     * @symbol ??0LegacyTradeableDefinition\@\@QEAA\@XZ
     */
    MCAPI LegacyTradeableDefinition(); // NOLINT
    /**
     * @symbol ?initialize\@LegacyTradeableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVLegacyTradeableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class LegacyTradeableComponent&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@LegacyTradeableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VLegacyTradeableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      class LegacyTradeableDefinition>>&); // NOLINT
};
