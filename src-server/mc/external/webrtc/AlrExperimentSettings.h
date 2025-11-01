#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

struct AlrExperimentSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk27f7c1;
    ::ll::UntypedStorage<8, 8> mUnkb93548;
    ::ll::UntypedStorage<4, 4> mUnkd2a113;
    ::ll::UntypedStorage<4, 4> mUnkdcdea0;
    ::ll::UntypedStorage<4, 4> mUnkebc91e;
    ::ll::UntypedStorage<4, 4> mUnk66003b;
    // NOLINTEND

public:
    // prevent constructor by default
    AlrExperimentSettings& operator=(AlrExperimentSettings const&);
    AlrExperimentSettings(AlrExperimentSettings const&);
    AlrExperimentSettings();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::webrtc::AlrExperimentSettings> CreateFromFieldTrial(::webrtc::FieldTrialsView const& key_value_config, ::std::string_view experiment_name);

    MCNAPI static bool MaxOneFieldTrialEnabled(::webrtc::FieldTrialsView const& key_value_config);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& kScreenshareProbingBweExperimentName();

    MCNAPI static ::std::string_view const& kStrictPacingAndProbingExperimentName();
    // NOLINTEND

};

}
