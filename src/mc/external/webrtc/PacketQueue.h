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
    MCAPI void Clear();

    MCAPI bool Empty() const;

    MCAPI ::std::unique_ptr<::webrtc::DataBuffer> PopFront();

    MCAPI void PushBack(::std::unique_ptr<::webrtc::DataBuffer>);

    MCAPI ~PacketQueue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
