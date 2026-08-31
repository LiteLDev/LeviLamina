#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/ClientInputMappingFactory.h"
#include "mc/client/input/vanilla/remapping/ActionEnum.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/enums/FocusImpact.h"

// auto generated forward declare list
// clang-format off
class GamePadRemappingLayout;
class IOptionRegistry;
class RemappingLayout;
struct ChordButtonMapping;
struct GameControllerInputMapping;
struct KeyboardInputMapping;
struct MouseInputMapping;
struct TouchInputMapping;
// clang-format on

class VanillaClientInputMappingFactory : public ::ClientInputMappingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                mIsEdu;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IOptionRegistry>> mOptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>    mRegenerateTemplatesDueToScriptKeys;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void createInputMappingTemplates(::IOptionRegistry& options) /*override*/;

    virtual void _updateKeyboardAndMouseControls(::IOptionRegistry& options) /*override*/;

    virtual void _updateGameControllerControls() /*override*/;

    virtual void _updateTouchMappingControls() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addBlockSelectButton(::TouchInputMapping& touchMapping) const;

    MCAPI void _addClassicDPadButtons(::TouchInputMapping& touchMapping, bool sneak, bool jump) const;

    MCAPI void _addCommandMacrosKeyboardAndMouseMapping(
        ::KeyboardInputMapping& screenKeyboardMapping,
        ::MouseInputMapping&    screenMouseMapping
    );

    MCAPI void _addCommandMacrosKeyboardAndMouseMappingChord(::std::vector<::ChordButtonMapping>& result);

    MCAPI void _addDebugChords(::std::vector<::ChordButtonMapping>& result);

    MCAPI void
    _addDebugKeyboardControls(::KeyboardInputMapping& keyboardMapping, ::MouseInputMapping& mouseMapping) const;

    MCAPI void _addFullKeyboardGamePlayControls(
        ::KeyboardInputMapping& keyboardMapping,
        ::MouseInputMapping&    mouseMapping,
        bool                    withInventoryCycle
    ) const;

    MCAPI void _addGamePlayTouchFlyingMovementControls(::TouchInputMapping& result) const;

    MCAPI void _addGameplayMouseControls(
        ::KeyboardInputMapping& normalGamePlayKeyboardMapping,
        ::MouseInputMapping&    normalGamePlayMouseMapping
    );

    MCAPI void _addInvariantGameControllerControls(::GameControllerInputMapping& gameControllerMapping);

    MCAPI void _addInvariantGamePlayGameControllerControls(::GameControllerInputMapping& gameControllerMapping);

    MCAPI void _addInvariantGamePlayTouchControls(::TouchInputMapping& touchMapping) const;

    MCAPI void _addInvariantKeyboardControls(
        ::KeyboardInputMapping& keyboardMapping,
        ::MouseInputMapping&    mouseMapping,
        bool                    isEmoteMapping
    ) const;

    MCAPI void _addNewTouchControlsActionButtons(::TouchInputMapping& touchMapping) const;

    MCAPI void _addSharedGamePlayGameControllerControls(::GameControllerInputMapping& gameControllerMapping);

    MCAPI void _bindActionToGameControllerInput(
        ::GameControllerInputMapping&   map,
        ::GamePadRemappingLayout const& layout,
        ::std::string const&            buttonID,
        ::Remapping::ActionEnum         action,
        float                           triggerThreshold,
        float                           repeatInterval
    ) const;

    MCAPI void _bindActionToKeyboardAndMouseInput(
        ::KeyboardInputMapping& keyboardMap,
        ::MouseInputMapping&    mouseMap,
        ::std::string const&    buttonID,
        ::Remapping::ActionEnum action,
        ::FocusImpact           focusImpact
    ) const;

    MCAPI void _createBaseNormalGamePlayKeyboardAndMouseMapping(
        ::KeyboardInputMapping& normalGamePlayKeyboardMapping,
        ::MouseInputMapping&    normalGamePlayMouseMapping,
        bool                    isEmoteMapping
    );

    MCAPI void
    _createBedKeyboardAndMouseMapping(::KeyboardInputMapping& bedKeyboardMapping, ::MouseInputMapping& bedMouseMapping);

    MCAPI ::GameControllerInputMapping _createBoatAndMinecartGameControllerMapping();

    MCAPI void _createBoatKeyboardAndMouseMapping(
        ::KeyboardInputMapping& boatKeyboardMapping,
        ::MouseInputMapping&    boatMouseMapping
    );

    MCAPI ::TouchInputMapping _createBoatTouchMapping();

    MCAPI void
    _createDeathKeyboardAndMouseMapping(::KeyboardInputMapping& keyboardMapping, ::MouseInputMapping& mouseMapping);

    MCAPI ::GameControllerInputMapping _createEmoteGameControllerMapping();

    MCAPI void _createExpediateEmoteKeyboardAndMouseMapping(
        ::KeyboardInputMapping& emoteKeyboardMapping,
        ::MouseInputMapping&    emoteMouseMapping
    );

    MCAPI ::GameControllerInputMapping _createFlyingGameControllerMapping();

    MCAPI ::GameControllerInputMapping _createGazeScreenGameControllerMapping();

    MCAPI ::TouchInputMapping _createInScaffoldingTouchMapping();

    MCAPI ::GameControllerInputMapping _createInWaterGameControllerMapping();

    MCAPI ::TouchInputMapping _createInWaterTouchMapping();

    MCAPI ::TouchInputMapping _createMinecartTouchMapping();

    MCAPI ::std::vector<::ChordButtonMapping> _createNormalGamePlayChordMapping(bool withDropAll);

    MCAPI ::GameControllerInputMapping _createNormalGamePlayGameControllerMapping();

    MCAPI void _createNormalGamePlayKeyboardAndMouseMapping(
        ::KeyboardInputMapping& normalGamePlayKeyboardMapping,
        ::MouseInputMapping&    normalGamePlayMouseMapping
    );

    MCAPI ::TouchInputMapping _createNormalGamePlayTouchMapping();

    MCAPI ::GameControllerInputMapping _createRideableGameControllerMapping();

    MCAPI void _createRideableKeyboardAndMouseMapping(
        ::KeyboardInputMapping& rideableKeyboardMapping,
        ::MouseInputMapping&    rideableMouseMapping
    );

    MCAPI ::TouchInputMapping _createRideableTouchMapping();

    MCAPI ::GameControllerInputMapping _createScreenGameControllerMapping();

    MCAPI void _createScreenKeyboardAndMouseMapping(
        ::KeyboardInputMapping& screenKeyboardMapping,
        ::MouseInputMapping&    screenMouseMapping
    );

    MCAPI ::KeyboardInputMapping _createScreenKeyboardMapping();

    MCAPI ::MouseInputMapping _createScreenMouseMapping();

    MCAPI ::GameControllerInputMapping _createSpectatorModeGameControllerMapping();

    MCAPI void _createSpectatorModeKeyboardAndMouseMapping(
        ::KeyboardInputMapping& spectatorModeGamePlayKeyboardMapping,
        ::MouseInputMapping&    spectatorModeGamePlayMouseMapping
    );

    MCAPI ::TouchInputMapping _createSpectatorModeTouchMapping();

    MCAPI ::GameControllerInputMapping _createSwimmingGameControllerMapping();

    MCAPI void _createSwimmingKeyboardAndMouseMapping(
        ::KeyboardInputMapping& swimmingKeyboardMapping,
        ::MouseInputMapping&    swimmingMouseMapping
    );

    MCAPI bool _isUsingActionButtons() const;

    MCAPI void _populateFullKeyboardDefaults(::RemappingLayout& layout) const;

    MCAPI void _populateKeyboardDefaults(::RemappingLayout& layout) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $createInputMappingTemplates(::IOptionRegistry& options);

    MCAPI void $_updateKeyboardAndMouseControls(::IOptionRegistry& options);

    MCAPI void $_updateGameControllerControls();

    MCAPI void $_updateTouchMappingControls();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
