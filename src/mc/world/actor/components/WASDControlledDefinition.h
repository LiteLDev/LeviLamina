#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct WASDControlledDefinition {

public:
    // prevent constructor by default
    WASDControlledDefinition& operator=(WASDControlledDefinition const&) = delete;
    WASDControlledDefinition(WASDControlledDefinition const&)            = delete;
    WASDControlledDefinition()                                           = delete;

public:
    /**
     * @symbol ?initialize\@WASDControlledDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&) const; // NOLINT
    /**
     * @symbol ?uninitialize\@WASDControlledDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@WASDControlledDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UWASDControlledDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      struct WASDControlledDefinition>>&); // NOLINT
};
