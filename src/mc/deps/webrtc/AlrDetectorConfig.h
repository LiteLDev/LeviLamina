#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StructParametersParser; }
// clang-format on

namespace webrtc {

struct AlrDetectorConfig {
public:
    // prevent constructor by default
    AlrDetectorConfig& operator=(AlrDetectorConfig const&);
    AlrDetectorConfig(AlrDetectorConfig const&);
    AlrDetectorConfig();

public:
    // NOLINTBEGIN
    // symbol:
    // ?Parser@AlrDetectorConfig@webrtc@@QEAA?AV?$unique_ptr@VStructParametersParser@webrtc@@U?$default_delete@VStructParametersParser@webrtc@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class webrtc::StructParametersParser> Parser();

    // NOLINTEND
};

}; // namespace webrtc
