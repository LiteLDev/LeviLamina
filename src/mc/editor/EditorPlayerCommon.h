#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IEditorPlayer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/editor/serviceproviders/EditorPlayerServiceProvider.h"
#include "mc/editor/services/EditorServiceList.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class Player;
class PlayerEventCoordinator;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Editor { class ServiceProviderCollection; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor {

class EditorPlayerCommon : public ::Editor::IEditorPlayer,
                           public ::Editor::EditorPlayerServiceProvider,
                           public ::Editor::Services::EditorServiceList,
                           public ::PlayerEventListener {
public:
    // EditorPlayerCommon inner types define
    enum class InitializationState : int {
        Uninitialized  = 0,
        Initializing   = 1,
        Initialized    = 2,
        Readying       = 3,
        Ready          = 4,
        Deinitializing = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb995b8;
    ::ll::UntypedStorage<8, 48> mUnk53047f;
    ::ll::UntypedStorage<8, 24> mUnk6b14f6;
    ::ll::UntypedStorage<4, 4>  mUnk2b7012;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorPlayerCommon& operator=(EditorPlayerCommon const&);
    EditorPlayerCommon(EditorPlayerCommon const&);
    EditorPlayerCommon();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorPlayerCommon() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::Editor::ServiceProviderCollection& getServiceProviders() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<::Bedrock::PubSub::Subscription, ::Scripting::Error>
    registerTickSubscriber(::std::function<void(::Editor::ServiceProviderCollection&)> fnTick) /*override*/;

    // vIndex: 1
    virtual ::Player* getPlayer() const /*override*/;

    // vIndex: 6
    virtual ::optional_ref<::PlayerEventCoordinator> getPlayerEventCoordinator() = 0;

    // vIndex: 19
    virtual ::EventResult onPlayerTick(::Player& player) /*override*/;

    // vIndex: 5
    virtual void _onTick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorPlayerCommon(::Player& player);

    MCAPI ::Editor::EditorPlayerCommon::InitializationState _getInitializationState() const;

    MCAPI void _setInitializationState(::Editor::EditorPlayerCommon::InitializationState value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $init();

    MCAPI ::Scripting::Result<void> $ready();

    MCAPI ::Scripting::Result<void> $quit();

    MCFOLD ::Editor::ServiceProviderCollection& $getServiceProviders();

    MCAPI ::Scripting::Result<::Bedrock::PubSub::Subscription, ::Scripting::Error>
    $registerTickSubscriber(::std::function<void(::Editor::ServiceProviderCollection&)> fnTick);

    MCAPI ::Player* $getPlayer() const;

    MCAPI ::EventResult $onPlayerTick(::Player& player);

    MCAPI void $_onTick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEditorServiceList();

    MCAPI static void** $vftableForEditorPlayerServiceProvider();

    MCAPI static void** $vftableForPlayerEventListener();

    MCAPI static void** $vftableForIEditorPlayer();
    // NOLINTEND
};

} // namespace Editor
