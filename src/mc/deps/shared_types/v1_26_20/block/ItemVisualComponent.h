#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/GeometryComponent.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialInstancesComponent.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct ItemVisualComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 296, ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent>          mGeometry;
    ::ll::TypedStorage<8, 128, ::SharedTypes::v1_26_20::BlockDefinition::MaterialInstancesComponent> mMaterialInstances;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD bool operator==(::SharedTypes::v1_26_20::BlockDefinition::ItemVisualComponent const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
