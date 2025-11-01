#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/NV12BufferInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class I420BufferInterface; }
// clang-format on

namespace webrtc {

class NV12Buffer : public ::webrtc::NV12BufferInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkea9769;
    ::ll::UntypedStorage<4, 4> mUnk7a2066;
    ::ll::UntypedStorage<4, 4> mUnkc4ac4f;
    ::ll::UntypedStorage<4, 4> mUnkc2838b;
    ::ll::UntypedStorage<8, 8> mUnkd38d17;
    // NOLINTEND

public:
    // prevent constructor by default
    NV12Buffer& operator=(NV12Buffer const&);
    NV12Buffer(NV12Buffer const&);
    NV12Buffer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual ::webrtc::scoped_refptr<::webrtc::I420BufferInterface> ToI420() /*override*/;

    // vIndex: 4
    virtual int width() const /*override*/;

    // vIndex: 5
    virtual int height() const /*override*/;

    // vIndex: 12
    virtual int StrideY() const /*override*/;

    // vIndex: 13
    virtual int StrideUV() const /*override*/;

    // vIndex: 14
    virtual uchar const* DataY() const /*override*/;

    // vIndex: 15
    virtual uchar const* DataUV() const /*override*/;

    // vIndex: 2
    virtual ~NV12Buffer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
