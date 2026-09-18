#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/Task.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/block_utils/BlockUtilityTaskServiceProvider.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BoundingBox;
namespace Editor { class ProjectRegion; }
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor { struct CoroutineStatus; }
namespace Editor::BlockMask { class BlockMaskList; }
namespace Editor::BlockUtils::Task { class BlockUtilityChunkedVolume; }
namespace Editor::BlockUtils::Task { struct BlockUtilityExtrudeOptions; }
namespace Editor::BlockUtils::Task { struct BlockUtilityExtrudeResult; }
namespace Editor::BlockUtils::Task { struct BlockUtilityFillResult; }
namespace Editor::BlockUtils::Task { struct BlockUtilityFloodSearchOptions; }
namespace Editor::BlockUtils::Task { struct BlockUtilityManifest; }
namespace Editor::BlockUtils::Task { struct BlockUtilityShapeVolumeOptionsCone; }
namespace Editor::BlockUtils::Task { struct BlockUtilityShapeVolumeOptionsCuboid; }
namespace Editor::BlockUtils::Task { struct BlockUtilityShapeVolumeOptionsCylinder; }
namespace Editor::BlockUtils::Task { struct BlockUtilityShapeVolumeOptionsEllipsoid; }
namespace Editor::BlockUtils::Task { struct BlockUtilityShapeVolumeOptionsPyramid; }
namespace Editor::Coroutine { class CoroutineTaskContext; }
// clang-format on

namespace Editor::BlockUtils::Task {

class BlockUtilityTaskService : public ::Editor::Services::IEditorService,
                                public ::Editor::BlockUtils::Task::BlockUtilityTaskServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockUtilityTaskService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Editor::Task<
        ::Scripting::Result_deprecated<::Editor::BlockUtils::Task::BlockUtilityFillResult>,
        ::Editor::CoroutineStatus>
    fillVolume(
        ::Editor::Coroutine::CoroutineTaskContext&            context,
        ::Editor::BlockUtils::Task::BlockUtilityChunkedVolume volume,
        ::std::optional<::Block const*>                       optBlock,
        ::BlockSource*                                        expectedBlockSource
    ) /*override*/;

    virtual ::Editor::
        Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
        trimVolumeToFitContents(
            ::Editor::Coroutine::CoroutineTaskContext& context,
            ::std::vector<::BlockPos>                  positions,
            ::BoundingBox                              bounds,
            bool                                       alwaysReturnMarquee,
            bool                                       ignoreLiquid,
            bool                                       ignoreNoCollision,
            ::Editor::BlockMask::BlockMaskList         blockMask
        ) /*override*/;

    virtual ::Editor::
        Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
        shrinkWrapVolume(
            ::Editor::Coroutine::CoroutineTaskContext& context,
            ::std::vector<::BlockPos>                  positions,
            ::BoundingBox                              bounds
        ) /*override*/;

    virtual ::Editor::
        Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
        findObscuredBlocksWithinVolume(
            ::Editor::Coroutine::CoroutineTaskContext& context,
            ::std::vector<::BlockPos>                  positions,
            ::BoundingBox                              bounds
        ) /*override*/;

    virtual ::Editor::Task<
        ::Scripting::Result_deprecated<::Editor::BlockUtils::Task::BlockUtilityManifest>,
        ::Editor::CoroutineStatus>
    generateManifest(
        ::Editor::Coroutine::CoroutineTaskContext&          context,
        ::std::vector<::BlockPos>                           positions,
        ::BoundingBox                                       bounds,
        ::std::function<void(float, uint64)>                progress,
        ::std::optional<::WeakRef<::Editor::ProjectRegion>> existingRegion
    ) /*override*/;

    virtual ::Editor::Task<::Scripting::Result_deprecated<uint>, ::Editor::CoroutineStatus> replaceBlocksInSelection(
        ::Editor::Coroutine::CoroutineTaskContext&            context,
        ::Editor::BlockUtils::Task::BlockUtilityChunkedVolume volume,
        ::std::string                                         fromBlockIdentifier,
        ::Block const*                                        toBlock,
        ::BlockSource*                                        expectedBlockSource
    ) /*override*/;

    virtual ::Editor::
        Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
        createShapeVolume(
            ::Editor::Coroutine::CoroutineTaskContext& context,
            ::std::variant<
                ::Editor::BlockUtils::Task::BlockUtilityShapeVolumeOptionsCuboid,
                ::Editor::BlockUtils::Task::BlockUtilityShapeVolumeOptionsCone,
                ::Editor::BlockUtils::Task::BlockUtilityShapeVolumeOptionsCylinder,
                ::Editor::BlockUtils::Task::BlockUtilityShapeVolumeOptionsEllipsoid,
                ::Editor::BlockUtils::Task::BlockUtilityShapeVolumeOptionsPyramid> options
        ) /*override*/;

    virtual ::Editor::
        Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
        floodSearch(
            ::Editor::Coroutine::CoroutineTaskContext&                 context,
            ::BlockPos                                                 seed,
            ::Editor::BlockUtils::Task::BlockUtilityFloodSearchOptions options,
            ::std::function<void(::std::vector<::BlockPos> const&)>    positionProgress
        ) /*override*/;

    virtual ::Editor::
        Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
        extrude(
            ::Editor::Coroutine::CoroutineTaskContext&             context,
            ::BlockPos                                             seed,
            ::Editor::BlockUtils::Task::BlockUtilityExtrudeOptions options
        ) /*override*/;

