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
    // prevent constructor by default
    AcknowledgedBitrateEstimator& operator=(AcknowledgedBitrateEstimator const&);
    AcknowledgedBitrateEstimator(AcknowledgedBitrateEstimator const&);
    AcknowledgedBitrateEstimator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AcknowledgedBitrateEstimator(::webrtc::FieldTrialsView const*);

    MCAPI AcknowledgedBitrateEstimator(::webrtc::FieldTrialsView const*, ::std::unique_ptr<::webrtc::BitrateEstimator>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const*);

    MCAPI void* $ctor(::webrtc::FieldTrialsView const*, ::std::unique_ptr<::webrtc::BitrateEstimator>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
