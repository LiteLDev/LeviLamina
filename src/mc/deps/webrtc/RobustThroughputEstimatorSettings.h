#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class StructParametersParser; }
// clang-format on

namespace webrtc {

struct RobustThroughputEstimatorSettings {
public:
    // prevent constructor by default
    RobustThroughputEstimatorSettings& operator=(RobustThroughputEstimatorSettings const&);
    RobustThroughputEstimatorSettings(RobustThroughputEstimatorSettings const&);
    RobustThroughputEstimatorSettings();

public:
    // NOLINTBEGIN
    // symbol:
    // ?Parser@RobustThroughputEstimatorSettings@webrtc@@QEAA?AV?$unique_ptr@VStructParametersParser@webrtc@@U?$default_delete@VStructParametersParser@webrtc@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class webrtc::StructParametersParser> Parser();

    // symbol: ??0RobustThroughputEstimatorSettings@webrtc@@QEAA@PEBVFieldTrialsView@1@@Z
    MCAPI explicit RobustThroughputEstimatorSettings(class webrtc::FieldTrialsView const*);

    // symbol: ?kKey@RobustThroughputEstimatorSettings@webrtc@@2QBDB
    MCAPI static char const kKey[];

    // NOLINTEND
};

}; // namespace webrtc
