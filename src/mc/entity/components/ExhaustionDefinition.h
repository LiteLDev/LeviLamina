#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ExhaustionDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXHAUSTIONDEFINITION
public:
    ExhaustionDefinition& operator=(ExhaustionDefinition const&) = delete;
    ExhaustionDefinition(ExhaustionDefinition const&)            = delete;
    ExhaustionDefinition()                                       = delete;
#endif

public:
    /**
     * @symbol ?initialize\@ExhaustionDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVExhaustionComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class ExhaustionComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@ExhaustionDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VExhaustionDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExhaustionDefinition>>&);
};
