#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class StructParametersParser; }
// clang-format on

namespace webrtc {

class TrendlineEstimatorSettings {
public:
    // prevent constructor by default
    TrendlineEstimatorSettings& operator=(TrendlineEstimatorSettings const&);
    TrendlineEstimatorSettings(TrendlineEstimatorSettings const&);
    TrendlineEstimatorSettings();

public:
    // NOLINTBEGIN
    // symbol:
    // ?Parser@TrendlineEstimatorSettings@webrtc@@QEAA?AV?$unique_ptr@VStructParametersParser@webrtc@@U?$default_delete@VStructParametersParser@webrtc@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class webrtc::StructParametersParser> Parser();

    // symbol: ??0TrendlineEstimatorSettings@webrtc@@QEAA@PEBVFieldTrialsView@1@@Z
    MCAPI explicit TrendlineEstimatorSettings(class webrtc::FieldTrialsView const*);

    // symbol: ?kKey@TrendlineEstimatorSettings@webrtc@@2QBDB
    MCAPI static char const kKey[];

    // NOLINTEND
};

}; // namespace webrtc
