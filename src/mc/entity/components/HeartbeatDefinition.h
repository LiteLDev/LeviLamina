#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HeartbeatDefinition {

public:
    // prevent constructor by default
    HeartbeatDefinition& operator=(HeartbeatDefinition const&) = delete;
    HeartbeatDefinition(HeartbeatDefinition const&)            = delete;
    HeartbeatDefinition()                                      = delete;

public:
    /**
     * @symbol ?initialize\@HeartbeatDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVHeartbeatServerComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class HeartbeatServerComponent&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@HeartbeatDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VHeartbeatDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      class HeartbeatDefinition>>&); // NOLINT
};
