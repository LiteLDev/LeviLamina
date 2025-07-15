#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/I420BufferInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

namespace webrtc {

class I420Buffer : public ::webrtc::I420BufferInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc96550;
    ::ll::UntypedStorage<4, 4> mUnkf64d68;
    ::ll::UntypedStorage<4, 4> mUnk3d7a55;
    ::ll::UntypedStorage<4, 4> mUnk60e8dd;
    ::ll::UntypedStorage<4, 4> mUnk1e98c0;
    ::ll::UntypedStorage<8, 8> mUnkb49aa3;
    // NOLINTEND

public:
    // prevent constructor by default
    I420Buffer& operator=(I420Buffer const&);
    I420Buffer(I420Buffer const&);
    I420Buffer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual int width() const /*override*/;

    // vIndex: 5
    virtual int height() const /*override*/;

    // vIndex: 15
    virtual uchar const* DataY() const /*override*/;

    // vIndex: 16
    virtual uchar const* DataU() const /*override*/;

    // vIndex: 17
    virtual uchar const* DataV() const /*override*/;

    // vIndex: 12
    virtual int StrideY() const /*override*/;

    // vIndex: 13
    virtual int StrideU() const /*override*/;

    // vIndex: 14
    virtual int StrideV() const /*override*/;

    // vIndex: 2
    virtual ~I420Buffer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CropAndScaleFrom(
        ::webrtc::I420BufferInterface const& src,
        int                                  offset_x,
        int                                  offset_y,
        int                                  crop_width,
        int                                  crop_height
    );

    MCNAPI I420Buffer(int width, int height);

    MCNAPI I420Buffer(int width, int height, int stride_y, int stride_u, int stride_v);

    MCNAPI uchar* MutableDataU();

    MCNAPI uchar* MutableDataV();

    MCNAPI uchar* MutableDataY();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::I420Buffer> Create(int width, int height);

    MCNAPI static void SetBlack(::webrtc::I420Buffer* buffer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int width, int height);

    MCNAPI void* $ctor(int width, int height, int stride_y, int stride_u, int stride_v);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $width() const;

    MCNAPI int $height() const;

    MCNAPI uchar const* $DataY() const;

    MCNAPI uchar const* $DataU() const;

    MCNAPI uchar const* $DataV() const;

    MCNAPI int $StrideY() const;

    MCNAPI int $StrideU() const;

    MCNAPI int $StrideV() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
