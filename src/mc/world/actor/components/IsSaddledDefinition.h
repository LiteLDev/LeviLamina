#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsSaddledDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISSADDLEDDEFINITION
public:
    IsSaddledDefinition& operator=(IsSaddledDefinition const&) = delete;
    IsSaddledDefinition(IsSaddledDefinition const&)            = delete;
    IsSaddledDefinition()                                      = delete;
#endif

public:
    /**
     * @symbol ?initialize\@IsSaddledDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&) const;
    /**
     * @symbol ?uninitialize\@IsSaddledDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&) const;
    /**
     * @symbol
     * ?buildSchema\@IsSaddledDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UIsSaddledDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsSaddledDefinition>>&);
};
