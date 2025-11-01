#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/serviceproviders/EditorManagerServiceProvider.h"
#include "mc/editor/services/EditorServiceList.h"
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
namespace Editor { class ServiceProviderCollection; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Editor {

class EditorManager : public ::Editor::IEditorManager, public ::Editor::Services::EditorServiceList, public ::Editor::EditorManagerServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka0ac2a;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorManager& operator=(EditorManager const&);
    EditorManager(EditorManager const&);
    EditorManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorManager() /*override*/;

    // vIndex: 4
    virtual ::std::unique_ptr<::FileArchiver::IWorldConverter> createWorldConverter(::ILevelListCache&, ::Scheduler&, ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const&, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>) /*override*/;

    // vIndex: 5
    virtual void cleanupOrphanedTemporaryPlaytestWorlds(::ILevelListCache& levelListCache) const /*override*/;

    // vIndex: 6
    virtual void cleanupOrphanedTemporaryRealmsUploadWorlds() /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<void> scriptingTeardown() /*override*/;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<void> scriptingRebuild(::Scripting::ContextId contextId, bool finalEvent) /*override*/;

    // vIndex: 9
    virtual void tryClearPlaytestRoundtripInfo() /*override*/;

    // vIndex: 1
    virtual ::Editor::ServiceProviderCollection& getServiceProviders() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorManager(bool isClient, ::PacketSender& packetSender, ::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool isClient, ::PacketSender& packetSender, ::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::FileArchiver::IWorldConverter> $createWorldConverter(::ILevelListCache&, ::Scheduler&, ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const&, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>);

    MCNAPI void $cleanupOrphanedTemporaryPlaytestWorlds(::ILevelListCache& levelListCache) const;

    MCNAPI void $cleanupOrphanedTemporaryRealmsUploadWorlds();

    MCNAPI ::Scripting::Result_deprecated<void> $scriptingTeardown();

    MCNAPI ::Scripting::Result_deprecated<void> $scriptingRebuild(::Scripting::ContextId contextId, bool finalEvent);

    MCNAPI void $tryClearPlaytestRoundtripInfo();

    MCNAPI ::Editor::ServiceProviderCollection& $getServiceProviders();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorManagerServiceProvider();

    MCNAPI static void** $vftableForEditorServiceList();

    MCNAPI static void** $vftableForIEditorManager();
    // NOLINTEND

};

}
