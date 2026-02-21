#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CraftingType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/FocusImpact.h"

// auto generated forward declare list
// clang-format off
class BuildActionIntention;
class HitResult;
class IClientInstance;
class IMinecraftGame;
struct PointerLocationEventData;
struct PointerLocationWithIdEventData;
// clang-format on

class ClientInputCallbacks {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void destroyVibrate(::IClientInstance& client, int milliSeconds);

    MCAPI static bool handleBuildAction(
        ::IClientInstance&      client,
        ::BuildActionIntention& bai,
        ::HitResult const&      solidHitResult,
        ::HitResult const&      liquidHitResult
    );

    MCAPI static void handleBuildActionButtonRelease(::IClientInstance& client);

    MCAPI static void handleBuildOrAttackButtonPress(::IClientInstance& client);

    MCAPI static void
    handleChangeUserRequest(::IMinecraftGame* mg, int controllerId, bool restrictToControllerIdChange);

    MCAPI static void handleChatButtonRelease(::IClientInstance& client);

    MCAPI static void handleConsoleButtonRelease(::IClientInstance& client);

    MCAPI static void handleCopyCurrentButtonPress(::IClientInstance& client);

    MCAPI static void handleCopyFacingButtonPress(::IClientInstance& client);

    MCAPI static void handleDropAllButtonPress(::IClientInstance& client);

    MCAPI static void handleDropButtonPress(::IClientInstance& client);

    MCAPI static void handleEmoteButtonPress(::IClientInstance& client);

    MCAPI static void handleEmoteSlotButtonPress(::IClientInstance& client, int slot);

    MCAPI static bool handleImmersiveReaderButtonRelease(::IClientInstance& client);

    MCAPI static void handleInputModeChanged(::IClientInstance& client, ::InputMode inputMode);

    MCAPI static void handleInventoryButtonPress(::IClientInstance& client, ::CraftingType craftType);

    MCAPI static void handleInventoryMoveButtonPress(::IClientInstance& client, int offset);

    MCAPI static void handleMobEffectsButtonPress(::IClientInstance& client);

    MCAPI static void handlePauseButtonPress(::IClientInstance& client);

    MCAPI static bool handlePointerLocation(
        ::IClientInstance&                client,
        ::PointerLocationEventData const& pointerLocationData,
        ::FocusImpact                     focusImpact
    );

    MCAPI static void
    handlePointerLocationWithId(::IClientInstance& client, ::PointerLocationWithIdEventData const& pointerLocationData);

    MCAPI static void handlePointerPressedButtonPress(::IClientInstance& client);

    MCAPI static void handleReloadUIDefinitions(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);

    MCAPI static void handleScreenshotButtonPress(::IClientInstance& client);

    MCAPI static void handleToggleChatTextToSpeechButtonPress(::IClientInstance& client);

    MCAPI static void handleToggleControlTipsButtonPress(::IClientInstance& client);

    MCAPI static void handleTogglePerspectiveButtonPress(::IClientInstance& client);
    // NOLINTEND
};
