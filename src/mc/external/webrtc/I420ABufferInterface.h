#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/I420BufferInterface.h"
#include "mc/external/webrtc/VideoFrameBuffer.h"

namespace webrtc {

class I420ABufferInterface : public ::webrtc::I420BufferInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::VideoFrameBuffer::Type type() const /*override*/;

    virtual uchar const* DataA() const = 0;

    virtual int StrideA() const = 0;

    virtual ~I420ABufferInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
