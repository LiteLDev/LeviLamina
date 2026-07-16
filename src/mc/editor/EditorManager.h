#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/serviceproviders/EditorManagerServiceProvider.h"
#include "mc/editor/services/EditorServiceList.h"
#include "mc/network/EditorConnectionJoinIntent.h"
#include "mc/server/editor/IEditorManager.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class ILevelListCache;
class IMinecraftEventing;
class IResourcePackRepository;
class PacketSender;
class Scheduler;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct EditorInitParams; }
// clang-format on

namespace Editor {

class EditorManager : public ::Editor::IEditorManager,
                      public ::Editor::Services::EditorServiceList,
                      public ::Editor::EditorManagerServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka0ac2a;
    ::ll::UntypedStorage<8, 8>  mUnkb39dbf;
    ::ll::UntypedStorage<8, 48> mUnkdce6e6;
    ::ll::UntypedStorage<8, 48> mUnk64e7d8;
    ::ll::UntypedStorage<1, 1>  mUnkc4bfc9;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorManager& operator=(EditorManager const&);
    EditorManager(EditorManager const&);
    EditorManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorManager() /*override*/;

    virtual ::std::unique_ptr<::FileArchiver::IWorldConverter> createWorldConverter(
        ::ILevelListCache&,
        ::Scheduler&,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const&,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>
    ) /*override*/;

    virtual void cleanupOrphanedTemporaryPlaytestWorlds(::ILevelListCache& levelListCache) const /*override*/;

    virtual void cleanupOrphanedTemporaryRealmsUploadWorlds() /*override*/;

    virtual ::Scripting::Result_deprecated<void> scriptingTeardown() /*override*/;

    virtual ::Scripting::Result_deprecated<void> scriptingRebuild() /*override*/;

    virtual void tryClearPlaytestRoundtripInfo() /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    registerLevelInitializeSubscriber(::std::function<void(bool, ::Editor::EditorManager&)> func) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    registerLevelTickSubscriber(::std::function<void(::Editor::EditorManager&)> func) /*override*/;

    virtual bool isEditorModeEnabled() const /*override*/;

    virtual ::Editor::ServiceProviderCollection& getServiceProviders() /*override*/;

    virtual ::EditorConnectionJoinIntent getEditorConnectionJoinIntent() const /*override*/;

    virtual void setEditorConnectionJoinIntent(::EditorConnectionJoinIntent) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorManager(
        bool                                         isClient,
        bool                                         isEditorModeEnabled,
        ::PacketSender&                              packetSender,
        ::IMinecraftEventing&                        eventing,
        ::gsl::not_null<::Editor::EditorInitParams*> params
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        bool                                         isClient,
        bool                                         isEditorModeEnabled,
        ::PacketSender&                              packetSender,
        ::IMinecraftEventing&                        eventing,
        ::gsl::not_null<::Editor::EditorInitParams*> params
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::FileArchiver::IWorldConverter> $createWorldConverter(
        ::ILevelListCache&,
        ::Scheduler&,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const&,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>
    );

    MCNAPI void $cleanupOrphanedTemporaryPlaytestWorlds(::ILevelListCache& levelListCache) const;

    MCNAPI void $cleanupOrphanedTemporaryRealmsUploadWorlds();

    MCNAPI ::Scripting::Result_deprecated<void> $scriptingTeardown();

    MCNAPI ::Scripting::Result_deprecated<void> $scriptingRebuild();

    MCNAPI void $tryClearPlaytestRoundtripInfo();

    MCNAPI ::Bedrock::PubSub::Subscription
    $registerLevelInitializeSubscriber(::std::function<void(bool, ::Editor::EditorManager&)> func);

    MCNAPI ::Bedrock::PubSub::Subscription
    $registerLevelTickSubscriber(::std::function<void(::Editor::EditorManager&)> func);

    MCNAPI bool $isEditorModeEnabled() const;

    MCNAPI ::Editor::ServiceProviderCollection& $getServiceProviders();

    MCNAPI ::EditorConnectionJoinIntent $getEditorConnectionJoinIntent() const;

    MCNAPI void $setEditorConnectionJoinIntent(::EditorConnectionJoinIntent);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorManagerServiceProvider();

    MCNAPI static void** $vftableForEditorServiceList();

    MCNAPI static void** $vftableForIEditorManager();
    // NOLINTEND
};

} // namespace Editor
