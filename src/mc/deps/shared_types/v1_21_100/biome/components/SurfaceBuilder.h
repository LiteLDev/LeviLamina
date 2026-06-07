#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_100::SurfaceBuilder { struct CappedSurfaceSettings; }
namespace SharedTypes::v1_21_100::SurfaceBuilder { struct FrozenOceanSurfaceSettings; }
namespace SharedTypes::v1_21_100::SurfaceBuilder { struct MesaSurfaceSettings; }
namespace SharedTypes::v1_21_100::SurfaceBuilder { struct OverworldSurfaceSettings; }
namespace SharedTypes::v1_21_100::SurfaceBuilder { struct SwampSurfaceSettings; }
namespace SharedTypes::v1_21_100::SurfaceBuilder { struct TheEndSurfaceSettings; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100::SurfaceBuilder {
// functions
// NOLINTBEGIN
MCAPI void bindTypes(::cereal::ReflectionCtx& ctx);

MCAPI bool operator==(
    ::std::variant<
        ::SharedTypes::v1_21_100::SurfaceBuilder::OverworldSurfaceSettings,
        ::SharedTypes::v1_21_100::SurfaceBuilder::FrozenOceanSurfaceSettings,
        ::SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings,
        ::SharedTypes::v1_21_100::SurfaceBuilder::SwampSurfaceSettings,
        ::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings,
        ::SharedTypes::v1_21_100::SurfaceBuilder::TheEndSurfaceSettings> const& lhs,
    ::std::variant<
        ::SharedTypes::v1_21_100::SurfaceBuilder::OverworldSurfaceSettings,
        ::SharedTypes::v1_21_100::SurfaceBuilder::FrozenOceanSurfaceSettings,
        ::SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings,
        ::SharedTypes::v1_21_100::SurfaceBuilder::SwampSurfaceSettings,
        ::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings,
        ::SharedTypes::v1_21_100::SurfaceBuilder::TheEndSurfaceSettings> const& rhs
);
// NOLINTEND

} // namespace SharedTypes::v1_21_100::SurfaceBuilder
