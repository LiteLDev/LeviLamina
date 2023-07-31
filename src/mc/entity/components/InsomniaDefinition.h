#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InsomniaDefinition {

public:
    // prevent constructor by default
    InsomniaDefinition& operator=(InsomniaDefinition const&) = delete;
    InsomniaDefinition(InsomniaDefinition const&)            = delete;
    InsomniaDefinition()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?initialize\@InsomniaDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVInsomniaComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class InsomniaComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@InsomniaDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VInsomniaDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InsomniaDefinition>>&);
    // NOLINTEND
};
