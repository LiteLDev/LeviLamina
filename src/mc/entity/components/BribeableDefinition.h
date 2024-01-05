#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BribeableDefinition {
public:
    // prevent constructor by default
    BribeableDefinition& operator=(BribeableDefinition const&);
    BribeableDefinition(BribeableDefinition const&);
    BribeableDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?addBribeItem@BribeableDefinition@@QEAAXAEBVItemDescriptor@@@Z
    MCAPI void addBribeItem(class ItemDescriptor const& itemDescriptor);

    // symbol: ?initialize@BribeableDefinition@@QEBAXAEAVEntityContext@@AEAVBribeableComponent@@@Z
    MCAPI void initialize(class EntityContext&, class BribeableComponent& component) const;

    // symbol:
    // ?buildSchema@BribeableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBribeableDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BribeableDefinition>>&
            root
    );

    // NOLINTEND
};
