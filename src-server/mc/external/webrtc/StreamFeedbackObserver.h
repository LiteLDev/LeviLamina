#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class StreamFeedbackObserver {
public:
    // StreamFeedbackObserver inner types declare
    // clang-format off
    struct StreamPacketInfo;
    // clang-format on
    
    // StreamFeedbackObserver inner types define
    struct StreamPacketInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkab5e8f;
        ::ll::UntypedStorage<4, 8> mUnkd0ee77;
        ::ll::UntypedStorage<2, 2> mUnkc678ee;
        ::ll::UntypedStorage<1, 1> mUnk70e280;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        StreamPacketInfo& operator=(StreamPacketInfo const&);
        StreamPacketInfo(StreamPacketInfo const&);
        StreamPacketInfo();
    
    };
    
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StreamFeedbackObserver() = default;

    // vIndex: 1
    virtual void OnPacketFeedbackVector(::std::vector<::webrtc::StreamFeedbackObserver::StreamPacketInfo>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
