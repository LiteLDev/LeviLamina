#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class FrustumCuller;
namespace PointLighting { class PointLightShadowProbe; }
namespace PointLighting { struct ProbeBatchEntry; }
namespace PointLighting { struct TileAction; }
namespace mce::framebuilder { struct PointLightParameters; }
// clang-format on

namespace PointLighting {

class PointLightShadowAtlasHysteresis {
public:
    // PointLightShadowAtlasHysteresis inner types define
    using ProbeMap = ::std::unordered_map<::BlockPos, ::PointLighting::PointLightShadowProbe>;

    using TileActionList = ::Bedrock::small_vector<::PointLighting::TileAction, 96>;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::small_vector<::PointLighting::TileAction, 96> evaluate(
        ::gsl::span<::PointLighting::ProbeBatchEntry const>                             batch,
        ::std::unordered_map<::BlockPos, ::PointLighting::PointLightShadowProbe> const& activeProbes,
        bool                                                                            atlasPressure,
        bool                                                                            atlasFull,
        ::mce::framebuilder::PointLightParameters const&                                params,
        ::FrustumCuller const&                                                          frustumCuller,
        ::glm::vec3 const&                                                              cameraForward,
        ::glm::vec3 const&                                                              worldOrigin,
        uint64                                                                          nowMs
    );
    // NOLINTEND
};

} // namespace PointLighting
