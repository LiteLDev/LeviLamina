#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct CanPowerJumpDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CANPOWERJUMPDEFINITION
public:
    CanPowerJumpDefinition& operator=(CanPowerJumpDefinition const&) = delete;
    CanPowerJumpDefinition(CanPowerJumpDefinition const&)            = delete;
    CanPowerJumpDefinition()                                         = delete;
#endif

public:
    /**
     * @symbol ?initialize\@CanPowerJumpDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&) const;
    /**
     * @symbol ?uninitialize\@CanPowerJumpDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&) const;
    /**
     * @symbol
     * ?buildSchema\@CanPowerJumpDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UCanPowerJumpDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct CanPowerJumpDefinition>>&);
};
