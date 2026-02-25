#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ITelemetry; }
namespace OreUI { class OptionChange; }
// clang-format on

namespace OreUI {

class TelemetryBatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::OreUI::OptionChange>>>
                                                   mTrackedOptions;
    ::ll::TypedStorage<8, 8, ::OreUI::ITelemetry&> mTelemetry;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryBatcher& operator=(TelemetryBatcher const&);
    TelemetryBatcher(TelemetryBatcher const&);
    TelemetryBatcher();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void sendTrackedTelemetry(::std::string const& optionsGroupName);

    MCAPI void trackOptionChanged(::std::string const& optionName, int oldOption, int newOption);
    // NOLINTEND
};

} // namespace OreUI
