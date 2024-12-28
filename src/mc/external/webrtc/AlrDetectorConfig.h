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
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::webrtc::StructParametersParser> Parser();
    // NOLINTEND
};

} // namespace webrtc
