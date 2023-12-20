#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct DataBuffer; }
// clang-format on

namespace webrtc {

class PacketQueue {
public:
    // prevent constructor by default
    PacketQueue& operator=(PacketQueue const&);
    PacketQueue(PacketQueue const&);
    PacketQueue();

public:
    // NOLINTBEGIN
    // symbol: ?Clear@PacketQueue@webrtc@@QEAAXXZ
    MCAPI void Clear();

    // symbol: ?Empty@PacketQueue@webrtc@@QEBA_NXZ
    MCAPI bool Empty() const;

    // symbol:
    // ?PopFront@PacketQueue@webrtc@@QEAA?AV?$unique_ptr@UDataBuffer@webrtc@@U?$default_delete@UDataBuffer@webrtc@@@std@@@std@@XZ
    MCAPI std::unique_ptr<struct webrtc::DataBuffer> PopFront();

    // symbol:
    // ?PushBack@PacketQueue@webrtc@@QEAAXV?$unique_ptr@UDataBuffer@webrtc@@U?$default_delete@UDataBuffer@webrtc@@@std@@@std@@@Z
    MCAPI void PushBack(std::unique_ptr<struct webrtc::DataBuffer>);

    // symbol:
    // ?PushFront@PacketQueue@webrtc@@QEAAXV?$unique_ptr@UDataBuffer@webrtc@@U?$default_delete@UDataBuffer@webrtc@@@std@@@std@@@Z
    MCAPI void PushFront(std::unique_ptr<struct webrtc::DataBuffer>);

    // symbol: ?Swap@PacketQueue@webrtc@@QEAAXPEAV12@@Z
    MCAPI void Swap(class webrtc::PacketQueue*);

    // symbol: ??1PacketQueue@webrtc@@QEAA@XZ
    MCAPI ~PacketQueue();

    // NOLINTEND
};

}; // namespace webrtc
