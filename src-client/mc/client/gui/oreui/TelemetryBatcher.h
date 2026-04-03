#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ITelemetry; }
namespace Social::Events { class OptionChange; }
// clang-format on

namespace OreUI {

class TelemetryBatcher {
public:
    // TelemetryBatcher inner types define
    using OptionValue = ::std::variant<bool, int, float, ::std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Social::Events::OptionChange>> mTrackedOptions;
    ::ll::TypedStorage<8, 8, ::OreUI::ITelemetry&>                                                 mTelemetry;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryBatcher& operator=(TelemetryBatcher const&);
    TelemetryBatcher(TelemetryBatcher const&);
    TelemetryBatcher();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unordered_map<::std::string, ::Social::Events::OptionChange> getTrackedOptionChanges() const;

    MCAPI ::std::unordered_map<::std::string, int> getTrackedOptions() const;

    MCAPI ~TelemetryBatcher();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
