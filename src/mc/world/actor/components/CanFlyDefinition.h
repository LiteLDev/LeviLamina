#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct CanFlyDefinition {

public:
    // prevent constructor by default
    CanFlyDefinition& operator=(CanFlyDefinition const&) = delete;
    CanFlyDefinition(CanFlyDefinition const&)            = delete;
    CanFlyDefinition()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?buildSchema\@CanFlyDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UCanFlyDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct CanFlyDefinition>>&);
    /**
     * @symbol ?initialize\@CanFlyDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&) const;
    /**
     * @symbol ?uninitialize\@CanFlyDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&) const;
    // NOLINTEND
};
