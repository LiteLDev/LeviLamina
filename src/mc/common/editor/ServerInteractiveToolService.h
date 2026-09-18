#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/InteractiveToolError.h"
#include "mc/common/editor/ServerInteractiveToolServiceProvider.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/block_utils/BlockUtilityFloodMatchCriteria.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::BlockUtils::Task { struct BlockUtilityExtrudeResult; }
// clang-format on

namespace Editor::Services {

class ServerInteractiveToolService : public ::Editor::Services::IEditorService,
                                     public ::Editor::Services::ServerInteractiveToolServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk99eecf;
    ::ll::UntypedStorage<8, 8>  mUnk5c9fb4;
    ::ll::UntypedStorage<8, 8>  mUnk834248;
    ::ll::UntypedStorage<8, 40> mUnk19b8e5;
    ::ll::UntypedStorage<8, 40> mUnkab420c;
    ::ll::UntypedStorage<8, 80> mUnk33296e;
    ::ll::UntypedStorage<8, 80> mUnk305bc0;
    ::ll::UntypedStorage<8, 56> mUnk51d428;
    ::ll::UntypedStorage<8, 8>  mUnk9ea585;
    ::ll::UntypedStorage<8, 8>  mUnk76f393;
    ::ll::UntypedStorage<8, 8>  mUnkf9e63b;
    ::ll::UntypedStorage<1, 1>  mUnk3b6c68;
    ::ll::UntypedStorage<1, 1>  mUnk3f497e;
    ::ll::UntypedStorage<1, 1>  mUnk4dda66;
    ::ll::UntypedStorage<1, 1>  mUnk74e874;
    ::ll::UntypedStorage<8, 8>  mUnkf47248;
    ::ll::UntypedStorage<8, 64> mUnkb7bb65;
    ::ll::UntypedStorage<8, 64> mUnk41a0bc;
    ::ll::UntypedStorage<8, 16> mUnkaf324c;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInteractiveToolService& operator=(ServerInteractiveToolService const&);
    ServerInteractiveToolService(ServerInteractiveToolService const&);
    ServerInteractiveToolService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerInteractiveToolService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual void supportsSmartFill(::std::function<void(::Scripting::Result_deprecated<bool>)> callback) /*override*/;

    virtual void activateSmartFill(
        int                                                         radius,
        bool                                                        limitToSelection,
        bool                                                        onlyFillExposedSurface,
        ::std::function<void(::Scripting::Result_deprecated<void>)> callback
    ) /*override*/;

    virtual void updateSmartFill(
        int                                                         radius,
        bool                                                        limitToSelection,
        bool                                                        onlyFillExposedSurface,
        ::std::function<void(::Scripting::Result_deprecated<void>)> callback
    ) /*override*/;

    virtual void commitSmartFill(
        ::BlockPos                                                                                     target,
        uchar                                                                                          face,
        ::std::function<void(::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>)> callback
    ) /*override*/;

    virtual void supportsExtrude(::std::function<void(::Scripting::Result_deprecated<bool>)> callback) /*override*/;

    virtual void activateExtrude(
        int                                                         faceSize,
        int                                                         layerCount,
        bool                                                        isShrink,
        ::Editor::BlockUtils::Task::BlockUtilityFloodMatchCriteria  criteria,
        ::std::vector<::std::string>                                customBlockList,
        int                                                         tolerance,
        ::std::function<void(::Scripting::Result_deprecated<void>)> callback
    ) /*override*/;

    virtual void updateExtrude(
        int                                                         faceSize,
        int                                                         layerCount,
        bool                                                        isShrink,
        ::Editor::BlockUtils::Task::BlockUtilityFloodMatchCriteria  criteria,
        ::std::vector<::std::string>                                customBlockList,
        int                                                         tolerance,
        ::std::function<void(::Scripting::Result_deprecated<void>)> callback
    ) /*override*/;

    virtual void commitExtrude(
        ::BlockPos target,
        uchar      face,
        ::std::function<void(::Scripting::Result_deprecated<::Editor::BlockUtils::Task::BlockUtilityExtrudeResult>)>
            callback
    ) /*override*/;

    virtual void resume(::std::function<void(::Scripting::Result_deprecated<void>)> callback) /*override*/;

    virtual void deactivate(::std::function<void(::Scripting::Result_deprecated<void>)> callback) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerInteractiveToolService(::Editor::ServiceProviderCollection& providers);

    MCNAPI void _cancelCommitTask(::Editor::InteractiveTools::InteractiveToolError reason);

    MCNAPI void _teardown();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& SERVICE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI void $supportsSmartFill(::std::function<void(::Scripting::Result_deprecated<bool>)> callback);

    MCNAPI void $activateSmartFill(
        int                                                         radius,
        bool                                                        limitToSelection,
        bool                                                        onlyFillExposedSurface,
        ::std::function<void(::Scripting::Result_deprecated<void>)> callback
    );

    MCNAPI void $updateSmartFill(
        int                                                         radius,
        bool                                                        limitToSelection,
        bool                                                        onlyFillExposedSurface,
        ::std::function<void(::Scripting::Result_deprecated<void>)> callback
    );

    MCNAPI void $commitSmartFill(
        ::BlockPos                                                                                     target,
        uchar                                                                                          face,
        ::std::function<void(::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume>)> callback
    );

    MCNAPI void $supportsExtrude(::std::function<void(::Scripting::Result_deprecated<bool>)> callback);

    MCNAPI void $activateExtrude(
        int                                                         faceSize,
        int                                                         layerCount,
        bool                                                        isShrink,
        ::Editor::BlockUtils::Task::BlockUtilityFloodMatchCriteria  criteria,
        ::std::vector<::std::string>                                customBlockList,
        int                                                         tolerance,
        ::std::function<void(::Scripting::Result_deprecated<void>)> callback
    );

    MCNAPI void $updateExtrude(
        int                                                         faceSize,
        int                                                         layerCount,
        bool                                                        isShrink,
        ::Editor::BlockUtils::Task::BlockUtilityFloodMatchCriteria  criteria,
        ::std::vector<::std::string>                                customBlockList,
        int                                                         tolerance,
        ::std::function<void(::Scripting::Result_deprecated<void>)> callback
    );

    MCNAPI void $commitExtrude(
        ::BlockPos target,
        uchar      face,
        ::std::function<void(::Scripting::Result_deprecated<::Editor::BlockUtils::Task::BlockUtilityExtrudeResult>)>
            callback
    );

    MCNAPI void $resume(::std::function<void(::Scripting::Result_deprecated<void>)> callback);

    MCNAPI void $deactivate(::std::function<void(::Scripting::Result_deprecated<void>)> callback);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForServerInteractiveToolServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
