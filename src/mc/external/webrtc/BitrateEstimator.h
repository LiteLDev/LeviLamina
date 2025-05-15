#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

class BitrateEstimator {
public:
    // prevent constructor by default
    BitrateEstimator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BitrateEstimator(::webrtc::FieldTrialsView const*);

    MCNAPI ::std::optional<::webrtc::DataRate> PeekRate() const;

    MCNAPI float UpdateWindow(int64, int, int, bool*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
