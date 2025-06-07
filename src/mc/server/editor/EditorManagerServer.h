#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/EditorManager.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"
#include "mc/world/events/ServerInstanceEventListener.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class ILevelListCache;
class IResourcePackRepository;
class Level;
class Player;
class Scheduler;
class ServerInstance;
struct ScriptingWorldInitializeEvent;
namespace Editor { class IEditorPlayer; }
namespace Editor::Network { class INetworkPayload; }
namespace Scripting { class GenericModuleBindingFactory; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Editor {

class EditorManagerServer : public ::Editor::EditorManager,
                            public ::EventListenerDispatcher<::LevelEventListener>,
                            public ::ServerInstanceEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk63252c;
    ::ll::UntypedStorage<8, 8> mUnk2bb08a;
    ::ll::UntypedStorage<8, 8> mUnkf4abda;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorManagerServer& operator=(EditorManagerServer const&);
    EditorManagerServer(EditorManagerServer const&);
    EditorManagerServer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 11
    virtual ::EventResult onEvent(::ScriptingWorldInitializeEvent const& scriptingInitializedEvent) /*override*/;

    // vIndex: 0
    virtual ~EditorManagerServer() /*override*/;

    // vIndex: 2
    virtual bool isClientSide() const /*override*/;

    // vIndex: 3
    virtual ::std::unique_ptr<::Editor::IEditorPlayer> createPlayer(::Player& player) /*override*/;

    // vIndex: 4
    virtual ::EventResult onServerLevelInitialized(::ServerInstance& instance, ::Level& level) /*override*/;

    // vIndex: 11
    virtual ::EventResult onStartLeaveGame(::ServerInstance& instance) /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<void> scriptingTeardown() /*override*/;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<void>
    scriptingRebuild(::Scripting::ContextId contextId, bool finalEvent) /*override*/;

    // vIndex: 4
    virtual ::std::unique_ptr<::FileArchiver::IWorldConverter> createWorldConverter(
        ::ILevelListCache&                                              levelListCache,
        ::Scheduler&                                                    scheduler,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& resourcePackRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>      keyProvider
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorManagerServer(::ServerInstance& server);

    MCNAPI void _dispatchToServerPlayers(::Editor::Network::INetworkPayload& payload);

    MCNAPI ::std::vector<::std::unique_ptr<::Scripting::GenericModuleBindingFactory>> getServerModuleFactories();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerInstance& server);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ScriptingWorldInitializeEvent const& scriptingInitializedEvent);

    MCNAPI bool $isClientSide() const;

    MCNAPI ::std::unique_ptr<::Editor::IEditorPlayer> $createPlayer(::Player& player);

    MCNAPI ::EventResult $onServerLevelInitialized(::ServerInstance& instance, ::Level& level);

    MCNAPI ::EventResult $onStartLeaveGame(::ServerInstance& instance);

    MCNAPI ::Scripting::Result_deprecated<void> $scriptingTeardown();

    MCNAPI ::Scripting::Result_deprecated<void> $scriptingRebuild(::Scripting::ContextId contextId, bool finalEvent);

    MCNAPI ::std::unique_ptr<::FileArchiver::IWorldConverter> $createWorldConverter(
        ::ILevelListCache&                                              levelListCache,
        ::Scheduler&                                                    scheduler,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& resourcePackRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>      keyProvider
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorManager();

    MCNAPI static void** $vftableForEditorServiceList();

    MCNAPI static void** $vftableForEditorManagerServiceProvider();

    MCNAPI static void** $vftableForServerInstanceEventListener();

    MCNAPI static void** $vftableForEventListenerDispatcher();
    // NOLINTEND
};

} // namespace Editor
