#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsIllagerCaptainDefinition {

public:
    // prevent constructor by default
    IsIllagerCaptainDefinition& operator=(IsIllagerCaptainDefinition const&) = delete;
    IsIllagerCaptainDefinition(IsIllagerCaptainDefinition const&)            = delete;
    IsIllagerCaptainDefinition()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?initialize\@IsIllagerCaptainDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&) const;
    /**
     * @symbol ?uninitialize\@IsIllagerCaptainDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&) const;
    /**
     * @symbol
     * ?buildSchema\@IsIllagerCaptainDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UIsIllagerCaptainDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsIllagerCaptainDefinition>>&);
    // NOLINTEND
};
