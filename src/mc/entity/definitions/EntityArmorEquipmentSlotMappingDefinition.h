#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct EntityArmorEquipmentSlotMappingDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkfe1b80;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityArmorEquipmentSlotMappingDefinition& operator=(EntityArmorEquipmentSlotMappingDefinition const&);
    EntityArmorEquipmentSlotMappingDefinition(EntityArmorEquipmentSlotMappingDefinition const&);
    EntityArmorEquipmentSlotMappingDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _setArmorSlot(::std::string const& slot);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<
            ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EntityArmorEquipmentSlotMappingDefinition>>& root
    );
    // NOLINTEND
};
