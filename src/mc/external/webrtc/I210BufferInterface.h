#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/PlanarYuv16BBuffer.h"
#include "mc/external/webrtc/VideoFrameBuffer.h"

namespace webrtc {

class I210BufferInterface : public ::webrtc::PlanarYuv16BBuffer {
public:
    // prevent constructor by default
    I210BufferInterface& operator=(I210BufferInterface const&);
    I210BufferInterface(I210BufferInterface const&);
    I210BufferInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::webrtc::VideoFrameBuffer::Type type() const /*override*/;

    // vIndex: 10
    virtual int ChromaWidth() const /*override*/;

    // vIndex: 11
    virtual int ChromaHeight() const /*override*/;

    // vIndex: 2
    virtual ~I210BufferInterface() /*override*/;
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

    MCAPI int $ChromaWidth() const;

    MCAPI int $ChromaHeight() const;
    // NOLINTEND
};

} // namespace webrtc
