#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/GameControllerInputMapping.h"
#include "mc/deps/input/KeyboardInputMapping.h"
#include "mc/deps/input/MouseInputMapping.h"
#include "mc/deps/input/TestAutoInputMapping.h"
#include "mc/deps/input/TouchInputMapping.h"

// auto generated forward declare list
// clang-format off
struct ChordButtonMapping;
struct DeviceButtonMapping;
// clang-format on

struct InputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::KeyboardInputMapping>               keyboardMapping;
    ::ll::TypedStorage<8, 80, ::MouseInputMapping>                  mouseMapping;
    ::ll::TypedStorage<8, 352, ::TouchInputMapping>                 touchMapping;
    ::ll::TypedStorage<8, 128, ::GameControllerInputMapping>        gamePadMapping;
    ::ll::TypedStorage<8, 24, ::TestAutoInputMapping>               testAutoMapping;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChordButtonMapping>>  chordButtonMapping;
    ::ll::TypedStorage<8, 24, ::std::vector<::DeviceButtonMapping>> deviceButtonMapping;
    // NOLINTEND

public:
    // prevent constructor by default
    InputMapping& operator=(InputMapping const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InputMapping();

    MCAPI InputMapping(::InputMapping const&);

    MCAPI InputMapping(
        ::KeyboardInputMapping&               aKeyboardMapping,
        ::MouseInputMapping&                  mouseMapping,
        ::TouchInputMapping&                  aTouchMapping,
        ::GameControllerInputMapping&         aGamePadMapping,
        ::TestAutoInputMapping&               aTestAutoMapping,
        ::std::vector<::ChordButtonMapping>&  aChordButtonMapping,
        ::std::vector<::DeviceButtonMapping>& aDeviceButtonMapping
    );

    MCAPI ~InputMapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::InputMapping const&);

    MCAPI void* $ctor(
        ::KeyboardInputMapping&               aKeyboardMapping,
        ::MouseInputMapping&                  mouseMapping,
        ::TouchInputMapping&                  aTouchMapping,
        ::GameControllerInputMapping&         aGamePadMapping,
        ::TestAutoInputMapping&               aTestAutoMapping,
        ::std::vector<::ChordButtonMapping>&  aChordButtonMapping,
        ::std::vector<::DeviceButtonMapping>& aDeviceButtonMapping
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
