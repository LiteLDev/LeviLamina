#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StructParametersParser; }
// clang-format on

namespace webrtc {

class VideoRateControlConfig {
public:
    // prevent constructor by default
    VideoRateControlConfig& operator=(VideoRateControlConfig const&);
    VideoRateControlConfig(VideoRateControlConfig const&);
    VideoRateControlConfig();

public:
    // NOLINTBEGIN
    // symbol:
    // ?Parser@VideoRateControlConfig@webrtc@@QEAA?AV?$unique_ptr@VStructParametersParser@webrtc@@U?$default_delete@VStructParametersParser@webrtc@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class webrtc::StructParametersParser> Parser();

    // symbol: ?kKey@VideoRateControlConfig@webrtc@@2QBDB
    MCAPI static char const kKey[];

    // NOLINTEND
};

}; // namespace webrtc
