#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/CappedSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/FrozenOceanSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/MesaSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/OverworldSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/SwampSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/TheEndSurfaceSettings.h"
#include "mc/deps/shared_types/v1_26_30/biome/components/NoiseGradientSurfaceSettings.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_100 { struct SurfaceBuilderBiomeJsonComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct SurfaceBuilderBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        696,
        ::std::variant<
            ::SharedTypes::v1_21_100::SurfaceBuilder::OverworldSurfaceSettings,
            ::SharedTypes::v1_21_100::SurfaceBuilder::FrozenOceanSurfaceSettings,
            ::SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings,
            ::SharedTypes::v1_21_100::SurfaceBuilder::SwampSurfaceSettings,
            ::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings,
            ::SharedTypes::v1_21_100::SurfaceBuilder::TheEndSurfaceSettings,
            ::SharedTypes::v1_26_30::SurfaceBuilder::NoiseGradientSurfaceSettings>>
        mBuilder;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void upgrade(
        ::SharedTypes::v1_21_100::SurfaceBuilderBiomeJsonComponent const& oldComponent,
        ::SharedTypes::v1_26_30::SurfaceBuilderBiomeJsonComponent&        newComponent
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SUBSURFACE_BUILDER_SCHEMA_NAME();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
