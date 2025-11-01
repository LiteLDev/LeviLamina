#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class StructParametersParser; }
// clang-format on

namespace webrtc {

struct TrendlineEstimatorSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk9bba9f;
    ::ll::UntypedStorage<1, 1> mUnkfc7466;
    ::ll::UntypedStorage<4, 4> mUnka61f5b;
    ::ll::UntypedStorage<4, 4> mUnkb683e6;
    ::ll::UntypedStorage<8, 8> mUnkefee6c;
    ::ll::UntypedStorage<4, 4> mUnk3c0e2c;
    // NOLINTEND

public:
    // prevent constructor by default
    TrendlineEstimatorSettings& operator=(TrendlineEstimatorSettings const&);
    TrendlineEstimatorSettings(TrendlineEstimatorSettings const&);
    TrendlineEstimatorSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::StructParametersParser> Parser();

    MCNAPI explicit TrendlineEstimatorSettings(::webrtc::FieldTrialsView const* key_value_config);
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

}
