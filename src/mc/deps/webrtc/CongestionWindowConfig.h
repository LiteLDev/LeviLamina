#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StructParametersParser; }
// clang-format on

namespace webrtc {

struct CongestionWindowConfig {
public:
    // prevent constructor by default
    CongestionWindowConfig& operator=(CongestionWindowConfig const&);
    CongestionWindowConfig(CongestionWindowConfig const&);
    CongestionWindowConfig();

public:
    // NOLINTBEGIN
    // symbol:
    // ?Parser@CongestionWindowConfig@webrtc@@QEAA?AV?$unique_ptr@VStructParametersParser@webrtc@@U?$default_delete@VStructParametersParser@webrtc@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class webrtc::StructParametersParser> Parser();

    // symbol: ?Parse@CongestionWindowConfig@webrtc@@SA?AU12@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI static struct webrtc::CongestionWindowConfig Parse(std::string_view);

    // symbol: ?kKey@CongestionWindowConfig@webrtc@@2QBDB
    MCAPI static char const kKey[];

    // NOLINTEND
};

}; // namespace webrtc
