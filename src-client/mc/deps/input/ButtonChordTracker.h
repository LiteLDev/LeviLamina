#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/ChordTrackingResult.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
struct ChordButtonMapping;
// clang-format on

class ButtonChordTracker {
public:
    // ButtonChordTracker inner types declare
    // clang-format off
    struct ChordButtonDetails;
    struct ChordHoldInfo;
    struct TrackerMappingAndState;
    // clang-format on

    // ButtonChordTracker inner types define
    struct ChordButtonDetails {};

    struct ChordHoldInfo {};

    struct TrackerMappingAndState {};

    using ChordMap = ::std::unordered_multimap<uint, ::ButtonChordTracker::ChordButtonDetails>;

    using ChordState = ::std::vector<int>;

    using ButtonSequences = ::std::vector<::std::vector<uint>>;

    using ButtonLastInputTimes = ::std::map<uint, ::std::chrono::steady_clock::time_point>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::InputEventQueue&>                                        mQueue;
    ::ll::TypedStorage<8, 24, ::std::vector<::ButtonChordTracker::ChordButtonDetails*>> mChordsDown;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::ButtonChordTracker::TrackerMappingAndState>>
                                                                                               mPerIdTrackerData;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::ButtonChordTracker::ChordHoldInfo>> mMinHoldTimeTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    ButtonChordTracker& operator=(ButtonChordTracker const&);
    ButtonChordTracker(ButtonChordTracker const&);
    ButtonChordTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _checkChordHoldDurations();

    MCAPI void _raiseLongestChordSequences(::ButtonChordTracker::TrackerMappingAndState& trackerData, int controllerId);

    MCAPI void changeControllerId(int oldId, int newId);

    MCAPI void setMapping(::std::vector<::ChordButtonMapping> const& inputMapping, int controllerId);

    MCAPI ::ChordTrackingResult trackButtonEvent(uint buttonId, ::ButtonState state, int controllerId);
    // NOLINTEND
};
