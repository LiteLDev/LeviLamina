#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsHiddenWhenInvisibleDefinition {
public:
    // prevent constructor by default
    IsHiddenWhenInvisibleDefinition& operator=(IsHiddenWhenInvisibleDefinition const&);
    IsHiddenWhenInvisibleDefinition(IsHiddenWhenInvisibleDefinition const&);
    IsHiddenWhenInvisibleDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@IsHiddenWhenInvisibleDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void initialize(class EntityContext& entity) const;

    // symbol: ?uninitialize@IsHiddenWhenInvisibleDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void uninitialize(class EntityContext& entity) const;

    // symbol:
    // ?buildSchema@IsHiddenWhenInvisibleDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsHiddenWhenInvisibleDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsHiddenWhenInvisibleDefinition>>&
            root
    );

    // NOLINTEND
};
