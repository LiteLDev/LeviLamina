#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"
#include "mc/server/editor/serviceproviders/ServerPrefabPlayerServiceProvider.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Prefabs { class PrefabDBPrefabInstance; }
namespace Editor::Prefabs { struct PrefabDBInstanceInteractionEvent; }
// clang-format on

namespace Editor::Services {

class ServerPrefabPlayerService : public ::Editor::Services::IEditorService,
                                  public ::Editor::Prefabs::ServerPrefabPlayerServiceProvider,
                                  public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd20dca;
    ::ll::UntypedStorage<4, 4>  mUnk281e56;
    ::ll::UntypedStorage<4, 12> mUnke74db6;
    ::ll::UntypedStorage<4, 4>  mUnk19f0ef;
    ::ll::UntypedStorage<1, 1>  mUnk67704d;
    ::ll::UntypedStorage<8, 64> mUnkc4c47a;
    ::ll::UntypedStorage<8, 16> mUnk14247b;
    ::ll::UntypedStorage<8, 16> mUnk80c2d0;
    ::ll::UntypedStorage<8, 16> mUnkfb35e9;
    ::ll::UntypedStorage<8, 48> mUnk2fb2ca;
    ::ll::UntypedStorage<8, 24> mUnk5c8e0f;
    ::ll::UntypedStorage<8, 24> mUnk51fb9f;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPrefabPlayerService& operator=(ServerPrefabPlayerService const&);
    ServerPrefabPlayerService(ServerPrefabPlayerService const&);
    ServerPrefabPlayerService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerPrefabPlayerService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual void shouldCaptureMouseClicks(bool const active) /*override*/;

    virtual ::Bedrock::PubSub::Subscription subscribeToPlayerInstanceInteractions(
        ::std::function<void(::Editor::Prefabs::PrefabDBInstanceInteractionEvent const&)> callback
    ) /*override*/;

    virtual void
    selectInstance(::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> instanceRef, bool append) /*override*/;

    virtual void deselectInstance(::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> instanceRef) /*override*/;

    virtual void clearSelectedInstances() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerPrefabPlayerService(::Editor::ServiceProviderCollection& providers);
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

    MCNAPI void $shouldCaptureMouseClicks(bool const active);

    MCNAPI ::Bedrock::PubSub::Subscription $subscribeToPlayerInstanceInteractions(
        ::std::function<void(::Editor::Prefabs::PrefabDBInstanceInteractionEvent const&)> callback
    );

    MCNAPI void $selectInstance(::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> instanceRef, bool append);

    MCNAPI void $deselectInstance(::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> instanceRef);

    MCNAPI void $clearSelectedInstances();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForServerPrefabPlayerServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
