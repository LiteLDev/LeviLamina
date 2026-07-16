#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/FunctionView.h"
#include "mc/external/webrtc/Rtpfb.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
// clang-format on

namespace webrtc::rtcp {

class CongestionControlFeedback : public ::webrtc::rtcp::Rtpfb {
public:
    // CongestionControlFeedback inner types declare
    // clang-format off
    struct PacketInfo;
    // clang-format on

    // CongestionControlFeedback inner types define
    struct PacketInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkd7346a;
        ::ll::UntypedStorage<2, 2> mUnk4deedc;
        ::ll::UntypedStorage<8, 8> mUnk16d4b4;
        ::ll::UntypedStorage<4, 4> mUnk52c465;
        // NOLINTEND

    public:
        // prevent constructor by default
        PacketInfo& operator=(PacketInfo const&);
        PacketInfo(PacketInfo const&);
        PacketInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk629783;
    ::ll::UntypedStorage<4, 4>  mUnk958e01;
    // NOLINTEND

public:
    // prevent constructor by default
    CongestionControlFeedback& operator=(CongestionControlFeedback const&);
    CongestionControlFeedback(CongestionControlFeedback const&);
    CongestionControlFeedback();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool Create(
        uchar*                                                                               buffer,
        uint64*                                                                              position,
        uint64                                                                               max_length,
        ::webrtc::FunctionView<void(::webrtc::ArrayView<uchar const, 18446744073709546905>)> callback
    ) const /*override*/;

    virtual uint64 BlockLength() const /*override*/;

    virtual ~CongestionControlFeedback() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const& packet);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $Create(
        uchar*                                                                               buffer,
        uint64*                                                                              position,
        uint64                                                                               max_length,
        ::webrtc::FunctionView<void(::webrtc::ArrayView<uchar const, 18446744073709546905>)> callback
    ) const;

    MCNAPI uint64 $BlockLength() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
