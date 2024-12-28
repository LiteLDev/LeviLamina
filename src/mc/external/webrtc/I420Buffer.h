#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class I420BufferInterface; }
// clang-format on

namespace webrtc {

class I420Buffer {
public:
    // prevent constructor by default
    I420Buffer& operator=(I420Buffer const&);
    I420Buffer(I420Buffer const&);
    I420Buffer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void CropAndScaleFrom(::webrtc::I420BufferInterface const&, int, int, int, int);

    MCAPI I420Buffer(int, int);

    MCAPI I420Buffer(int, int, int, int, int);

    MCAPI uchar* MutableDataU();

    MCAPI uchar* MutableDataV();

    MCAPI uchar* MutableDataY();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::scoped_refptr<::webrtc::I420Buffer> Create(int, int);

    MCAPI static void SetBlack(::webrtc::I420Buffer*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int, int);

    MCAPI void* $ctor(int, int, int, int, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
