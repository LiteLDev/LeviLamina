#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { struct TargetTransferRate; }
// clang-format on

namespace webrtc {

class TargetTransferRateObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TargetTransferRateObserver() = default;

    virtual void OnTargetTransferRate(::webrtc::TargetTransferRate) = 0;

    virtual void OnStartRateUpdate(::webrtc::DataRate);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
