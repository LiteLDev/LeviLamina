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
    virtual ~EncodedImageBuffer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EncodedImageBuffer(uint64 size);

    MCNAPI EncodedImageBuffer(uchar const* data, uint64 size);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::EncodedImageBuffer> Create(uchar const* data, uint64 size);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64 size);

    MCNAPI void* $ctor(uchar const* data, uint64 size);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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

}
