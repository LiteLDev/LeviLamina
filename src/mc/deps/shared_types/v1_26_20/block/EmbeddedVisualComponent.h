#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/GeometryComponent.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialInstancesComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct EmbeddedVisualComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent>          mGeometry;
    ::ll::TypedStorage<8, 128, ::SharedTypes::v1_26_20::BlockDefinition::MaterialInstancesComponent> mMaterialInstances;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~EmbeddedVisualComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
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

} // namespace SharedTypes::v1_26_20::BlockDefinition
