#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/block/GeometryComponent.h"
#include "mc/deps/shared_types/v1_26_10/block/MaterialInstancesComponent.h"

namespace SharedTypes::v1_26_10::BlockDefinition {

struct ItemVisualComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_26_10::BlockDefinition::GeometryComponent>          mGeometry;
    ::ll::TypedStorage<8, 128, ::SharedTypes::v1_26_10::BlockDefinition::MaterialInstancesComponent> mMaterialInstances;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemVisualComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& GeometryId();

    MCAPI static ::std::string_view const& MaterialInstancesId();

    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
