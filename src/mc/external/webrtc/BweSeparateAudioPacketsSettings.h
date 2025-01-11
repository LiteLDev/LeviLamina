#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class StructParametersParser; }
// clang-format on

namespace webrtc {

struct BweSeparateAudioPacketsSettings {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BweSeparateAudioPacketsSettings(::webrtc::FieldTrialsView const*);

    MCAPI ::std::unique_ptr<::webrtc::StructParametersParser> Parser();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> kKey();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const*);
    // NOLINTEND
};

} // namespace webrtc
