#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/EncodedImage.h"

namespace webrtc {

class EncodedFrame : public ::webrtc::EncodedImage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>    mUnk44c8dc;
    ::ll::UntypedStorage<8, 40>   mUnkb61d62;
    ::ll::UntypedStorage<1, 1>    mUnk3145ef;
    ::ll::UntypedStorage<8, 8>    mUnk500e37;
    ::ll::UntypedStorage<1, 1>    mUnk16d9a7;
    ::ll::UntypedStorage<8, 2008> mUnk1b4158;
    ::ll::UntypedStorage<4, 4>    mUnk948ed8;
    ::ll::UntypedStorage<8, 8>    mUnke15765;
    // NOLINTEND

public:
    // prevent constructor by default
    EncodedFrame& operator=(EncodedFrame const&);
    EncodedFrame(EncodedFrame const&);
    EncodedFrame();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EncodedFrame() = default;

    virtual int64 ReceivedTime() const;

    virtual int64 RenderTime() const;

    virtual bool delayed_by_retransmission() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
