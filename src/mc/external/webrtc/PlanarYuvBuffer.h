#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoFrameBuffer.h"

namespace webrtc {

class PlanarYuvBuffer : public ::webrtc::VideoFrameBuffer {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 10
    virtual int ChromaWidth() const = 0;

    // vIndex: 11
    virtual int ChromaHeight() const = 0;

    // vIndex: 12
    virtual int StrideY() const = 0;

    // vIndex: 13
    virtual int StrideU() const = 0;

    // vIndex: 14
    virtual int StrideV() const = 0;

    // vIndex: 2
    virtual ~PlanarYuvBuffer() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
