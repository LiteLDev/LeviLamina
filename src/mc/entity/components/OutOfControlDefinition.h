#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class OutOfControlDefinition {

public:
    // prevent constructor by default
    OutOfControlDefinition& operator=(OutOfControlDefinition const&) = delete;
    OutOfControlDefinition(OutOfControlDefinition const&)            = delete;
    OutOfControlDefinition()                                         = delete;

public:
    /**
     * @symbol ?initialize\@OutOfControlDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVOutOfControlComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class OutOfControlComponent&) const; // NOLINT
    /**
     * @symbol ?uninitialize\@OutOfControlDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVOutOfControlComponent\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&, class OutOfControlComponent&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@OutOfControlDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VOutOfControlDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      class OutOfControlDefinition>>&); // NOLINT
};
