#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/PlanarYuv8Buffer.h"
#include "mc/external/webrtc/VideoFrameBuffer.h"
#include "mc/external/webrtc/scoped_refptr.h"

namespace webrtc {

class I420BufferInterface : public ::webrtc::PlanarYuv8Buffer {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::webrtc::VideoFrameBuffer::Type type() const /*override*/;

    // vIndex: 10
    virtual int ChromaWidth() const /*override*/;

    // vIndex: 11
    virtual int ChromaHeight() const /*override*/;

    // vIndex: 6
    virtual ::webrtc::scoped_refptr<::webrtc::I420BufferInterface> ToI420() /*override*/;

    // vIndex: 7
    virtual ::webrtc::I420BufferInterface const* GetI420() const /*override*/;

    // vIndex: 2
    virtual ~I420BufferInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
