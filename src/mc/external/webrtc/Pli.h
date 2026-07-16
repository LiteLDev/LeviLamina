#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/FunctionView.h"
#include "mc/external/webrtc/Psfb.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
// clang-format on

namespace webrtc::rtcp {

class Pli : public ::webrtc::rtcp::Psfb {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Pli() /*override*/;

    virtual uint64 BlockLength() const /*override*/;

    virtual bool Create(
        uchar*                                                                               packet,
        uint64*                                                                              index,
        uint64                                                                               max_length,
        ::webrtc::FunctionView<void(::webrtc::ArrayView<uchar const, 18446744073709546905>)> callback
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const& packet);

    MCNAPI Pli();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint64 $BlockLength() const;

    MCNAPI bool $Create(
        uchar*                                                                               packet,
        uint64*                                                                              index,
        uint64                                                                               max_length,
        ::webrtc::FunctionView<void(::webrtc::ArrayView<uchar const, 18446744073709546905>)> callback
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
