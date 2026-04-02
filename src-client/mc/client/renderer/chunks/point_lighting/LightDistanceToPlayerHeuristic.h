#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/ICandidacyHeuristic.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class SubChunkPos;
namespace PointLighting { struct ManagedPointLight; }
// clang-format on

namespace PointLighting {

struct LightDistanceToPlayerHeuristic : public ::PointLighting::ICandidacyHeuristic {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPlayerPos;
    ::ll::TypedStorage<4, 4, float>   mMinDistance;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool reject(::SubChunkPos const& subChunkPos) const /*override*/;

    virtual float computeScore(::BlockPos const& bp, ::PointLighting::ManagedPointLight const&) const /*override*/;

    virtual ~LightDistanceToPlayerHeuristic() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $reject(::SubChunkPos const& subChunkPos) const;

    MCAPI float $computeScore(::BlockPos const& bp, ::PointLighting::ManagedPointLight const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PointLighting
