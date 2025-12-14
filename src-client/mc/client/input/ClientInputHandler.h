#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class ClientBindingFactory;
class ClientInputHandlerProxy;
class ClientInputMappingFactory;
class IClientInstance;
class InputHandler;
class ScreenContext;
struct ActorDataFlagComponent;
struct Config;
struct IGameModuleApp;
struct MobEffectsComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
// clang-format on

class ClientInputHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClient;
    ::ll::TypedStorage<8, 8, ::InputHandler&>                                   mInputHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientBindingFactory>>         mBindingFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientInputMappingFactory>>    mMappingFactory;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mExpectedInGameInputMode;
    ::ll::TypedStorage<1, 1, bool>                                              mIsFlying;
    ::ll::TypedStorage<1, 1, bool>                                              mIsSneaking;
    ::ll::TypedStorage<1, 1, bool>                                              mIsSprinting;
    ::ll::TypedStorage<1, 1, bool>                                              mIsSwimming;
    ::ll::TypedStorage<1, 1, bool>                                              mIsInWater;
    ::ll::TypedStorage<1, 1, bool>                                              mIsExpediateEmoteActive;
    ::ll::TypedStorage<1, 1, bool>                                              mIsInAscendableBlock;
    ::ll::TypedStorage<1, 1, bool>                                              mIsOnDescendableBlock;
    ::ll::TypedStorage<1, 1, bool>                                              mIsCreativeMode;
    ::ll::TypedStorage<1, 1, bool>                                              mIsSpectatorMode;
    ::ll::TypedStorage<1, 1, bool>                                              mInteractActive;
    ::ll::TypedStorage<1, 1, bool>                                              mHasMobEffects;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientInputHandlerProxy>>      mProxy;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInputHandler& operator=(ClientInputHandler const&);
    ClientInputHandler(ClientInputHandler const&);
    ClientInputHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClientInputHandler(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client,
        ::InputHandler&                                         inputHandler,
        ::IGameModuleApp&                                       gameModuleApp
    );

    MCAPI bool canInteract() const;

    MCAPI bool canPaddle() const;

    MCAPI void clearInvalidDownKeys();

    MCAPI ::std::string getBoatExitText() const;

    MCAPI ::InputMode getCurrentInputMode() const;

    MCAPI void getCursorPos(float& xCursor, float& yCursor) const;

    MCAPI ::std::string getInteractText() const;

    MCAPI void onConfigChanged(::Config const& c);

    MCAPI void pushInputMapping(bool inGame);

    MCAPI void render(::ScreenContext& screenContext);

    MCAPI void resetPlayerState();

    MCAPI bool showCodeBuilder() const;

    MCAPI bool showImmersiveReader() const;

    MCAPI void updateInputMapping();

    MCAPI bool updateInputMode(::std::string const& mode);

    MCAPI void updatePlayerState(
        ::gsl::not_null<::IClientInstance const*> client,
        ::MovementAbilitiesComponent const&       abilities,
        ::MobEffectsComponent const&              mobEffects,
        ::ActorDataFlagComponent const&           synchedActorData,
        ::MoveInputComponent&                     moveInput,
        bool                                      isRiding,
        bool                                      isInWater
    );

    MCAPI bool useFreeformPickDirection() const;

    MCAPI ~ClientInputHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client,
        ::InputHandler&                                         inputHandler,
        ::IGameModuleApp&                                       gameModuleApp
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
