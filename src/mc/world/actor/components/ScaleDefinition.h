#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct ScaleDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCALEDEFINITION
public:
    ScaleDefinition& operator=(ScaleDefinition const&) = delete;
    ScaleDefinition(ScaleDefinition const&)            = delete;
    ScaleDefinition()                                  = delete;
#endif

public:
    /**
     * @symbol
     * ?buildSchema\@ScaleDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UScaleDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ScaleDefinition>>&);
};
