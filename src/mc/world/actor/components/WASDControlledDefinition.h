#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct WASDControlledDefinition {
public:
    // prevent constructor by default
    WASDControlledDefinition& operator=(WASDControlledDefinition const&);
    WASDControlledDefinition(WASDControlledDefinition const&);
    WASDControlledDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@WASDControlledDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void initialize(class EntityContext& entity) const;

    // symbol: ?uninitialize@WASDControlledDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void uninitialize(class EntityContext& entity) const;

    // symbol:
    // ?buildSchema@WASDControlledDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UWASDControlledDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct WASDControlledDefinition>>& root
    );

    // NOLINTEND
};
