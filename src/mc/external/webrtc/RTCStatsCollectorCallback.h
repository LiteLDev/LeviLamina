#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCStatsReport; }
// clang-format on

namespace webrtc {

class RTCStatsCollectorCallback : public ::webrtc::RefCountInterface {
public:
    // prevent constructor by default
    RTCStatsCollectorCallback& operator=(RTCStatsCollectorCallback const&);
    RTCStatsCollectorCallback(RTCStatsCollectorCallback const&);
    RTCStatsCollectorCallback();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~RTCStatsCollectorCallback() /*override*/;

    // vIndex: 3
    virtual void OnStatsDelivered(::webrtc::scoped_refptr<::webrtc::RTCStatsReport const> const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
