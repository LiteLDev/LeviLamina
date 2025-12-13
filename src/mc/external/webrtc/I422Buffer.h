#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/I422BufferInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class I420BufferInterface; }
// clang-format on

namespace webrtc {

class I422Buffer : public ::webrtc::I422BufferInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka3c3c8;
    ::ll::UntypedStorage<4, 4> mUnk64f781;
    ::ll::UntypedStorage<4, 4> mUnka19cba;
    ::ll::UntypedStorage<4, 4> mUnka60756;
    ::ll::UntypedStorage<4, 4> mUnke13ace;
    ::ll::UntypedStorage<8, 8> mUnk8caf99;
    // NOLINTEND

public:
    // prevent constructor by default
    I422Buffer& operator=(I422Buffer const&);
    I422Buffer(I422Buffer const&);
    I422Buffer();

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

    virtual ~I422Buffer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
