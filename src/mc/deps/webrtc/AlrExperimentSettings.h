#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

struct AlrExperimentSettings {
public:
    // prevent constructor by default
    AlrExperimentSettings& operator=(AlrExperimentSettings const&);
    AlrExperimentSettings(AlrExperimentSettings const&);
    AlrExperimentSettings();

public:
    // NOLINTBEGIN
    // symbol:
    // ?CreateFromFieldTrial@AlrExperimentSettings@webrtc@@SA?AV?$optional@UAlrExperimentSettings@webrtc@@@std@@AEBVFieldTrialsView@2@V?$basic_string_view@DU?$char_traits@D@std@@@4@@Z
    MCAPI static std::optional<struct webrtc::AlrExperimentSettings>
    CreateFromFieldTrial(class webrtc::FieldTrialsView const&, std::string_view);

    // symbol: ?MaxOneFieldTrialEnabled@AlrExperimentSettings@webrtc@@SA_NAEBVFieldTrialsView@2@@Z
    MCAPI static bool MaxOneFieldTrialEnabled(class webrtc::FieldTrialsView const&);

    // symbol: ?kScreenshareProbingBweExperimentName@AlrExperimentSettings@webrtc@@2QBDB
    MCAPI static char const kScreenshareProbingBweExperimentName[];

    // symbol: ?kStrictPacingAndProbingExperimentName@AlrExperimentSettings@webrtc@@2QBDB
    MCAPI static char const kStrictPacingAndProbingExperimentName[];

    // NOLINTEND
};

}; // namespace webrtc
