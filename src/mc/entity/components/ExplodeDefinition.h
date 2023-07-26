#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ExplodeDefinition {

public:
    // prevent constructor by default
    ExplodeDefinition& operator=(ExplodeDefinition const&) = delete;
    ExplodeDefinition(ExplodeDefinition const&)            = delete;

public:
    /**
     * @symbol ??0ExplodeDefinition\@\@QEAA\@XZ
     */
    MCAPI ExplodeDefinition(); // NOLINT
    /**
     * @symbol ?initialize\@ExplodeDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVExplodeComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class ExplodeComponent&) const; // NOLINT
    /**
     * @symbol ?uninitialize\@ExplodeDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@ExplodeDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VExplodeDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExplodeDefinition>>&); // NOLINT
};
