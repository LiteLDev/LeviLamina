#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BarterDefinition {

public:
    // prevent constructor by default
    BarterDefinition& operator=(BarterDefinition const&) = delete;
    BarterDefinition(BarterDefinition const&)            = delete;
    BarterDefinition()                                   = delete;

public:
    /**
     * @symbol
     * ?buildSchema\@BarterDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VBarterDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BarterDefinition>>&); // NOLINT
};
