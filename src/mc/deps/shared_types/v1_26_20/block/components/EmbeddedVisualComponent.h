#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/components/GeometryComponent.h"
#include "mc/deps/shared_types/v1_26_20/block/components/MaterialInstancesComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct EmbeddedVisualComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 296, ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent>          mGeometry;
    ::ll::TypedStorage<8, 128, ::SharedTypes::v1_26_20::BlockDefinition::MaterialInstancesComponent> mMaterialInstances;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::SharedTypes::v1_26_20::BlockDefinition::EmbeddedVisualComponent const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& GeometryId();

    MCNAPI static ::std::string_view const& MaterialInstancesId();

    MCNAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
