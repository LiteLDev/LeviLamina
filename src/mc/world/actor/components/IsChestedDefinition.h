#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsChestedDefinition {
public:
    // prevent constructor by default
    IsChestedDefinition& operator=(IsChestedDefinition const&);
    IsChestedDefinition(IsChestedDefinition const&);
    IsChestedDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@IsChestedDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void initialize(class EntityContext& entity) const;

    // symbol: ?uninitialize@IsChestedDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void uninitialize(class EntityContext& entity) const;

    // symbol:
    // ?buildSchema@IsChestedDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsChestedDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsChestedDefinition>>&
            root
    );

    // NOLINTEND
};
