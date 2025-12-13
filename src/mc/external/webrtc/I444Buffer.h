#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/I444BufferInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class I420BufferInterface; }
// clang-format on

namespace webrtc {

class I444Buffer : public ::webrtc::I444BufferInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk1f23fb;
    ::ll::UntypedStorage<4, 4> mUnk3b62b8;
    ::ll::UntypedStorage<4, 4> mUnkbda6d9;
    ::ll::UntypedStorage<4, 4> mUnk35864a;
    ::ll::UntypedStorage<4, 4> mUnk503bfb;
    ::ll::UntypedStorage<8, 8> mUnk3b56e0;
    // NOLINTEND

public:
    // prevent constructor by default
    I444Buffer& operator=(I444Buffer const&);
    I444Buffer(I444Buffer const&);
    I444Buffer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::scoped_refptr<::webrtc::I420BufferInterface> ToI420() /*override*/;

    virtual ::webrtc::I420BufferInterface const* GetI420() const /*override*/;

    virtual int width() const /*override*/;

    virtual int height() const /*override*/;

    virtual uchar const* DataY() const /*override*/;

    virtual uchar const* DataU() const /*override*/;

    virtual uchar const* DataV() const /*override*/;

    virtual int StrideY() const /*override*/;

    virtual int StrideU() const /*override*/;

    virtual int StrideV() const /*override*/;

    virtual ~I444Buffer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
