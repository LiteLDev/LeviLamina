#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct VariantDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VARIANTDEFINITION
public:
    VariantDefinition& operator=(VariantDefinition const&) = delete;
    VariantDefinition(VariantDefinition const&)            = delete;
    VariantDefinition()                                    = delete;
#endif

public:
    /**
     * @symbol
     * ?buildSchema\@VariantDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UVariantDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct VariantDefinition>>&);
};