    virtual ::Editor::Task<
        ::Scripting::Result_deprecated<::Editor::BlockUtils::Task::BlockUtilityExtrudeResult>,
        ::Editor::CoroutineStatus>
    extrudeResult(
        ::Editor::Coroutine::CoroutineTaskContext&              context,
        ::BlockPos                                              seed,
        ::Editor::BlockUtils::Task::BlockUtilityExtrudeOptions  options,
        ::std::function<void(::std::vector<::BlockPos> const&)> positionProgress
    ) /*override*/;

    virtual ::Editor::Task<
        ::Scripting::Result_deprecated<::Editor::BlockUtils::Task::BlockUtilityFillResult>,
        ::Editor::CoroutineStatus>
    applyExtrudeResult(
        ::Editor::Coroutine::CoroutineTaskContext&            context,
        ::Editor::BlockUtils::Task::BlockUtilityExtrudeResult result,
        ::BlockSource*                                        expectedBlockSource
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BlockSource& _getBlockSource() const;

    MCNAPI ::BoundingBox _getWorldBounds() const;

    MCNAPI ::Scripting::Result_deprecated<void> _validateBoundsWithinWorld(::BoundingBox const& bounds) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& ServiceName();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Editor::Task<
        ::Scripting::Result_deprecated<::Editor::BlockUtils::Task::BlockUtilityFillResult>,
        ::Editor::CoroutineStatus>
    $fillVolume(
        ::Editor::Coroutine::CoroutineTaskContext&            context,
        ::Editor::BlockUtils::Task::BlockUtilityChunkedVolume volume,
        ::std::optional<::Block const*>                       optBlock,
        ::BlockSource*                                        expectedBlockSource
    );

    MCNAPI ::Editor::
        Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
        $trimVolumeToFitContents(
            ::Editor::Coroutine::CoroutineTaskContext& context,
            ::std::vector<::BlockPos>                  positions,
            ::BoundingBox                              bounds,
            bool                                       alwaysReturnMarquee,
            bool                                       ignoreLiquid,
            bool                                       ignoreNoCollision,
            ::Editor::BlockMask::BlockMaskList         blockMask
        );

    MCNAPI ::Editor::
        Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
        $shrinkWrapVolume(
            ::Editor::Coroutine::CoroutineTaskContext& context,
            ::std::vector<::BlockPos>                  positions,
            ::BoundingBox                              bounds
        );

    MCNAPI ::Editor::
        Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
        $findObscuredBlocksWithinVolume(
            ::Editor::Coroutine::CoroutineTaskContext& context,
            ::std::vector<::BlockPos>                  positions,
            ::BoundingBox                              bounds
        );

    MCNAPI ::Editor::Task<
        ::Scripting::Result_deprecated<::Editor::BlockUtils::Task::BlockUtilityManifest>,
        ::Editor::CoroutineStatus>
    $generateManifest(
        ::Editor::Coroutine::CoroutineTaskContext&          context,
        ::std::vector<::BlockPos>                           positions,
        ::BoundingBox                                       bounds,
        ::std::function<void(float, uint64)>                progress,
        ::std::optional<::WeakRef<::Editor::ProjectRegion>> existingRegion
    );

    MCNAPI ::Editor::Task<::Scripting::Result_deprecated<uint>, ::Editor::CoroutineStatus> $replaceBlocksInSelection(
        ::Editor::Coroutine::CoroutineTaskContext&            context,
        ::Editor::BlockUtils::Task::BlockUtilityChunkedVolume volume,
        ::std::string                                         fromBlockIdentifier,
        ::Block const*                                        toBlock,
        ::BlockSource*                                        expectedBlockSource
    );

    MCNAPI ::Editor::
        Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
        $createShapeVolume(
            ::Editor::Coroutine::CoroutineTaskContext& context,
            ::std::variant<
                ::Editor::BlockUtils::Task::BlockUtilityShapeVolumeOptionsCuboid,
                ::Editor::BlockUtils::Task::BlockUtilityShapeVolumeOptionsCone,
                ::Editor::BlockUtils::Task::BlockUtilityShapeVolumeOptionsCylinder,
                ::Editor::BlockUtils::Task::BlockUtilityShapeVolumeOptionsEllipsoid,
                ::Editor::BlockUtils::Task::BlockUtilityShapeVolumeOptionsPyramid> options
        );

    MCNAPI ::Editor::
        Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
        $floodSearch(
            ::Editor::Coroutine::CoroutineTaskContext&                 context,
            ::BlockPos                                                 seed,
            ::Editor::BlockUtils::Task::BlockUtilityFloodSearchOptions options,
            ::std::function<void(::std::vector<::BlockPos> const&)>    positionProgress
        );

    MCNAPI ::Editor::
        Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
        $extrude(
            ::Editor::Coroutine::CoroutineTaskContext&             context,
            ::BlockPos                                             seed,
            ::Editor::BlockUtils::Task::BlockUtilityExtrudeOptions options
        );

    MCNAPI ::Editor::Task<
        ::Scripting::Result_deprecated<::Editor::BlockUtils::Task::BlockUtilityExtrudeResult>,
        ::Editor::CoroutineStatus>
    $extrudeResult(
        ::Editor::Coroutine::CoroutineTaskContext&              context,
        ::BlockPos                                              seed,
        ::Editor::BlockUtils::Task::BlockUtilityExtrudeOptions  options,
        ::std::function<void(::std::vector<::BlockPos> const&)> positionProgress
    );

    MCNAPI ::Editor::Task<
        ::Scripting::Result_deprecated<::Editor::BlockUtils::Task::BlockUtilityFillResult>,
        ::Editor::CoroutineStatus>
    $applyExtrudeResult(
        ::Editor::Coroutine::CoroutineTaskContext&            context,
        ::Editor::BlockUtils::Task::BlockUtilityExtrudeResult result,
        ::BlockSource*                                        expectedBlockSource
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForBlockUtilityTaskServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::BlockUtils::Task
