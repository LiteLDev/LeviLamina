#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/EncodedImageBufferInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

namespace webrtc {

class EncodedImageBuffer : public ::webrtc::EncodedImageBufferInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd194c8;
    ::ll::UntypedStorage<8, 8> mUnk665d2c;
    // NOLINTEND

public:
    // prevent constructor by default
    EncodedImageBuffer& operator=(EncodedImageBuffer const&);
    EncodedImageBuffer(EncodedImageBuffer const&);
    EncodedImageBuffer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual uchar const* data() const /*override*/;

    virtual uchar* data() /*override*/;

    virtual uint64 size() const /*override*/;

    virtual ~EncodedImageBuffer() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::EncodedImageBuffer> Create(uchar const* data, uint64 size);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uchar const* $data() const;

    MCNAPI uchar* $data();

    MCNAPI uint64 $size() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
