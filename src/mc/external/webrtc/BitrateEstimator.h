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
    BitrateEstimator& operator=(BitrateEstimator const&);
    BitrateEstimator(BitrateEstimator const&);
    BitrateEstimator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BitrateEstimator(::webrtc::FieldTrialsView const*);

    MCAPI ::std::optional<::webrtc::DataRate> PeekRate() const;

    MCAPI float UpdateWindow(int64, int, int, bool*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
