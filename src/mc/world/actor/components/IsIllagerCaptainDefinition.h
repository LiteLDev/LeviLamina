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
    IsIllagerCaptainDefinition& operator=(IsIllagerCaptainDefinition const&);
    IsIllagerCaptainDefinition(IsIllagerCaptainDefinition const&);
    IsIllagerCaptainDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@IsIllagerCaptainDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void initialize(class EntityContext& entity) const;

    // symbol: ?uninitialize@IsIllagerCaptainDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void uninitialize(class EntityContext& entity) const;

    // symbol:
    // ?buildSchema@IsIllagerCaptainDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsIllagerCaptainDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsIllagerCaptainDefinition>>& root
    );

    // NOLINTEND
};
