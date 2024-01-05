#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct CanPowerJumpDefinition {
public:
    // prevent constructor by default
    CanPowerJumpDefinition& operator=(CanPowerJumpDefinition const&);
    CanPowerJumpDefinition(CanPowerJumpDefinition const&);
    CanPowerJumpDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@CanPowerJumpDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void initialize(class EntityContext& entity) const;

    // symbol: ?uninitialize@CanPowerJumpDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void uninitialize(class EntityContext& entity) const;

    // symbol:
    // ?buildSchema@CanPowerJumpDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UCanPowerJumpDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct CanPowerJumpDefinition>>& root);

    // NOLINTEND
};
