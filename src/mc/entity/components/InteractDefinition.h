#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InteractDefinition {

public:
    // prevent constructor by default
    InteractDefinition& operator=(InteractDefinition const&) = delete;
    InteractDefinition(InteractDefinition const&)            = delete;
    InteractDefinition()                                     = delete;

public:
    /**
     * @symbol ?addInteraction\@InteractDefinition\@\@QEAAXAEBUInteraction\@\@\@Z
     */
    MCAPI void addInteraction(struct Interaction const&); // NOLINT
    /**
     * @symbol ?initialize\@InteractDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVInteractComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class InteractComponent&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@InteractDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VInteractDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InteractDefinition>>&); // NOLINT
};
