#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IEditorPlayer.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/serviceproviders/EditorPlayerServiceProvider.h"
#include "mc/editor/services/EditorServiceList.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Player;
class PlayerEventCoordinator;
struct PlayerDimensionChangeAfterEvent;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor {

class EditorPlayerCommon : public ::Editor::IEditorPlayer,
                           public ::Editor::EditorPlayerServiceProvider,
                           public ::Editor::Services::EditorServiceList,
                           public ::EventListenerDispatcher<::PlayerEventListener> {
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
    ::ll::UntypedStorage<8, 48> mUnk6374b5;
    ::ll::UntypedStorage<8, 48> mUnkc284f0;
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
    // vIndex: 54
    virtual ::EventResult onEvent(::PlayerDimensionChangeAfterEvent const& evt) /*override*/;

    // vIndex: 0
    virtual ~EditorPlayerCommon() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 4
    virtual ::Editor::ServiceProviderCollection& getServiceProviders() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    registerTickSubscriber(::std::function<void(::Editor::ServiceProviderCollection&)> fnTick) /*override*/;

    // vIndex: 3
    virtual ::Bedrock::PubSub::Subscription
    registerDimensionChange(::std::function<void(::DimensionType, ::DimensionType)> fn) /*override*/;

    // vIndex: 1
    virtual ::Player* getPlayer() const /*override*/;

    // vIndex: 6
    virtual ::optional_ref<::PlayerEventCoordinator> getPlayerEventCoordinator() = 0;

    // vIndex: 21
    virtual ::EventResult onPlayerTick(::Player& player) /*override*/;

    // vIndex: 5
    virtual void _onTick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorPlayerCommon(::Player& player);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::PlayerDimensionChangeAfterEvent const& evt);

    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::Editor::ServiceProviderCollection& $getServiceProviders();

    MCNAPI ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    $registerTickSubscriber(::std::function<void(::Editor::ServiceProviderCollection&)> fnTick);

    MCNAPI ::Bedrock::PubSub::Subscription
    $registerDimensionChange(::std::function<void(::DimensionType, ::DimensionType)> fn);

    MCNAPI ::Player* $getPlayer() const;

    MCNAPI ::EventResult $onPlayerTick(::Player& player);

    MCNAPI void $_onTick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorServiceList();

    MCNAPI static void** $vftableForEditorPlayerServiceProvider();

    MCNAPI static void** $vftableForEventListenerDispatcher();

    MCNAPI static void** $vftableForIEditorPlayer();
    // NOLINTEND
};

} // namespace Editor
