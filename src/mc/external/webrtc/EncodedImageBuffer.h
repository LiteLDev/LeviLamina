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
    // vIndex: 4
    virtual uchar const* data() const /*override*/;

    // vIndex: 3
    virtual uchar* data() /*override*/;

    // vIndex: 5
    virtual uint64 size() const /*override*/;

    // vIndex: 2
    virtual ~EncodedImageBuffer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EncodedImageBuffer(uint64);

    MCNAPI EncodedImageBuffer(uchar const*, uint64);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::EncodedImageBuffer> Create(uchar const*, uint64);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64);

    MCNAPI void* $ctor(uchar const*, uint64);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
