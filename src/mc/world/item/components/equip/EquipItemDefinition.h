#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EquipItemDefinition {
public:
    // prevent constructor by default
    EquipItemDefinition& operator=(EquipItemDefinition const&);
    EquipItemDefinition(EquipItemDefinition const&);
    EquipItemDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?addExcludeItemByName@EquipItemDefinition@@QEAAXAEBVItemDescriptor@@@Z
    MCAPI void addExcludeItemByName(class ItemDescriptor const&);

    // symbol:
    // ?buildSchema@EquipItemDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VEquipItemDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EquipItemDefinition>>&);

    // NOLINTEND
};
