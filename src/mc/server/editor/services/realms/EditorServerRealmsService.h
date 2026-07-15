#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/RealmsWorldUploadResult.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/realms/EditorRealmsService.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Editor { class GameOptions; }
// clang-format on

namespace Editor::Services {

class EditorServerRealmsService : public ::Editor::Services::EditorRealmsService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk41e743;
    ::ll::UntypedStorage<8, 64> mUnkec3b81;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorServerRealmsService& operator=(EditorServerRealmsService const&);
    EditorServerRealmsService(EditorServerRealmsService const&);
    EditorServerRealmsService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorServerRealmsService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual void beginLoadRealmWorldList(::WeakEntityRef playerRef) /*override*/;

    virtual void beginLoadRealmSlots(::std::string const& worldId, ::WeakEntityRef playerRef) /*override*/;

    virtual void beginUploadToRealms(
        ::std::string                                                             realmsWorldId,
        int                                                                       slotId,
        ::WeakEntityRef                                                           playerRef,
        ::Editor::GameOptions const&                                              gameOptions,
        ::std::function<void(::Editor::Services::RealmsWorldUploadResult const&)> callback
    ) /*override*/;

    virtual void beginDownloadWorld(::std::string const& worldId, int slotId, ::WeakEntityRef playerRef) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI void $beginLoadRealmWorldList(::WeakEntityRef playerRef);

    MCNAPI void $beginLoadRealmSlots(::std::string const& worldId, ::WeakEntityRef playerRef);

    MCNAPI void $beginUploadToRealms(
        ::std::string                                                             realmsWorldId,
        int                                                                       slotId,
        ::WeakEntityRef                                                           playerRef,
        ::Editor::GameOptions const&                                              gameOptions,
        ::std::function<void(::Editor::Services::RealmsWorldUploadResult const&)> callback
    );

    MCNAPI void $beginDownloadWorld(::std::string const& worldId, int slotId, ::WeakEntityRef playerRef);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForEditorRealmsServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
