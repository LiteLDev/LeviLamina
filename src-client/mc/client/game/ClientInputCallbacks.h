#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CraftingType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/deps/shared_types/legacy/Side.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class BuildActionIntention;
class HitResult;
class IClientInstance;
class IMinecraftGame;
struct ClearPointerLocationWithIdEventData;
struct ControlOptionEventData;
struct NumberOfEnabledControlOptionsEventData;
struct OverlappingControlsEventData;
struct PointerLocationEventData;
struct PointerLocationWithIdEventData;
struct TouchPadTouchEventData;
// clang-format on

class ClientInputCallbacks {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void destroyVibrate(::IClientInstance& client, int milliSeconds);

    MCAPI static void handleAttackActionButtonRelease(::IClientInstance& client);

    MCAPI static void handleBlockSelectButtonRelease(::IClientInstance& client);

    MCAPI static void handleBlockSelectButtonReleaseWithData(::IClientInstance& client);

    MCAPI static bool handleBuildAction(
        ::IClientInstance&      client,
        ::BuildActionIntention& bai,
        ::HitResult const&      solidHitResult,
        ::HitResult const&      liquidHitResult
    );

    MCAPI static void handleBuildActionButtonRelease(::IClientInstance& client);

    MCAPI static void handleBuildOrAttackButtonPress(::IClientInstance& client);

    MCAPI static void handleBuildOrAttackOrBlockSelectButtonPress(::IClientInstance& client);

    MCAPI static void handleBuildOrInteractButtonPress(::IClientInstance& client);

    MCAPI static void
    handleChangeUserRequest(::IMinecraftGame* mg, int controllerId, bool restrictToControllerIdChange);

    MCAPI static void handleChatButtonRelease(::IClientInstance& client);

    MCAPI static void handleClearPointerLocationWithId(
        ::IClientInstance&                           client,
        ::ClearPointerLocationWithIdEventData const& clearPointerLocationData
    );

    MCAPI static void handleClearPointerLocations(::IClientInstance& client);

    MCAPI static void handleCodeBuilderButtonRelease(::IClientInstance& client);

    MCAPI static void handleCommandMacroPress(::IClientInstance& client, ::OptionID commandOption);

    MCAPI static void handleConsoleButtonRelease(::IClientInstance& client);

    MCAPI static void handleContentLogHistoryOpen(::IClientInstance& client);

    MCAPI static void
    handleControlOption(::IClientInstance& client, ::ControlOptionEventData const& controlOptionEventData);

    MCAPI static void handleControllerConnectionStateChange(::IClientInstance& client, bool controllerIsConnected, int);

    MCAPI static void handleCopyCurrentButtonPress(::IClientInstance& client);

    MCAPI static void handleCopyFacingButtonPress(::IClientInstance& client);

    MCAPI static void handleDescribeBlockButtonRelease(::IClientInstance& client);

    MCAPI static void handleDestoryOrAttackButtonPress(::IClientInstance& client);

    MCAPI static void handleDestroyOrInteractButtonPress(::IClientInstance& client);

    MCAPI static void
    handleDirection(::IClientInstance& client, ::DirectionId stickId, float x, float y, ::FocusImpact focusImpact);

    MCAPI static void handleDismountButtonPress(::IClientInstance& client);

    MCAPI static void handleDropAllButtonPress(::IClientInstance& client);

    MCAPI static void handleDropButtonPress(::IClientInstance& client);

    MCAPI static void handleEmoteButtonEntered(::IClientInstance& client);

    MCAPI static void handleEmoteButtonHeld(::IClientInstance& client);

    MCAPI static void handleEmoteButtonPress(::IClientInstance& client);

    MCAPI static void handleEmoteSlotButtonPress(::IClientInstance& client, int slot);

    MCAPI static bool handleImmersiveReaderButtonRelease(::IClientInstance& client);

    MCAPI static void handleInputModeChanged(::IClientInstance& client, ::InputMode inputMode);

    MCAPI static void handleInteractButtonPress(::IClientInstance& client);

