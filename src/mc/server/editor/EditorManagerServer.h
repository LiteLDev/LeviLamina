#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
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
namespace Core { class FilePathManager; }
namespace Editor { class IEditorPlayer; }
namespace Editor { struct EditorInitParams; }
namespace Scripting { class GenericModuleBindingFactory; }
// clang-format on

namespace Editor {

class EditorManagerServer : public ::Editor::EditorManager,
                            public ::EventListenerDispatcher<::LevelEventListener>,
                            public ::ServerInstanceEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk63252c;
    ::ll::UntypedStorage<8, 8>  mUnk2bb08a;
    ::ll::UntypedStorage<8, 8>  mUnkf4abda;
    ::ll::UntypedStorage<8, 24> mUnk62d704;
    ::ll::UntypedStorage<8, 8>  mUnke15a95;
    ::ll::UntypedStorage<8, 8>  mUnkdddb22;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorManagerServer& operator=(EditorManagerServer const&);
    EditorManagerServer(EditorManagerServer const&);
    EditorManagerServer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorManagerServer() /*override*/ = default;

    virtual bool isClientSide() const /*override*/;

    virtual ::std::unique_ptr<::Editor::IEditorPlayer> createPlayer(::Player&) /*override*/;

    virtual ::EventResult onServerLevelInitialized(::ServerInstance& instance, ::Level& level) /*override*/;

    virtual ::EventResult onStartLeaveGame(::ServerInstance& instance) /*override*/;

    virtual ::EventResult onEvent(::ScriptingWorldInitializeEvent const&) /*override*/;

    virtual ::EventResult onLevelTick(::Level&) /*override*/;

    virtual ::Scripting::Result_deprecated<void> scriptingTeardown() /*override*/;

    virtual ::Scripting::Result_deprecated<void> scriptingRebuild() /*override*/;

    virtual bool isEditorModeOrInEditorWorld() const /*override*/;

    virtual ::std::unique_ptr<::FileArchiver::IWorldConverter> createWorldConverter(
        ::ILevelListCache&,
        ::Scheduler&,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const&,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorManagerServer(
        ::ServerInstance&                                      server,
        bool                                                   isEditorModeEnabled,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> fileManager,
        ::std::unique_ptr<::Editor::EditorInitParams>          editorInitParams
    );

    MCNAPI ::std::vector<::std::unique_ptr<::Scripting::GenericModuleBindingFactory>> getServerModuleFactories();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServerInstance&                                      server,
        bool                                                   isEditorModeEnabled,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> fileManager,
        ::std::unique_ptr<::Editor::EditorInitParams>          editorInitParams
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor
