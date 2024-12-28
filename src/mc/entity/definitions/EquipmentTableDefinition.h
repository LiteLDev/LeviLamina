#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct EquipmentTableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnkfce7f6;
    // NOLINTEND

public:
    // prevent constructor by default
    EquipmentTableDefinition& operator=(EquipmentTableDefinition const&);
    EquipmentTableDefinition(EquipmentTableDefinition const&);
    EquipmentTableDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _setLootTable(::std::string const& lootTable);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EquipmentTableDefinition>> const&
            root
    );
    // NOLINTEND
};
