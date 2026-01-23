#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

struct RobustThroughputEstimatorSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk17ddd9;
    ::ll::UntypedStorage<4, 4> mUnk1ab299;
    ::ll::UntypedStorage<4, 4> mUnk1ed21e;
    ::ll::UntypedStorage<8, 8> mUnkc83756;
    ::ll::UntypedStorage<8, 8> mUnkca1bbe;
    ::ll::UntypedStorage<4, 4> mUnk5bab0a;
    ::ll::UntypedStorage<8, 8> mUnkb98c4d;
    // NOLINTEND

public:
    // prevent constructor by default
    RobustThroughputEstimatorSettings& operator=(RobustThroughputEstimatorSettings const&);
    RobustThroughputEstimatorSettings(RobustThroughputEstimatorSettings const&);
    RobustThroughputEstimatorSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RobustThroughputEstimatorSettings(::webrtc::FieldTrialsView const* key_value_config);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kKey();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const* key_value_config);
    // NOLINTEND
};

} // namespace webrtc
