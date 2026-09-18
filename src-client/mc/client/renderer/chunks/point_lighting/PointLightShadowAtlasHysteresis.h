#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace PointLighting { class PointLightShadowProbe; }
namespace PointLighting { struct TileAction; }
// clang-format on

namespace PointLighting {

class PointLightShadowAtlasHysteresis {
public:
    // PointLightShadowAtlasHysteresis inner types define
    using ProbeMap = ::std::unordered_map<::BlockPos, ::PointLighting::PointLightShadowProbe>;

    using TileActionList = ::Bedrock::small_vector<::PointLighting::TileAction, 96>;
};

} // namespace PointLighting
