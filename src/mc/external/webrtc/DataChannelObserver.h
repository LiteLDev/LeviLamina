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
    // vIndex: 0
    virtual void OnStateChange() = 0;

    // vIndex: 1
    virtual void OnMessage(::webrtc::DataBuffer const&) = 0;

    // vIndex: 2
    virtual void OnBufferedAmountChange(uint64);

    // vIndex: 3
    virtual bool IsOkToCallOnTheNetworkThread();

    // vIndex: 4
    virtual ~DataChannelObserver() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $IsOkToCallOnTheNetworkThread();
    // NOLINTEND
};

} // namespace webrtc
