#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/I420BufferInterface.h"
#include "mc/external/webrtc/VideoFrameBuffer.h"

namespace webrtc {

class I420ABufferInterface : public ::webrtc::I420BufferInterface {
public:
    // prevent constructor by default
    I420ABufferInterface& operator=(I420ABufferInterface const&);
    I420ABufferInterface(I420ABufferInterface const&);
    I420ABufferInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::webrtc::VideoFrameBuffer::Type type() const /*override*/;

    // vIndex: 18
    virtual uchar const* DataA() const = 0;

    // vIndex: 19
    virtual int StrideA() const = 0;

    // vIndex: 2
    virtual ~I420ABufferInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::webrtc::VideoFrameBuffer::Type $type() const;
    // NOLINTEND
};

} // namespace webrtc
