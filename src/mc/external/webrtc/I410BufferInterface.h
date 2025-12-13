#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/PlanarYuv16BBuffer.h"
#include "mc/external/webrtc/VideoFrameBuffer.h"

namespace webrtc {

class I410BufferInterface : public ::webrtc::PlanarYuv16BBuffer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::VideoFrameBuffer::Type type() const /*override*/;

    virtual int ChromaWidth() const /*override*/;

    virtual int ChromaHeight() const /*override*/;

    virtual ~I410BufferInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
