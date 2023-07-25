#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct CanFlyDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CANFLYDEFINITION
public:
    CanFlyDefinition& operator=(CanFlyDefinition const&) = delete;
    CanFlyDefinition(CanFlyDefinition const&)            = delete;
    CanFlyDefinition()                                   = delete;
#endif

public:
    /**
     * @symbol ?initialize\@CanFlyDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&) const;
    /**
     * @symbol ?uninitialize\@CanFlyDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&) const;
    /**
     * @symbol
     * ?buildSchema\@CanFlyDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UCanFlyDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct CanFlyDefinition>>&);
};
