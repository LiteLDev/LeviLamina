#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorRealmsServiceAvailability.h"
#include "mc/common/editor/RealmsServiceStatus.h"
#include "mc/common/editor/RealmsWorldUploadResult.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/serviceproviders/EditorRealmsServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class GameOptions; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class EditorRealmsStatusPayload; }
namespace Editor::Services { struct EditorRealmsWorld; }
namespace Editor::Services { struct EditorRealmsWorldSlot; }
// clang-format on

namespace Editor::Services {

class EditorRealmsService : public ::Editor::Services::IEditorService,
                            public ::Editor::Services::EditorRealmsServiceProvider,
                            public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfece8a;
    ::ll::UntypedStorage<8, 24> mUnkd35a23;
    ::ll::UntypedStorage<4, 4>  mUnk671b06;
    ::ll::UntypedStorage<4, 4>  mUnk529e3a;
    ::ll::UntypedStorage<8, 16> mUnk82d02c;
    ::ll::UntypedStorage<8, 48> mUnk12beb6;
    ::ll::UntypedStorage<8, 48> mUnkf6dc65;
    ::ll::UntypedStorage<8, 48> mUnkf4e06e;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorRealmsService& operator=(EditorRealmsService const&);
    EditorRealmsService(EditorRealmsService const&);
    EditorRealmsService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorRealmsService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Bedrock::PubSub::Subscription listenForRealmsWorldListLoaded(
        ::std::function<void(::std::vector<::Editor::Services::EditorRealmsWorld>)> callback
    ) /*override*/;

    virtual ::Bedrock::PubSub::Subscription listenForRealmsWorldSlotsLoaded(
        ::std::function<void(::std::vector<::Editor::Services::EditorRealmsWorldSlot>)> callback
    ) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    listenForRealmsWorldDownload(::std::function<void(bool)> callback) /*override*/;

    virtual ::std::vector<::Editor::Services::EditorRealmsWorld> const getRealmWorldlist() const /*override*/;

    virtual ::std::vector<::Editor::Services::EditorRealmsWorldSlot> const getSlots() const /*override*/;

    virtual ::Editor::Services::RealmsServiceStatus const getServiceStatus() const /*override*/;

    virtual void beginUploadToRealms(
        ::std::string,
        int,
        ::WeakEntityRef,
        ::Editor::GameOptions const&,
        ::std::function<void(::Editor::Services::RealmsWorldUploadResult const&)>
    ) /*override*/;

    virtual void beginLoadRealmWorldList(::WeakEntityRef playerRef) /*override*/;

    virtual void beginLoadRealmSlots(::std::string const&, ::WeakEntityRef) /*override*/;

    virtual void beginDownloadWorld(::std::string const&, int, ::WeakEntityRef) /*override*/;

    virtual void loadRealmsWorldList() /*override*/;

    virtual void loadRealmsWorldSlots(::std::string const&) /*override*/;

    virtual void downloadRealmWorld(::std::string const&, int const) /*override*/;

    virtual bool const canUploadWorld() const /*override*/;

    virtual ::Editor::Services::EditorRealmsServiceAvailability const isRealmsServiceAvailable() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit EditorRealmsService(::Editor::ServiceProviderCollection& providers);

    MCNAPI void _handleServiceStatusPayload(::Editor::Network::EditorRealmsStatusPayload const& payload);

    MCNAPI void sendServiceStatusPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Bedrock::PubSub::Subscription $listenForRealmsWorldListLoaded(
        ::std::function<void(::std::vector<::Editor::Services::EditorRealmsWorld>)> callback
    );

    MCNAPI ::Bedrock::PubSub::Subscription $listenForRealmsWorldSlotsLoaded(
        ::std::function<void(::std::vector<::Editor::Services::EditorRealmsWorldSlot>)> callback
    );

    MCNAPI ::Bedrock::PubSub::Subscription $listenForRealmsWorldDownload(::std::function<void(bool)> callback);

    MCNAPI ::std::vector<::Editor::Services::EditorRealmsWorld> const $getRealmWorldlist() const;

    MCNAPI ::std::vector<::Editor::Services::EditorRealmsWorldSlot> const $getSlots() const;

    MCNAPI ::Editor::Services::RealmsServiceStatus const $getServiceStatus() const;

    MCNAPI void $beginUploadToRealms(
        ::std::string,
        int,
        ::WeakEntityRef,
        ::Editor::GameOptions const&,
        ::std::function<void(::Editor::Services::RealmsWorldUploadResult const&)>
    );

    MCNAPI void $beginLoadRealmWorldList(::WeakEntityRef playerRef);

    MCNAPI void $beginLoadRealmSlots(::std::string const&, ::WeakEntityRef);

    MCNAPI void $beginDownloadWorld(::std::string const&, int, ::WeakEntityRef);

    MCNAPI void $loadRealmsWorldList();

    MCNAPI void $loadRealmsWorldSlots(::std::string const&);

    MCNAPI void $downloadRealmWorld(::std::string const&, int const);

    MCNAPI bool const $canUploadWorld() const;

    MCNAPI ::Editor::Services::EditorRealmsServiceAvailability const $isRealmsServiceAvailable() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorRealmsServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
