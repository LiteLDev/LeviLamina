#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/ClientInputMappingFactory.h"
#include "mc/client/input/vanilla/remapping/ActionEnum.h"
#include "mc/deps/input/enums/FocusImpact.h"

// auto generated forward declare list
// clang-format off
class GamePadRemappingLayout;
class IOptions;
class RemappingLayout;
struct ChordButtonMapping;
struct DeviceButtonMapping;
struct GameControllerInputMapping;
struct KeyboardInputMapping;
struct MouseInputMapping;
struct TestAutoInputMapping;
struct TouchInputMapping;
// clang-format on

class VanillaClientInputMappingFactory : public ::ClientInputMappingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk5c91ba;
    ::ll::UntypedStorage<8, 16> mUnk9cb7db;
    ::ll::UntypedStorage<8, 16> mUnk3679a1;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaClientInputMappingFactory& operator=(VanillaClientInputMappingFactory const&);
    VanillaClientInputMappingFactory(VanillaClientInputMappingFactory const&);
    VanillaClientInputMappingFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void createInputMappingTemplates(::IOptions& options) /*override*/;

    virtual void _updateKeyboardAndMouseControls(::IOptions& options) /*override*/;

    virtual void _updateGameControllerControls() /*override*/;

    virtual void _updateTouchMappingControls() /*override*/;

    virtual ~VanillaClientInputMappingFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addBlockSelectButton(::TouchInputMapping& touchMapping) const;

    MCNAPI void _addClassicDPadButtons(::TouchInputMapping& touchMapping, bool sneak, bool jump) const;

    MCNAPI void _addDebugChords(::std::vector<::ChordButtonMapping>& result);

    MCNAPI void
    _addDebugKeyboardControls(::KeyboardInputMapping& keyboardMapping, ::MouseInputMapping& mouseMapping) const;

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

    MCNAPI void _addInvariantGamePlayGameControllerControls(::GameControllerInputMapping& gameControllerMapping);

    MCNAPI void _addInvariantGamePlayTouchControls(::TouchInputMapping& touchMapping) const;

    MCNAPI void _addInvariantKeyboardControls(
        ::KeyboardInputMapping& keyboardMapping,
        ::MouseInputMapping&    mouseMapping,
        bool                    isEmoteMapping
    ) const;

    MCNAPI void _addNewTouchControlsActionButtons(::TouchInputMapping& touchMapping) const;

    MCNAPI void _addSharedGamePlayGameControllerControls(::GameControllerInputMapping& gameControllerMapping);

    MCNAPI void _bindActionToGameControllerInput(
        ::GameControllerInputMapping&   map,
        ::GamePadRemappingLayout const& layout,
        ::std::string const&            buttonID,
        ::Remapping::ActionEnum         action,
        float                           triggerThreshold,
        float                           repeatInterval
    ) const;

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

    MCNAPI ::TestAutoInputMapping _createBedTestAutoInputMapping();

    MCNAPI ::TouchInputMapping _createBedTouchMapping();

    MCNAPI ::GameControllerInputMapping _createBoatAndMinecartGameControllerMapping();

    MCNAPI void _createBoatKeyboardAndMouseMapping(
        ::KeyboardInputMapping& boatKeyboardMapping,
        ::MouseInputMapping&    boatMouseMapping
    );

    MCNAPI ::TestAutoInputMapping _createBoatTestAutoInputMapping();

    MCNAPI ::TouchInputMapping _createBoatTouchMapping();

    MCNAPI void
    _createDeathKeyboardAndMouseMapping(::KeyboardInputMapping& keyboardMapping, ::MouseInputMapping& mouseMapping);

    MCNAPI ::TouchInputMapping _createDeathTouchMapping();

    MCNAPI ::GameControllerInputMapping _createEmoteGameControllerMapping();

    MCNAPI void _createExpediateEmoteKeyboardAndMouseMapping(
        ::KeyboardInputMapping& emoteKeyboardMapping,
        ::MouseInputMapping&    emoteMouseMapping
    );

    MCNAPI ::GameControllerInputMapping _createFlyingGameControllerMapping();

    MCNAPI ::TouchInputMapping _createFlyingTouchMapping();

    MCNAPI ::GameControllerInputMapping _createGazeMouseControllerMapping();

    MCNAPI ::GameControllerInputMapping _createGazeScreenGameControllerMapping();

    MCNAPI ::TouchInputMapping _createInScaffoldingTouchMapping();

    MCNAPI ::GameControllerInputMapping _createInWaterGameControllerMapping();

    MCNAPI ::TouchInputMapping _createInWaterTouchMapping();

    MCNAPI ::TouchInputMapping _createMinecartTouchMapping();

    MCNAPI ::std::vector<::ChordButtonMapping> _createNormalGamePlayChordMapping(bool withDropAll);

    MCNAPI ::std::vector<::DeviceButtonMapping> _createNormalGamePlayDeviceButtonMapping();

    MCNAPI ::GameControllerInputMapping _createNormalGamePlayGameControllerMapping();

    MCNAPI ::TestAutoInputMapping _createNormalGamePlayTestAutoInputMapping();

    MCNAPI ::TouchInputMapping _createNormalGamePlayTouchMapping();

    MCNAPI ::GameControllerInputMapping _createRideableGameControllerMapping();

    MCNAPI void _createRideableKeyboardAndMouseMapping(
        ::KeyboardInputMapping& rideableKeyboardMapping,
        ::MouseInputMapping&    rideableMouseMapping
    );

    MCNAPI ::TouchInputMapping _createRideableTouchMapping();

    MCNAPI ::std::vector<::ChordButtonMapping> _createScreenChordMapping();

    MCNAPI ::GameControllerInputMapping _createScreenGameControllerMapping();

    MCNAPI void _createScreenKeyboardAndMouseMapping(
        ::KeyboardInputMapping& screenKeyboardMapping,
        ::MouseInputMapping&    screenMouseMapping
    );

    MCNAPI ::KeyboardInputMapping _createScreenKeyboardMapping();

    MCNAPI ::MouseInputMapping _createScreenMouseMapping();

    MCNAPI ::TestAutoInputMapping _createScreenTestAutoInputMapping();

    MCNAPI ::GameControllerInputMapping _createSpectatorModeGameControllerMapping();

    MCNAPI void _createSpectatorModeKeyboardAndMouseMapping(
        ::KeyboardInputMapping& spectatorModeGamePlayKeyboardMapping,
        ::MouseInputMapping&    spectatorModeGamePlayMouseMapping
    );

    MCNAPI ::TestAutoInputMapping _createSpectatorModeTestAutoInputMapping();

    MCNAPI ::TouchInputMapping _createSpectatorModeTouchMapping();

    MCNAPI ::GameControllerInputMapping _createSwimmingGameControllerMapping();

    MCNAPI void _createSwimmingKeyboardAndMouseMapping(
        ::KeyboardInputMapping& swimmingKeyboardMapping,
        ::MouseInputMapping&    swimmingMouseMapping
    );

    MCNAPI bool _hasSwappedJumpAndSneak() const;

    MCNAPI bool _isUsingActionButtons() const;

    MCNAPI bool _isUsingNewTouchControls() const;

    MCNAPI void _populateFullKeyboardDefaults(::RemappingLayout& layout) const;

    MCNAPI void _populateGamepadDefaults(::RemappingLayout& layout) const;

    MCNAPI void _populateKeyboardDefaults(::RemappingLayout& layout) const;

    MCNAPI bool _shouldAddBinding(
        ::std::string                                                   action,
        int                                                             key,
        ::std::unordered_map<::std::string, ::std::unordered_set<int>>& actionToKeyMap
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $createInputMappingTemplates(::IOptions& options);

    MCNAPI void $_updateKeyboardAndMouseControls(::IOptions& options);

    MCNAPI void $_updateGameControllerControls();

    MCNAPI void $_updateTouchMappingControls();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
