#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct DataBuffer; }
// clang-format on

namespace webrtc {

class DataChannelObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnStateChange() = 0;

    virtual void OnMessage(::webrtc::DataBuffer const&) = 0;

    virtual void OnBufferedAmountChange(uint64);

    virtual bool IsOkToCallOnTheNetworkThread();

    virtual ~DataChannelObserver() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
