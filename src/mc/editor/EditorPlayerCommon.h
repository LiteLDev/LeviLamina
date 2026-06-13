#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IEditorPlayer.h"
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
class Player;
class PlayerEventCoordinator;
struct DimensionType;
struct PlayerDimensionChangeAfterEvent;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct EditorInitParams; }
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
    ::ll::UntypedStorage<8, 48> mUnk3329f0;
    ::ll::UntypedStorage<8, 24> mUnk6b14f6;
    ::ll::UntypedStorage<4, 4>  mUnk2b7012;
    ::ll::UntypedStorage<8, 8>  mUnk10bddf;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorPlayerCommon& operator=(EditorPlayerCommon const&);
    EditorPlayerCommon(EditorPlayerCommon const&);
    EditorPlayerCommon();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorPlayerCommon() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::Editor::ServiceProviderCollection& getServiceProviders() /*override*/;

    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    registerTickSubscriber(::std::function<void(::Editor::ServiceProviderCollection&)> fnTick) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    registerDimensionChange(::std::function<void(::DimensionType, ::DimensionType)> fn) /*override*/;

    virtual ::Player* getPlayer() const /*override*/;

    virtual ::optional_ref<::PlayerEventCoordinator> getPlayerEventCoordinator() = 0;

    virtual ::EventResult onPlayerTick(::Player& player) /*override*/;

    virtual ::EventResult onEvent(::PlayerDimensionChangeAfterEvent const& evt) /*override*/;

    virtual void _onTick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorPlayerCommon(::Player& player, ::gsl::not_null<::Editor::EditorInitParams*> initParams);

    MCNAPI ::Editor::EditorPlayerCommon::InitializationState _getInitializationState() const;

    MCNAPI void _setInitializationState(::Editor::EditorPlayerCommon::InitializationState value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player& player, ::gsl::not_null<::Editor::EditorInitParams*> initParams);
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

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::Editor::ServiceProviderCollection& $getServiceProviders();

    MCNAPI ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    $registerTickSubscriber(::std::function<void(::Editor::ServiceProviderCollection&)> fnTick);

    MCNAPI ::Bedrock::PubSub::Subscription
    $registerDimensionChange(::std::function<void(::DimensionType, ::DimensionType)> fn);

    MCNAPI ::Player* $getPlayer() const;

    MCNAPI ::EventResult $onPlayerTick(::Player& player);

    MCNAPI ::EventResult $onEvent(::PlayerDimensionChangeAfterEvent const& evt);

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
