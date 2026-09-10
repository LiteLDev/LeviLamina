#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/Task.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BoundingBox;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor { struct CoroutineStatus; }
namespace Editor::BlockMask { class BlockMaskList; }
namespace Editor::BlockUtils::Task { struct BlockUtilityFillOptions; }
namespace Editor::BlockUtils::Task { struct BlockUtilityFillResult; }
namespace Editor::BlockUtils::Task { struct BlockUtilityFindObscuredOptions; }
namespace Editor::BlockUtils::Task { struct BlockUtilityManifest; }
namespace Editor::BlockUtils::Task { struct BlockUtilityManifestOptions; }
namespace Editor::BlockUtils::Task { struct BlockUtilityReplaceOptions; }
namespace Editor::BlockUtils::Task { struct BlockUtilityShrinkWrapOptions; }
namespace Editor::BlockUtils::Task { struct BlockUtilityTrimOptions; }
// clang-format on

namespace Editor::BlockUtils::Task {

class BlockUtilityTaskServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockUtilityTaskServiceProvider() = default;

    virtual ::Editor::Task<
        ::Scripting::Result_deprecated<::Editor::BlockUtils::Task::BlockUtilityFillResult>,
        ::Editor::CoroutineStatus>
    fillVolume(
        ::std::vector<::BlockPos>                           positions,
        ::BoundingBox                                       bounds,
        ::std::optional<::Block const*>                     optBlock,
        ::Editor::BlockUtils::Task::BlockUtilityFillOptions options
    ) = 0;

    virtual ::Editor::
        Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
        trimVolumeToFitContents(
            ::std::vector<::BlockPos>                           positions,
            ::BoundingBox                                       bounds,
            bool                                                alwaysReturnMarquee,
            bool                                                ignoreLiquid,
            bool                                                ignoreNoCollision,
            ::Editor::BlockMask::BlockMaskList                  blockMask,
            ::Editor::BlockUtils::Task::BlockUtilityTrimOptions options
        ) = 0;

    virtual ::Editor::
        Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
        shrinkWrapVolume(
            ::std::vector<::BlockPos>                                 positions,
            ::BoundingBox                                             bounds,
            ::Editor::BlockUtils::Task::BlockUtilityShrinkWrapOptions options
        ) = 0;

    virtual ::Editor::
        Task<::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>, ::Editor::CoroutineStatus>
        findObscuredBlocksWithinVolume(
            ::std::vector<::BlockPos>                                   positions,
            ::BoundingBox                                               bounds,
            ::Editor::BlockUtils::Task::BlockUtilityFindObscuredOptions options
        ) = 0;

    virtual ::Editor::Task<
        ::Scripting::Result_deprecated<::Editor::BlockUtils::Task::BlockUtilityManifest>,
        ::Editor::CoroutineStatus>
    generateManifest(
        ::std::vector<::BlockPos>                               positions,
        ::BoundingBox                                           bounds,
        ::Editor::BlockUtils::Task::BlockUtilityManifestOptions options
    ) = 0;

    virtual ::Editor::Task<::Scripting::Result_deprecated<uint>, ::Editor::CoroutineStatus> replaceBlocksInSelection(
        ::std::vector<::BlockPos>                              positions,
        ::BoundingBox                                          bounds,
        ::std::string                                          fromBlockIdentifier,
        ::Block const*                                         toBlock,
        ::Editor::BlockUtils::Task::BlockUtilityReplaceOptions options
    ) = 0;
    // NOLINTEND
};

} // namespace Editor::BlockUtils::Task
