#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct EquipmentTableDefinition {
public:
    // prevent constructor by default
    EquipmentTableDefinition& operator=(EquipmentTableDefinition const&);
    EquipmentTableDefinition(EquipmentTableDefinition const&);
    EquipmentTableDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@EquipmentTableDefinition@@SAXAEBV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEquipmentTableDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EquipmentTableDefinition>> const&
            root
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_setLootTable@EquipmentTableDefinition@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _setLootTable(std::string const&);

    // NOLINTEND
};
