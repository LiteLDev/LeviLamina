#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsSaddledDefinition {

public:
    // prevent constructor by default
    IsSaddledDefinition& operator=(IsSaddledDefinition const&) = delete;
    IsSaddledDefinition(IsSaddledDefinition const&)            = delete;
    IsSaddledDefinition()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?buildSchema\@IsSaddledDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UIsSaddledDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsSaddledDefinition>>&);
    /**
     * @symbol ?initialize\@IsSaddledDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&) const;
    /**
     * @symbol ?uninitialize\@IsSaddledDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&) const;
    // NOLINTEND
};
