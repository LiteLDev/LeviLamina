#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/IConfigListener.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class ClientMoveInputHandler;
class IAdvancedGraphicsOptions;
class IClientInstance;
class IMinecraftGame;
class InputHandler;
class InputSettingsHandler;
class MinecraftBindingFactoryMap;
class MinecraftInputHandlerProxy;
class MinecraftInputMappingFactoryMap;
class MouseMapper;
class SplitscreenJoinListener;
struct Config;
struct ControllerIDtoClientMap;
struct IGameModuleApp;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class MinecraftInputHandler : public ::IConfigListener, public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::InputHandler>>                          mInputHandler;
    ::ll::TypedStorage<4, 4, int>                                                        mControllerId;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>          mClient;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions>> mAdvancedGraphicsOptions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecraftBindingFactoryMap>>            mBindingFactoryMap;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecraftInputMappingFactoryMap>>       mMappingFactoryMap;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SplitscreenJoinListener>>               mSplitscreenJoinListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::InputSettingsHandler>>                  mInputSettingsHandler;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::IClientInstance&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mAnyInputSubscription;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(int, ::RawInputType, ::ButtonState, bool), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                                              mRawInputEventPublisher;
    ::ll::TypedStorage<8, 8, ::MouseMapper*>                                  mMouseMapper;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecraftInputHandlerProxy>> mProxy;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftInputHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftInputHandler() /*override*/;

    virtual void onConfigChanged(::Config const& c) /*override*/;

    virtual void _registerInputHandlers();

    virtual void _registerDebugInputHandlers();

    virtual ::std::unique_ptr<::ClientMoveInputHandler> _createClientMoveInputHandler() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MinecraftInputHandler(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&          client,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions
    );

    MCAPI void _registerMenuButton(::std::string const& buttonName, bool suspendable);

    MCAPI void init(::IGameModuleApp& gameModuleApp);

    MCAPI ::ClientMoveInputHandler*
    initClientInput(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client, ::IGameModuleApp& gameModuleApp);

    MCAPI void tick(
        ::IMinecraftGame&                                               mcGame,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&         primaryClient,
        ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const& map,
        bool                                                            allowMultipleClients
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&          client,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onConfigChanged(::Config const& c);

    MCAPI void $_registerInputHandlers();

    MCAPI void $_registerDebugInputHandlers();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIConfigListener();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
