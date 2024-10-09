#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

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
    MCAPI void addExcludeItemByName(class ItemDescriptor const& itemDescriptor);

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EquipItemDefinition>>&
            root
    );

    // NOLINTEND
};
