#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct DataBuffer; }
// clang-format on

namespace webrtc {

class PacketQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk61366b;
    ::ll::UntypedStorage<8, 8>  mUnkf0b2ce;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketQueue& operator=(PacketQueue const&);
    PacketQueue(PacketQueue const&);
    PacketQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Clear();

    MCNAPI bool Empty() const;

    MCNAPI ::std::unique_ptr<::webrtc::DataBuffer> PopFront();

    MCNAPI void PushBack(::std::unique_ptr<::webrtc::DataBuffer> packet);

    MCNAPI ~PacketQueue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
