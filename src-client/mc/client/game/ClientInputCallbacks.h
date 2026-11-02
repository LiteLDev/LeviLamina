#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CraftingType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class BuildActionIntention;
class HitResult;
class IClientInstance;
class IMinecraftGame;
struct OverlappingControlsEventData;
struct PointerLocationEventData;
struct PointerLocationWithIdEventData;
// clang-format on

class ClientInputCallbacks {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void destroyVibrate(::IClientInstance& client, int milliSeconds);

    MCNAPI static bool handleBuildAction(
        ::IClientInstance&      client,
        ::BuildActionIntention& bai,
        ::HitResult const&      solidHitResult,
        ::HitResult const&      liquidHitResult
    );

    MCNAPI static void handleBuildOrAttackOrBlockSelectButtonPress(::IClientInstance& client);

    MCNAPI static void
    handleChangeUserRequest(::IMinecraftGame* mg, int controllerId, bool restrictToControllerIdChange);

    MCNAPI static void handleChatButtonRelease(::IClientInstance& client);

    MCNAPI static void handleCodeBuilderButtonRelease(::IClientInstance& client);

    MCNAPI static void handleCommandMacroPress(::IClientInstance& client, ::OptionID commandOption);

    MCNAPI static void handleConsoleButtonRelease(::IClientInstance& client);

    MCNAPI static void
    handleControllerConnectionStateChange(::IClientInstance& client, bool controllerIsConnected, int);

    MCNAPI static void handleCopyCurrentButtonPress(::IClientInstance& client);

    MCNAPI static void handleCopyFacingButtonPress(::IClientInstance& client);

    MCNAPI static void handleDebugHotkeyChatEcho(::IClientInstance& client, ::std::string const& label, bool enabled);

    MCNAPI static void handleDismountButtonPress(::IClientInstance& client);

    MCNAPI static void handleDropAllButtonPress(::IClientInstance& client);

    MCNAPI static void handleDropButtonPress(::IClientInstance& client);

    MCNAPI static void handleEmoteButtonEntered(::IClientInstance& client);

    MCNAPI static void handleEmoteButtonHeld(::IClientInstance& client);

    MCNAPI static void handleEmoteButtonPress(::IClientInstance& client);

    MCNAPI static void handleEmoteSlotButtonPress(::IClientInstance& client, int slot);

    MCNAPI static bool handleImmersiveReaderButtonRelease(::IClientInstance& client);

    MCNAPI static void handleInputModeChanged(::IClientInstance& client, ::InputMode inputMode);

    MCNAPI static void handleInventoryButtonPress(::IClientInstance& client, ::CraftingType craftType);

    MCNAPI static void handleInventoryMoveButtonPress(::IClientInstance& client, int offset);

    MCNAPI static void handleMobEffectsButtonPress(::IClientInstance& client);

    MCNAPI static void handleOpenSocialDrawer(::IClientInstance& client);

    MCNAPI static void handleOverlappingControls(
        ::IClientInstance&                    client,
        ::OverlappingControlsEventData const& overlappingControlsEventData
    );

    MCNAPI static void handlePauseButtonPress(::IClientInstance& client);

    MCNAPI static bool handlePointerLocation(
        ::IClientInstance&                client,
        ::PointerLocationEventData const& pointerLocationData,
        ::FocusImpact                     focusImpact
    );

    MCNAPI static void
    handlePointerLocationWithId(::IClientInstance& client, ::PointerLocationWithIdEventData const& pointerLocationData);

    MCNAPI static void handlePointerPressedButtonPress(::IClientInstance& client);

    MCNAPI static void handlePointerPressedButtonRelease(::IClientInstance& client);

    MCNAPI static void handlePotentialOverlappingControls(::IClientInstance& client);

    MCNAPI static void handleReloadUIDefinitions(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);

    MCNAPI static void handleScreenshotButtonPress(::IClientInstance& client);

    MCNAPI static void handleSlotSelectButtonPress(::IClientInstance& client, int slot);

    MCNAPI static void handleSocialDrawerMobEffectsAndToastInteractButtonRelease(::IClientInstance& client);

    MCAPI static void
    handleTextChar(::IClientInstance& client, ::std::string const& utf8text, ::FocusImpact focusImpact);

    MCNAPI static void handleToggleChatTextToSpeechButtonPress(::IClientInstance& client);

    MCNAPI static void handleToggleControlTipsButtonPress(::IClientInstance& client);

    MCNAPI static void handleToggleEnableFocusDebugButtonPress(::IClientInstance& client);

    MCNAPI static void handleToggleEnableNewScreensDebugButtonPress(::IClientInstance& client);

    MCAPI static void handleTogglePerspectiveButtonPress(::IClientInstance& client);

    MCNAPI static void handleToggleSimulateTouchButtonPress(::IClientInstance&);

    MCNAPI static void handleToggleUIProfile(::IClientInstance& client);

    MCNAPI static void handleUIScalingRuleChange(::IClientInstance&);

    MCNAPI static void splitVibrate(::IClientInstance& client, int milliSeconds);
    // NOLINTEND
};
