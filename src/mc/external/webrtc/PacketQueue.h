#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct DataBuffer; }
// clang-format on

namespace webrtc {

struct PacketQueue {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Clear();

    MCNAPI bool Empty() const;

    MCNAPI ::std::unique_ptr<::webrtc::DataBuffer> PopFront();

    MCNAPI void PushBack(::std::unique_ptr<::webrtc::DataBuffer>);

    MCNAPI ~PacketQueue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
