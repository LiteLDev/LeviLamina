#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoFrameBuffer.h"

namespace webrtc {

class BiplanarYuvBuffer : public ::webrtc::VideoFrameBuffer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int ChromaWidth() const = 0;

    virtual int ChromaHeight() const = 0;

    virtual int StrideY() const = 0;

    virtual int StrideUV() const = 0;

    virtual ~BiplanarYuvBuffer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
