#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HomeDefinition {
public:
    // prevent constructor by default
    HomeDefinition& operator=(HomeDefinition const&);
    HomeDefinition(HomeDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0HomeDefinition@@QEAA@XZ
    MCAPI HomeDefinition();

    // symbol: ?initialize@HomeDefinition@@QEBAXAEAVEntityContext@@AEAVHomeComponent@@@Z
    MCAPI void initialize(class EntityContext&, class HomeComponent& component) const;

    // symbol:
    // ?buildSchema@HomeDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VHomeDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HomeDefinition>>& root
    );

    // NOLINTEND
};
