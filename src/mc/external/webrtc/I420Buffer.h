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
    I420Buffer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CropAndScaleFrom(::webrtc::I420BufferInterface const&, int, int, int, int);

    MCNAPI I420Buffer(int, int);

    MCNAPI I420Buffer(int, int, int, int, int);

    MCNAPI uchar* MutableDataU();

    MCNAPI uchar* MutableDataV();

    MCNAPI uchar* MutableDataY();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::I420Buffer> Create(int, int);

    MCNAPI static void SetBlack(::webrtc::I420Buffer*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int, int);

    MCNAPI void* $ctor(int, int, int, int, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
