#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorRealmsService.h"
#include "mc/common/editor/RealmsWorldUploadResult.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Editor { class GameOptions; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class EditorIsRealmsServiceAvailablePayload; }
namespace Editor::Network { class RealmWorldDownloadResponsePayload; }
namespace Editor::Network { class RealmWorldListDownloadPayload; }
namespace Editor::Network { class RealmWorldSlotsDownloadPayload; }
namespace Editor::Network { class RealmWorldUploadResponsePayload; }
// clang-format on

namespace Editor::Services {

class EditorServerRealmsService : public ::Editor::Services::EditorRealmsService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk41e743;
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
    // vIndex: 0
    virtual ~EditorServerRealmsService() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 7
    virtual void beginLoadRealmWorldList(::WeakEntityRef playerRef) /*override*/;

    // vIndex: 8
    virtual void beginLoadRealmSlots(::std::string const& worldId, ::WeakEntityRef playerRef) /*override*/;

    // vIndex: 13
    virtual void beginUploadToRealms(::std::string realmsWorldId, int slotId, ::WeakEntityRef playerRef, ::Editor::GameOptions const& gameOptions, ::std::function<void(::Editor::Services::RealmsWorldUploadResult const&)> callback) /*override*/;

    // vIndex: 9
    virtual void beginDownloadWorld(::std::string const& worldId, int slotId, ::WeakEntityRef playerRef) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorServerRealmsService(::Editor::ServiceProviderCollection& providers);

    MCNAPI void _handleIsRealmsServiceAvailablePayload(::Editor::Network::EditorIsRealmsServiceAvailablePayload const& payload);

    MCNAPI void _handleRealmWorldDownloadResponse(::Editor::Network::RealmWorldDownloadResponsePayload const& payload);

    MCNAPI void _handleRealmWorldListDownloadPayload(::Editor::Network::RealmWorldListDownloadPayload const& payload);

    MCNAPI void _handleRealmWorldSlotsDownloadPayload(::Editor::Network::RealmWorldSlotsDownloadPayload const& payload);

    MCNAPI void _handleRealmWorldUploadResponse(::Editor::Network::RealmWorldUploadResponsePayload const& payload);
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

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI void $beginLoadRealmWorldList(::WeakEntityRef playerRef);

    MCNAPI void $beginLoadRealmSlots(::std::string const& worldId, ::WeakEntityRef playerRef);

    MCNAPI void $beginUploadToRealms(::std::string realmsWorldId, int slotId, ::WeakEntityRef playerRef, ::Editor::GameOptions const& gameOptions, ::std::function<void(::Editor::Services::RealmsWorldUploadResult const&)> callback);

    MCNAPI void $beginDownloadWorld(::std::string const& worldId, int slotId, ::WeakEntityRef playerRef);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForEditorRealmsServiceProvider();
    // NOLINTEND

};

}
