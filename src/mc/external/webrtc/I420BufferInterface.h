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
    virtual ::webrtc::VideoFrameBuffer::Type type() const /*override*/;

    virtual int ChromaWidth() const /*override*/;

    virtual int ChromaHeight() const /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::I420BufferInterface> ToI420() /*override*/;

    virtual ::webrtc::I420BufferInterface const* GetI420() const /*override*/;

    virtual ~I420BufferInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::VideoFrameBuffer::Type $type() const;

    MCNAPI int $ChromaWidth() const;

    MCNAPI int $ChromaHeight() const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::I420BufferInterface> $ToI420();

    MCNAPI ::webrtc::I420BufferInterface const* $GetI420() const;


    // NOLINTEND
};

} // namespace webrtc
