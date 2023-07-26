#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct GroundOffsetDefinition {

public:
    // prevent constructor by default
    GroundOffsetDefinition& operator=(GroundOffsetDefinition const&) = delete;
    GroundOffsetDefinition(GroundOffsetDefinition const&)            = delete;
    GroundOffsetDefinition()                                         = delete;

public:
    /**
     * @symbol ?initialize\@GroundOffsetDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@GroundOffsetDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UGroundOffsetDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      struct GroundOffsetDefinition>>&); // NOLINT
};
