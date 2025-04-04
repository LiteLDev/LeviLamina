#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/runtime/Result.h"
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

class EditorManager : public ::Editor::IEditorManager,
                      public ::Editor::Services::EditorServiceList,
                      public ::Editor::EditorManagerServiceProvider {
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
    virtual ::std::unique_ptr<::FileArchiver::IWorldConverter>
    createWorldConverter(::ILevelListCache&, ::Scheduler&, ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const&, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>) /*override*/
        ;

    // vIndex: 5
    virtual void cleanupOrphanedTemporaryPlaytestWorlds(::ILevelListCache& levelListCache) const /*override*/;

    // vIndex: 6
    virtual ::Scripting::Result<void> scriptingTeardown() /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result<void> scriptingRebuild(::Scripting::ContextId contextId, bool finalEvent) /*override*/;

    // vIndex: 8
    virtual void tryClearPlaytestRoundtripInfo() /*override*/;

    // vIndex: 1
    virtual ::Editor::ServiceProviderCollection& getServiceProviders() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EditorManager(bool packetSender, ::PacketSender& eventing, ::IMinecraftEventing& isClient);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool packetSender, ::PacketSender& eventing, ::IMinecraftEventing& isClient);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::FileArchiver::IWorldConverter>
    $createWorldConverter(::ILevelListCache&, ::Scheduler&, ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const&, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>);

    MCAPI void $cleanupOrphanedTemporaryPlaytestWorlds(::ILevelListCache& levelListCache) const;

    MCFOLD ::Scripting::Result<void> $scriptingTeardown();

    MCFOLD ::Scripting::Result<void> $scriptingRebuild(::Scripting::ContextId contextId, bool finalEvent);

    MCFOLD void $tryClearPlaytestRoundtripInfo();

    MCFOLD ::Editor::ServiceProviderCollection& $getServiceProviders();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEditorManagerServiceProvider();

    MCAPI static void** $vftableForEditorServiceList();

    MCAPI static void** $vftableForIEditorManager();
    // NOLINTEND
};

} // namespace Editor
