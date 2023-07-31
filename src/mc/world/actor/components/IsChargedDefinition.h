#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsChargedDefinition {

public:
    // prevent constructor by default
    IsChargedDefinition& operator=(IsChargedDefinition const&) = delete;
    IsChargedDefinition(IsChargedDefinition const&)            = delete;
    IsChargedDefinition()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?buildSchema\@IsChargedDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UIsChargedDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsChargedDefinition>>&);
    /**
     * @symbol ?initialize\@IsChargedDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&) const;
    /**
     * @symbol ?uninitialize\@IsChargedDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&) const;
    // NOLINTEND
};
