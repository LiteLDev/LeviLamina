#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

struct AlrExperimentSettings {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::webrtc::AlrExperimentSettings>
    CreateFromFieldTrial(::webrtc::FieldTrialsView const&, ::std::string_view);

    MCAPI static bool MaxOneFieldTrialEnabled(::webrtc::FieldTrialsView const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& kScreenshareProbingBweExperimentName();

    MCAPI static ::std::string_view const& kStrictPacingAndProbingExperimentName();
    // NOLINTEND
};

} // namespace webrtc
