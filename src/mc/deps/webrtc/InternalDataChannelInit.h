#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct DataChannelInit; }
// clang-format on

namespace webrtc {

struct InternalDataChannelInit {
public:
    // prevent constructor by default
    InternalDataChannelInit& operator=(InternalDataChannelInit const&);
    InternalDataChannelInit(InternalDataChannelInit const&);
    InternalDataChannelInit();

public:
    // NOLINTBEGIN
    // symbol: ??0InternalDataChannelInit@webrtc@@QEAA@AEBUDataChannelInit@1@@Z
    MCAPI explicit InternalDataChannelInit(struct webrtc::DataChannelInit const&);

    // symbol: ??1InternalDataChannelInit@webrtc@@QEAA@XZ
    MCAPI ~InternalDataChannelInit();

    // NOLINTEND
};

}; // namespace webrtc
