#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EquipItemDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8178ec;
    // NOLINTEND

public:
    // prevent constructor by default
    EquipItemDefinition& operator=(EquipItemDefinition const&);
    EquipItemDefinition(EquipItemDefinition const&);
    EquipItemDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void addExcludeItemByName(::ItemDescriptor const& itemDescriptor);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EquipItemDefinition>>& root
    );
    // NOLINTEND
};
