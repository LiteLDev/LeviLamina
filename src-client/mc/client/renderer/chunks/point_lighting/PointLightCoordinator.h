#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/LightContainer.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
struct BlockQueueEntry;
struct Bounds;
struct RuntimeLocalLightingConfig;
namespace PointLighting { struct ICandidacyHeuristic; }
namespace PointLighting { struct ManagedPointLight; }
namespace dragon::framerenderer { struct PointLightLODingParameters; }
namespace mce { struct PointLight; }
// clang-format on

namespace PointLighting {

class PointLightCoordinator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                   mFramesSinceLastUpdate;
    ::ll::TypedStorage<8, 72, ::LightContainer<::PointLighting::ManagedPointLight>> mLightContainer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::RuntimeLocalLightingConfig const>>  mLightingConfig;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::PointLighting::ICandidacyHeuristic>>> mLightHeuristics;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unordered_map<::BlockPos, float> _computeCurrentLightScores() const;

    MCAPI ::std::optional<::mce::PointLight>
    _createPointLightFromBlock(::Block const& block, ::BlockPos const& blockPos) const;

    MCAPI void _prune(::Bounds const& viewBounds);

    MCAPI void applyBlockQueue(::std::vector<::BlockQueueEntry> const& queue);

    MCAPI void onBlockChanged(::BlockPos const& blockPos, ::Block const& block, ::Block const& oldBlock);

    MCAPI void update(
        ::std::optional<::Bounds> const&                           viewBounds,
        bool                                                       pointLightsEnabled,
        ::dragon::framerenderer::PointLightLODingParameters const& lodParams
    );

    MCAPI ~PointLightCoordinator();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isPointLightCandidate(::Block const& block, ::RuntimeLocalLightingConfig const& lightConfig);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace PointLighting
