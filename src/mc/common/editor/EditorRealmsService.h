#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorRealmsServiceProvider.h"
#include "mc/common/editor/RealmsServiceStatus.h"
#include "mc/common/editor/RealmsWorldUploadResult.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class GameOptions; }
namespace Editor::Network { class EditorRealmsStatusPayload; }
namespace Editor::Services { struct EditorRealmsWorld; }
namespace Editor::Services { struct EditorRealmsWorldSlot; }
// clang-format on

namespace Editor::Services {

class EditorRealmsService : public ::Editor::Services::IEditorService,
                            public ::Editor::Services::PayloadStoreHelper,
                            public ::Editor::Services::EditorRealmsServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfece8a;
    ::ll::UntypedStorage<8, 24> mUnkd35a23;
    ::ll::UntypedStorage<4, 4>  mUnk671b06;
    ::ll::UntypedStorage<1, 1>  mUnk3b2eef;
    ::ll::UntypedStorage<8, 16> mUnk82d02c;
    ::ll::UntypedStorage<8, 48> mUnka82a4e;
    ::ll::UntypedStorage<8, 48> mUnkde2986;
    ::ll::UntypedStorage<8, 48> mUnke7e923;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorRealmsService& operator=(EditorRealmsService const&);
    EditorRealmsService(EditorRealmsService const&);
    EditorRealmsService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorRealmsService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 10
    virtual ::Bedrock::PubSub::Subscription listenForRealmsWorldListLoaded(
        ::std::function<void(::std::vector<::Editor::Services::EditorRealmsWorld>)> callback
    ) /*override*/;

    // vIndex: 11
    virtual ::Bedrock::PubSub::Subscription listenForRealmsWorldSlotsLoaded(
        ::std::function<void(::std::vector<::Editor::Services::EditorRealmsWorldSlot>)> callback
    ) /*override*/;

    // vIndex: 12
    virtual ::Bedrock::PubSub::Subscription
    listenForRealmsWorldDownload(::std::function<void(bool)> callback) /*override*/;

    // vIndex: 1
    virtual ::std::vector<::Editor::Services::EditorRealmsWorld> const getRealmWorldlist() const /*override*/;

    // vIndex: 2
    virtual ::std::vector<::Editor::Services::EditorRealmsWorldSlot> const getSlots() const /*override*/;

    // vIndex: 3
    virtual ::Editor::Services::RealmsServiceStatus const getServiceStatus() const /*override*/;

    // vIndex: 13
    virtual void beginUploadToRealms(
        ::std::string,
        int,
        ::WeakEntityRef,
        ::Editor::GameOptions const&,
        ::std::function<void(::Editor::Services::RealmsWorldUploadResult const&)>
    ) /*override*/;

    // vIndex: 7
    virtual void beginLoadRealmWorldList(::WeakEntityRef playerRef) /*override*/;

    // vIndex: 8
    virtual void beginLoadRealmSlots(::std::string const&, ::WeakEntityRef) /*override*/;

    // vIndex: 9
    virtual void beginDownloadWorld(::std::string const&, int, ::WeakEntityRef) /*override*/;

    // vIndex: 4
    virtual void loadRealmsWorldList() /*override*/;

    // vIndex: 5
    virtual void loadRealmsWorldSlots(::std::string const&) /*override*/;

    // vIndex: 6
    virtual void downloadRealmWorld(::std::string const&, int const) /*override*/;

    // vIndex: 14
    virtual bool const canUploadWorld() const /*override*/;

    // vIndex: 15
    virtual bool const isRealmsServiceAvailable() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handleServiceStatusPayload(::Editor::Network::EditorRealmsStatusPayload const& payload);

    MCNAPI void sendServiceStatusPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void> $init();

    MCNAPI ::Scripting::Result<void> $quit();

    MCNAPI ::Scripting::Result<void> $ready();

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

    MCNAPI bool const $isRealmsServiceAvailable() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorRealmsServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
