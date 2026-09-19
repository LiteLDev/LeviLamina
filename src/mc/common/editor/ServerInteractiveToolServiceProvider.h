#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/block_utils/BlockUtilityFloodMatchCriteria.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor::BlockUtils::Task { struct BlockUtilityExtrudeResult; }
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

    virtual void resume(::std::function<void(::Scripting::Result_deprecated<void>)> callback) = 0;

    virtual void deactivate(::std::function<void(::Scripting::Result_deprecated<void>)> callback) = 0;
    // NOLINTEND
};

} // namespace Editor::Services
