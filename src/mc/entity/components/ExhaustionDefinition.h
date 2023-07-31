#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ExhaustionDefinition {

public:
    // prevent constructor by default
    ExhaustionDefinition& operator=(ExhaustionDefinition const&) = delete;
    ExhaustionDefinition(ExhaustionDefinition const&)            = delete;
    ExhaustionDefinition()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?buildSchema\@ExhaustionDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VExhaustionDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExhaustionDefinition>>&);
    /**
     * @symbol ?initialize\@ExhaustionDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVExhaustionComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class ExhaustionComponent&) const;
    // NOLINTEND
};
