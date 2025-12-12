#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/IConfigListener.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class IClientInstance;
struct ClientMoveInputHandler;
struct Config;
struct IGameModuleApp;
// clang-format on

class MinecraftInputHandler : public ::IConfigListener, public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkabd271;
    ::ll::UntypedStorage<4, 4>   mUnkd5b215;
    ::ll::UntypedStorage<8, 24>  mUnk271442;
    ::ll::UntypedStorage<8, 24>  mUnkb64156;
    ::ll::UntypedStorage<8, 8>   mUnk105ebb;
    ::ll::UntypedStorage<8, 8>   mUnk9cf787;
    ::ll::UntypedStorage<8, 8>   mUnk71a0e7;
    ::ll::UntypedStorage<8, 128> mUnkb46b99;
    ::ll::UntypedStorage<8, 8>   mUnk58f243;
    ::ll::UntypedStorage<8, 8>   mUnk27c6b6;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftInputHandler& operator=(MinecraftInputHandler const&);
    MinecraftInputHandler(MinecraftInputHandler const&);
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
    MCNAPI MinecraftInputHandler(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&          client,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions
    );

    MCNAPI void _registerMenuButton(::std::string const& buttonName, bool suspendable);

    MCNAPI void init(::IGameModuleApp& gameModuleApp);

    MCNAPI ::ClientMoveInputHandler*
    initClientInput(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client, ::IGameModuleApp& gameModuleApp);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&          client,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions
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
    MCNAPI void $onConfigChanged(::Config const& c);

    MCNAPI void $_registerInputHandlers();

    MCNAPI void $_registerDebugInputHandlers();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIConfigListener();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
