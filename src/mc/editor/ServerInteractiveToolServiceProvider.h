#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/FloodLiquidType.h"
#include "mc/editor/block_utils/BlockUtilityFloodMatchCriteria.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor::BlockUtils::FloodLevel { struct FloodSearchOptions; }
namespace Editor::BlockUtils::Task { struct BlockUtilityExtrudeResult; }
namespace Editor::InteractiveTools { struct FloodCommitResult; }
// clang-format on

namespace Editor::Services {

class ServerInteractiveToolServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerInteractiveToolServiceProvider() = default;

    virtual void supportsSmartFill(::std::function<void(::Scripting::Result_deprecated<bool>)> callback) = 0;

    virtual void activateSmartFill(
        int                                                         radius,
        bool                                                        limitToSelection,
        bool                                                        onlyFillExposedSurface,
        ::std::function<void(::Scripting::Result_deprecated<void>)> callback
    ) = 0;

    virtual void updateSmartFill(
        int                                                         radius,
        bool                                                        limitToSelection,
        bool                                                        onlyFillExposedSurface,
        ::std::function<void(::Scripting::Result_deprecated<void>)> callback
    ) = 0;

    virtual void commitSmartFill(
        ::BlockPos                                                                                     target,
        uchar                                                                                          face,
        ::std::function<void(::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>)> callback
    ) = 0;

    virtual void supportsExtrude(::std::function<void(::Scripting::Result_deprecated<bool>)> callback) = 0;

    virtual void activateExtrude(
        int                                                         faceSize,
        int                                                         layerCount,
        bool                                                        isShrink,
        ::Editor::BlockUtils::Task::BlockUtilityFloodMatchCriteria  criteria,
        ::std::vector<::std::string>                                customBlockList,
        int                                                         tolerance,
        ::std::function<void(::Scripting::Result_deprecated<void>)> callback
    ) = 0;

    virtual void updateExtrude(
        int                                                         faceSize,
        int                                                         layerCount,
        bool                                                        isShrink,
        ::Editor::BlockUtils::Task::BlockUtilityFloodMatchCriteria  criteria,
        ::std::vector<::std::string>                                customBlockList,
        int                                                         tolerance,
        ::std::function<void(::Scripting::Result_deprecated<void>)> callback
    ) = 0;

    virtual void commitExtrude(
        ::BlockPos target,
        uchar      face,
        ::std::function<void(::Scripting::Result_deprecated<::Editor::BlockUtils::Task::BlockUtilityExtrudeResult>)>
            callback
    ) = 0;

    virtual void supportsFlood(::std::function<void(::Scripting::Result_deprecated<bool>)> callback) = 0;

    virtual void activateFlood(
        ::BlockPos                                                  targetLocation,
        int                                                         currentLevel,
        ::Editor::InteractiveTools::FloodLiquidType                 liquid,
        bool                                                        allowTruncated,
        ::Editor::BlockUtils::FloodLevel::FloodSearchOptions        searchOptions,
        ::std::function<void(::Scripting::Result_deprecated<void>)> callback
    ) = 0;

    virtual void updateFlood(
        ::BlockPos                                                  targetLocation,
        int                                                         currentLevel,
        ::Editor::InteractiveTools::FloodLiquidType                 liquid,
        bool                                                        allowTruncated,
        ::Editor::BlockUtils::FloodLevel::FloodSearchOptions        searchOptions,
        ::std::function<void(::Scripting::Result_deprecated<void>)> callback
    ) = 0;

    virtual void commitFlood(
        ::BlockPos                                                                                           target,
        ::std::function<void(::Scripting::Result_deprecated<::Editor::InteractiveTools::FloodCommitResult>)> callback
    ) = 0;

    virtual void resume(::std::function<void(::Scripting::Result_deprecated<void>)> callback) = 0;

    virtual void deactivate(::std::function<void(::Scripting::Result_deprecated<void>)> callback) = 0;
    // NOLINTEND
};

} // namespace Editor::Services
