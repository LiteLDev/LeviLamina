#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsPregnantDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISPREGNANTDEFINITION
public:
    IsPregnantDefinition& operator=(IsPregnantDefinition const&) = delete;
    IsPregnantDefinition(IsPregnantDefinition const&)            = delete;
    IsPregnantDefinition()                                       = delete;
#endif

public:
    /**
     * @symbol ?initialize\@IsPregnantDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&) const;
    /**
     * @symbol ?uninitialize\@IsPregnantDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&) const;
    /**
     * @symbol
     * ?buildSchema\@IsPregnantDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UIsPregnantDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsPregnantDefinition>>&);
};
