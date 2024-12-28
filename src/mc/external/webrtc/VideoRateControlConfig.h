#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StructParametersParser; }
// clang-format on

namespace webrtc {

struct VideoRateControlConfig {
public:
    // prevent constructor by default
    VideoRateControlConfig& operator=(VideoRateControlConfig const&);
    VideoRateControlConfig(VideoRateControlConfig const&);
    VideoRateControlConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::webrtc::StructParametersParser> Parser();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> kKey();
    // NOLINTEND
};

} // namespace webrtc
