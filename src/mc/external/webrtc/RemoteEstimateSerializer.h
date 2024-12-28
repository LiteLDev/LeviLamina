#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/BufferT.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct NetworkStateEstimate; }
// clang-format on

namespace webrtc::rtcp {

class RemoteEstimateSerializer {
public:
    // prevent constructor by default
    RemoteEstimateSerializer& operator=(RemoteEstimateSerializer const&);
    RemoteEstimateSerializer(RemoteEstimateSerializer const&);
    RemoteEstimateSerializer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual bool Parse(::rtc::ArrayView<uchar const>, ::webrtc::NetworkStateEstimate*) const = 0;

    // vIndex: 1
    virtual ::rtc::BufferT<uchar, 0> Serialize(::webrtc::NetworkStateEstimate const&) const = 0;

    // vIndex: 2
    virtual ~RemoteEstimateSerializer();
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

} // namespace webrtc::rtcp
