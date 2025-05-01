#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class BitrateEstimator; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

class AcknowledgedBitrateEstimator {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AcknowledgedBitrateEstimator(::webrtc::FieldTrialsView const*);

    MCNAPI
    AcknowledgedBitrateEstimator(::webrtc::FieldTrialsView const*, ::std::unique_ptr<::webrtc::BitrateEstimator>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const*);

    MCNAPI void* $ctor(::webrtc::FieldTrialsView const*, ::std::unique_ptr<::webrtc::BitrateEstimator>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
