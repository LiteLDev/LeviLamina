#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsBabyDefinition {

public:
    // prevent constructor by default
    IsBabyDefinition& operator=(IsBabyDefinition const&) = delete;
    IsBabyDefinition(IsBabyDefinition const&)            = delete;
    IsBabyDefinition()                                   = delete;

public:
    /**
     * @symbol ?initialize\@IsBabyDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&) const; // NOLINT
    /**
     * @symbol ?uninitialize\@IsBabyDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@IsBabyDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UIsBabyDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsBabyDefinition>>&); // NOLINT
};