    MCAPI static void handleInventoryButtonPress(::IClientInstance& client, ::CraftingType craftType);

    MCAPI static void handleInventoryMoveButtonPress(::IClientInstance& client, int offset);

    MCAPI static void handleMenuButtonPress(::IClientInstance& client, uint buttonId, ::FocusImpact focusImpact);

    MCAPI static void handleMenuButtonRelease(::IClientInstance& client, uint buttonId, ::FocusImpact focusImpact);

    MCAPI static void handleMobEffectsAndToastInteractButtonRelease(::IClientInstance& client);

    MCAPI static void handleMobEffectsButtonPress(::IClientInstance& client);

    MCAPI static void handleNumberOfEnabledControlOptions(
        ::IClientInstance&                              client,
        ::NumberOfEnabledControlOptionsEventData const& numberOfEnabledControlOptionsEventData
    );

    MCAPI static void handleOpenSocialDrawer(::IClientInstance& client);

    MCAPI static void handleOverlappingControls(
        ::IClientInstance&                    client,
        ::OverlappingControlsEventData const& overlappingControlsEventData
    );

    MCAPI static void handlePaddleButtonPress(::IClientInstance& client, ::SharedTypes::Side side);

    MCAPI static void handlePaddleButtonRelease(::IClientInstance& client, ::SharedTypes::Side side);

    MCAPI static void handlePauseButtonPress(::IClientInstance& client);

    MCFOLD static void handlePickDebugObjectButtonPress(::IClientInstance& client);

    MCAPI static bool handlePointerLocation(
        ::IClientInstance&                client,
        ::PointerLocationEventData const& pointerLocationData,
        ::FocusImpact                     focusImpact
    );

    MCAPI static void
    handlePointerLocationWithId(::IClientInstance& client, ::PointerLocationWithIdEventData const& pointerLocationData);

    MCAPI static void handlePointerPressedButtonPress(::IClientInstance& client);

    MCAPI static void handlePointerPressedButtonRelease(::IClientInstance& client);

    MCAPI static void handlePotentialOverlappingControls(::IClientInstance& client);

    MCAPI static void handleReloadUIDefinitions(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);

    MCAPI static void handleRenderDebugButtonPress(::IClientInstance& client, int step);

    MCAPI static void handleScreenshotButtonPress(::IClientInstance& client);

    MCAPI static void handleSetSpawnPositionButtonPress(::IClientInstance& client);

    MCAPI static void handleSlotSelectButtonPress(::IClientInstance& client, int slot);

    MCAPI static void handleSocialDrawerMobEffectsAndToastInteractButtonRelease(::IClientInstance& client);

    MCAPI static void
    handleTextChar(::IClientInstance& client, ::std::string const& utf8text, ::FocusImpact focusImpact);

    MCAPI static void handleToastInteractButtonRelease(::IClientInstance& client);

    MCAPI static void handleToggleChatTextToSpeechButtonPress(::IClientInstance& client);

    MCAPI static void handleToggleControlTipsButtonPress(::IClientInstance& client);

    MCAPI static void handleToggleEnableFocusDebugButtonPress(::IClientInstance&);

    MCAPI static void handleToggleEnableNewScreensDebugButtonPress(::IClientInstance&);

    MCAPI static void handleToggleFullscreenButtonPress(::IClientInstance& client);

    MCAPI static void handleTogglePerspectiveButtonPress(::IClientInstance& client);

    MCAPI static void handleToggleSimulateTouchButtonPress(::IClientInstance&);

    MCAPI static void handleToggleUIProfile(::IClientInstance& client);

    MCAPI static void handleTouchPadTouch(
        ::IClientInstance&              client,
        ::TouchPadTouchEventData const& touchEventData,
        ::FocusImpact                   focusImpact
    );

    MCAPI static void handleUIScalingRuleChange(::IClientInstance&);

    MCAPI static void splitVibrate(::IClientInstance& client, int milliSeconds);
    // NOLINTEND
};
