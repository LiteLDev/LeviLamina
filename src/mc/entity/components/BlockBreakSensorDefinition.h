#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BlockBreakSensorDefinition {

public:
    // prevent constructor by default
    BlockBreakSensorDefinition& operator=(BlockBreakSensorDefinition const&) = delete;
    BlockBreakSensorDefinition(BlockBreakSensorDefinition const&)            = delete;

public:
    /**
     * @symbol ??0BlockBreakSensorDefinition\@\@QEAA\@XZ
     */
    MCAPI BlockBreakSensorDefinition(); // NOLINT
    /**
     * @symbol ?initialize\@BlockBreakSensorDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVBlockBreakSensorComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class BlockBreakSensorComponent&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@BlockBreakSensorDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VBlockBreakSensorDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      class BlockBreakSensorDefinition>>&); // NOLINT
};
