#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputBindingMode.h"

// auto generated forward declare list
// clang-format off
class ClientBindingFactory;
class ClientInputHandlerProxy;
class ClientInputMappingFactory;
class Config;
class IClientInstance;
class IGameModuleApp;
class InputHandler;
class ScreenContext;
struct ActorDataFlagComponent;
struct MobEffectsComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
namespace Input::Debug { class ISplitscreenRedirect; }
// clang-format on

class ClientInputHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClient;
    ::ll::TypedStorage<8, 8, ::InputHandler&>                                   mInputHandler;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Input::Debug::ISplitscreenRedirect>>
                                                                             mDebugSplitscreenInputRedirect;
    ::ll::TypedStorage<4, 4, ::InputBindingMode>                             mInputBindingMode;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientBindingFactory>>      mBindingFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientInputMappingFactory>> mMappingFactory;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mExpectedInGameInputMode;
    ::ll::TypedStorage<1, 1, bool>                                           mIsFlying;
    ::ll::TypedStorage<1, 1, bool>                                           mIsSneaking;
    ::ll::TypedStorage<1, 1, bool>                                           mIsSprinting;
    ::ll::TypedStorage<1, 1, bool>                                           mIsSwimming;
    ::ll::TypedStorage<1, 1, bool>                                           mIsInWater;
    ::ll::TypedStorage<1, 1, bool>                                           mIsExpediateEmoteActive;
    ::ll::TypedStorage<1, 1, bool>                                           mIsInAscendableBlock;
    ::ll::TypedStorage<1, 1, bool>                                           mIsOnDescendableBlock;
    ::ll::TypedStorage<1, 1, bool>                                           mIsCreativeMode;
    ::ll::TypedStorage<1, 1, bool>                                           mIsSpectatorMode;
    ::ll::TypedStorage<1, 1, bool>                                           mInteractActive;
    ::ll::TypedStorage<1, 1, bool>                                           mHasMobEffects;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientInputHandlerProxy>>   mProxy;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInputHandler& operator=(ClientInputHandler const&);
    ClientInputHandler(ClientInputHandler const&);
    ClientInputHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientInputHandler(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&                    client,
        ::InputHandler&                                                            inputHandler,
        ::Bedrock::NotNullNonOwnerPtr<::Input::Debug::ISplitscreenRedirect> const& debugSplitscreenInputRedirect,
        ::IGameModuleApp&                                                          gameModuleApp
    );

    MCNAPI ::std::string _interactWithImmersiveReader() const;

    MCNAPI bool allowPicking() const;

    MCNAPI bool canInteract() const;

    MCNAPI ::std::string getBoatExitText() const;

    MCNAPI void getCursorPos(float& xCursor, float& yCursor) const;

    MCNAPI ::std::string getInteractText() const;

    MCNAPI bool getSplitscreenJoinPromptVisible() const;

    MCNAPI bool isBlockSelectToggled() const;

    MCNAPI bool isTouchGameplayAllowed() const;

    MCNAPI void onConfigChanged(::Config const& c);

    MCNAPI void pushInputMapping(bool inGame);

    MCNAPI void releaseButtonsAndSticks();

    MCNAPI void render(::ScreenContext& screenContext);

    MCNAPI void resetPlayerState();

    MCNAPI void setBlockSelectToggle(bool value);

    MCNAPI bool showImmersiveReader() const;

    MCNAPI void updateInputMapping();

    MCNAPI bool updateInputMode(::std::string const& mode);

    MCNAPI void updatePlayerState(
        ::gsl::not_null<::IClientInstance const*> client,
        ::MovementAbilitiesComponent const&       abilities,
        ::MobEffectsComponent const&              mobEffects,
        ::ActorDataFlagComponent const&           synchedActorData,
        ::MoveInputComponent&                     moveInput,
        bool                                      isRiding,
        bool                                      isInWater
    );

    MCNAPI bool useFreeformPickDirection() const;

    MCNAPI ~ClientInputHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&                    client,
        ::InputHandler&                                                            inputHandler,
        ::Bedrock::NotNullNonOwnerPtr<::Input::Debug::ISplitscreenRedirect> const& debugSplitscreenInputRedirect,
        ::IGameModuleApp&                                                          gameModuleApp
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
