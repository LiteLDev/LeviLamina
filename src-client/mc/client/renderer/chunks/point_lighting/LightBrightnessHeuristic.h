#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/ICandidacyHeuristic.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace PointLighting { struct ManagedPointLight; }
// clang-format on

namespace PointLighting {

struct LightBrightnessHeuristic : public ::PointLighting::ICandidacyHeuristic {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual float computeScore(::BlockPos const&, ::PointLighting::ManagedPointLight const& light) const /*override*/;

    virtual ~LightBrightnessHeuristic() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $computeScore(::BlockPos const&, ::PointLighting::ManagedPointLight const& light) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PointLighting
