#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

class AcknowledgedBitrateEstimatorInterface {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::webrtc::AcknowledgedBitrateEstimatorInterface>
    Create(::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
