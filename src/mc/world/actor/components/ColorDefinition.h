#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct ColorDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COLORDEFINITION
public:
    ColorDefinition& operator=(ColorDefinition const&) = delete;
    ColorDefinition(ColorDefinition const&)            = delete;
    ColorDefinition()                                  = delete;
#endif

public:
    /**
     * @symbol ?setColorChoice\@ColorDefinition\@\@QEAAXAEBH\@Z
     */
    MCAPI void setColorChoice(int const&);
    /**
     * @symbol
     * ?buildSchema\@ColorDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UColorDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ColorDefinition>>&);
};
