#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StructParametersParser; }
// clang-format on

namespace webrtc {

struct AlrDetectorConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7ac0eb;
    ::ll::UntypedStorage<8, 8> mUnk582f3b;
    ::ll::UntypedStorage<8, 8> mUnka5c3a4;
    // NOLINTEND

public:
    // prevent constructor by default
    AlrDetectorConfig& operator=(AlrDetectorConfig const&);
    AlrDetectorConfig(AlrDetectorConfig const&);
    AlrDetectorConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::StructParametersParser> Parser();
    // NOLINTEND

};

}
