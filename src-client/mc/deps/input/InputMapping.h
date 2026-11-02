#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/GameControllerInputMapping.h"
#include "mc/deps/input/KeyboardInputMapping.h"
#include "mc/deps/input/MouseInputMapping.h"
#include "mc/deps/input/TestAutoInputMapping.h"
#include "mc/deps/input/TouchInputMapping.h"
#include "mc/deps/input/enums/DirectionId.h"

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
    MCNAPI InputMapping();

    MCNAPI InputMapping(::InputMapping const&);

    MCNAPI InputMapping(
        ::KeyboardInputMapping&               aKeyboardMapping,
        ::MouseInputMapping&                  mouseMapping,
        ::TouchInputMapping&                  aTouchMapping,
        ::GameControllerInputMapping&         aGamePadMapping,
        ::TestAutoInputMapping&               aTestAutoMapping,
        ::std::vector<::ChordButtonMapping>&  aChordButtonMapping,
        ::std::vector<::DeviceButtonMapping>& aDeviceButtonMapping
    );

    MCNAPI ::std::vector<::std::string> getButtonDifference(::InputMapping const* otherMapping) const;

    MCNAPI ::std::vector<::DirectionId> getStickDifference(::InputMapping const* otherMapping) const;

    MCNAPI ~InputMapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::InputMapping const&);

    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND
};
