#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/Task.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BlockVolumeBase;
class BoundingBox;
struct Bounds;
namespace Editor { class ProjectRegion; }
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct CoroutineStatus; }
namespace Editor::BlockUtils::Task { class BlockUtilityChunkedVolume; }
namespace Editor::BlockUtils::Task { struct BlockUtilityFillResult; }
namespace Editor::BlockUtils::Task { struct BlockUtilityShapeVolumeOptionsCone; }
namespace Editor::BlockUtils::Task { struct BlockUtilityShapeVolumeOptionsCuboid; }
namespace Editor::BlockUtils::Task { struct BlockUtilityShapeVolumeOptionsCylinder; }
namespace Editor::BlockUtils::Task { struct BlockUtilityShapeVolumeOptionsEllipsoid; }
namespace Editor::BlockUtils::Task { struct BlockUtilityShapeVolumeOptionsPyramid; }
namespace Editor::Coroutine { class CoroutineTaskContext; }
// clang-format on

namespace Editor::BlockUtils::Task {
// functions
// NOLINTBEGIN
MCNAPI ::Editor::Task<
    ::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>,
    ::Editor::CoroutineStatus>
_createCone(::Editor::Coroutine::CoroutineTaskContext&, ::Editor::BlockUtils::Task::BlockUtilityShapeVolumeOptionsCone);

MCNAPI ::Editor::
    Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
    _createCuboid(
        ::Editor::Coroutine::CoroutineTaskContext&,
        ::Editor::BlockUtils::Task::BlockUtilityShapeVolumeOptionsCuboid
    );

MCNAPI ::Editor::
    Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
    _createCylinder(
        ::Editor::Coroutine::CoroutineTaskContext&,
        ::Editor::BlockUtils::Task::BlockUtilityShapeVolumeOptionsCylinder
    );

MCNAPI ::Editor::
    Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
    _createEllipsoid(
        ::Editor::Coroutine::CoroutineTaskContext&,
        ::Editor::BlockUtils::Task::BlockUtilityShapeVolumeOptionsEllipsoid
    );

MCNAPI ::Editor::
    Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
    _createPyramid(
        ::Editor::Coroutine::CoroutineTaskContext&,
        ::Editor::BlockUtils::Task::BlockUtilityShapeVolumeOptionsPyramid
    );

MCNAPI ::Editor::Task<::Scripting::Result_deprecated<void>, ::Editor::CoroutineStatus> awaitExistingRegionAvailable(
    ::Editor::Coroutine::CoroutineTaskContext& context,
    ::WeakRef<::Editor::ProjectRegion>         region,
    ::BoundingBox                              bounds
);

MCNAPI ::Editor::Task<::Scripting::Result_deprecated<void>, ::Editor::CoroutineStatus> awaitRegionAvailable(
    ::Editor::Coroutine::CoroutineTaskContext& context,
    ::WeakRef<::Editor::ProjectRegion>         region,
    ::std::optional<::Bounds>                  bounds
);

MCNAPI ::Editor::BlockUtils::Task::BlockUtilityChunkedVolume captureChunkedVolume(::BlockVolumeBase const& volume);

MCNAPI ::Editor::BlockUtils::Task::BlockUtilityChunkedVolume
captureChunkedVolume(::Editor::RelativeVolumeListBlockVolume const& volume);

MCNAPI bool
isBlockSourceActive(::Editor::ServiceProviderCollection& serviceProviders, ::BlockSource const* expectedBlockSource);

MCNAPI ::Editor::
    Task<::Scripting::Result_deprecated<::Editor::BlockUtils::Task::BlockUtilityFillResult>, ::Editor::CoroutineStatus>
    writeExtrudeGeometry(
        ::Editor::Coroutine::CoroutineTaskContext&            context,
        ::Editor::ServiceProviderCollection&                  serviceProviders,
        ::BlockSource*                                        region,
        ::Editor::BlockUtils::Task::BlockUtilityChunkedVolume cells
    );
// NOLINTEND

} // namespace Editor::BlockUtils::Task
