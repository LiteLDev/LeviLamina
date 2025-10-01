#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

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
    ::ll::UntypedStorage<1, 1>  mUnk79dfb0;
    // NOLINTEND

public:
    // prevent constructor by default
    EquipItemDefinition& operator=(EquipItemDefinition const&);
    EquipItemDefinition(EquipItemDefinition const&);
    EquipItemDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addExcludeItemByName(::ItemDescriptor const& itemDescriptor);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EquipItemDefinition>>& root
    );
    // NOLINTEND
};
