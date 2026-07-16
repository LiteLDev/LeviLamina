#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/BufferT.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct NetworkStateEstimate; }
// clang-format on

namespace webrtc::rtcp {

class RemoteEstimateSerializer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool
    Parse(::webrtc::ArrayView<uchar const, 18446744073709546905>, ::webrtc::NetworkStateEstimate*) const = 0;

    virtual ::webrtc::BufferT<uchar, 0> Serialize(::webrtc::NetworkStateEstimate const&) const = 0;

    virtual ~RemoteEstimateSerializer() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc::rtcp
