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
    MCNAPI void _addBlockSelectButton(::TouchInputMapping& touchMapping) const;

    MCNAPI void _addClassicDPadButtons(::TouchInputMapping& touchMapping, bool sneak, bool jump) const;

    MCNAPI void _addCommandMacrosKeyboardAndMouseMapping(
        ::KeyboardInputMapping& screenKeyboardMapping,
        ::MouseInputMapping&    screenMouseMapping
    );

    MCNAPI void _addFullKeyboardGamePlayControls(
        ::KeyboardInputMapping& keyboardMapping,
        ::MouseInputMapping&    mouseMapping,
        bool                    withInventoryCycle
    ) const;

    MCNAPI void _addGamePlayTouchFlyingMovementControls(::TouchInputMapping& result) const;

    MCNAPI void _addGameplayMouseControls(
        ::KeyboardInputMapping& normalGamePlayKeyboardMapping,
        ::MouseInputMapping&    normalGamePlayMouseMapping
    );

    MCNAPI void _addInvariantGameControllerControls(::GameControllerInputMapping& gameControllerMapping);

    MCNAPI void _addInvariantGamePlayGameControllerControls(::GameControllerInputMapping& gameControllerMapping);

    MCNAPI void _addInvariantGamePlayTouchControls(::TouchInputMapping& touchMapping) const;

    MCNAPI void _addInvariantKeyboardControls(
        ::KeyboardInputMapping& keyboardMapping,
        ::MouseInputMapping&    mouseMapping,
        bool                    isEmoteMapping
    ) const;

    MCNAPI void _addSharedGamePlayGameControllerControls(::GameControllerInputMapping& gameControllerMapping);

    MCNAPI void _bindActionToKeyboardAndMouseInput(
        ::KeyboardInputMapping& keyboardMap,
        ::MouseInputMapping&    mouseMap,
        ::std::string const&    buttonID,
        ::Remapping::ActionEnum action,
        ::FocusImpact           focusImpact
    ) const;

    MCNAPI void _createBaseNormalGamePlayKeyboardAndMouseMapping(
        ::KeyboardInputMapping& normalGamePlayKeyboardMapping,
        ::MouseInputMapping&    normalGamePlayMouseMapping,
        bool                    isEmoteMapping
    );

    MCNAPI void
    _createBedKeyboardAndMouseMapping(::KeyboardInputMapping& bedKeyboardMapping, ::MouseInputMapping& bedMouseMapping);

    MCNAPI ::GameControllerInputMapping _createBoatAndMinecartGameControllerMapping();

    MCNAPI void _createBoatKeyboardAndMouseMapping(
        ::KeyboardInputMapping& boatKeyboardMapping,
        ::MouseInputMapping&    boatMouseMapping
    );

    MCNAPI ::TouchInputMapping _createBoatTouchMapping();

    MCNAPI void
    _createDeathKeyboardAndMouseMapping(::KeyboardInputMapping& keyboardMapping, ::MouseInputMapping& mouseMapping);

    MCNAPI ::GameControllerInputMapping _createEmoteGameControllerMapping();

    MCNAPI ::GameControllerInputMapping _createFlyingGameControllerMapping();

    MCNAPI ::GameControllerInputMapping _createGazeScreenGameControllerMapping();

    MCNAPI ::TouchInputMapping _createInScaffoldingTouchMapping();

    MCNAPI ::GameControllerInputMapping _createInWaterGameControllerMapping();

    MCNAPI ::TouchInputMapping _createInWaterTouchMapping();

    MCNAPI ::TouchInputMapping _createMinecartTouchMapping();

    MCNAPI ::std::vector<::ChordButtonMapping> _createNormalGamePlayChordMapping(bool withDropAll);

    MCNAPI ::GameControllerInputMapping _createNormalGamePlayGameControllerMapping();

    MCNAPI void _createNormalGamePlayKeyboardAndMouseMapping(
        ::KeyboardInputMapping& normalGamePlayKeyboardMapping,
        ::MouseInputMapping&    normalGamePlayMouseMapping
    );

    MCNAPI ::TouchInputMapping _createNormalGamePlayTouchMapping();

    MCNAPI ::GameControllerInputMapping _createRideableGameControllerMapping();

    MCNAPI void _createRideableKeyboardAndMouseMapping(
        ::KeyboardInputMapping& rideableKeyboardMapping,
        ::MouseInputMapping&    rideableMouseMapping
    );

    MCNAPI ::TouchInputMapping _createRideableTouchMapping();

    MCNAPI ::GameControllerInputMapping _createScreenGameControllerMapping();

    MCNAPI void _createScreenKeyboardAndMouseMapping(
        ::KeyboardInputMapping& screenKeyboardMapping,
        ::MouseInputMapping&    screenMouseMapping
    );

    MCNAPI ::KeyboardInputMapping _createScreenKeyboardMapping();

    MCNAPI ::MouseInputMapping _createScreenMouseMapping();

    MCNAPI ::GameControllerInputMapping _createSpectatorModeGameControllerMapping();

    MCNAPI void _createSpectatorModeKeyboardAndMouseMapping(
        ::KeyboardInputMapping& spectatorModeGamePlayKeyboardMapping,
        ::MouseInputMapping&    spectatorModeGamePlayMouseMapping
    );

    MCNAPI ::TouchInputMapping _createSpectatorModeTouchMapping();

    MCNAPI ::GameControllerInputMapping _createSwimmingGameControllerMapping();

    MCNAPI void _createSwimmingKeyboardAndMouseMapping(
        ::KeyboardInputMapping& swimmingKeyboardMapping,
        ::MouseInputMapping&    swimmingMouseMapping
    );

    MCNAPI bool _isUsingActionButtons() const;

    MCNAPI void _populateFullKeyboardDefaults(::RemappingLayout& layout) const;

    MCNAPI void _populateKeyboardDefaults(::RemappingLayout& layout) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _addCommandMacrosKeyboardAndMouseMappingChord(::std::vector<::ChordButtonMapping>& result);

    MCNAPI static void _addDebugChords(::std::vector<::ChordButtonMapping>& result);

    MCNAPI static void _addNewTouchControlsActionButtons(::TouchInputMapping& touchMapping);

    MCNAPI static void _bindActionToGameControllerInput(
        ::GameControllerInputMapping&   map,
        ::GamePadRemappingLayout const& layout,
        ::std::string const&            buttonID,
        ::Remapping::ActionEnum         action,
        float                           triggerThreshold,
        float                           repeatInterval
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $createInputMappingTemplates(::IOptionRegistry& options);

    MCAPI void $_updateKeyboardAndMouseControls(::IOptionRegistry& options);

    MCNAPI void $_updateGameControllerControls();

    MCNAPI void $_updateTouchMappingControls();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
