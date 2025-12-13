#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/FunctionView.h"
#include "mc/external/webrtc/RtcpPacket.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class Rrtr; }
namespace webrtc::rtcp { class TargetBitrate; }
namespace webrtc::rtcp { struct ReceiveTimeInfo; }
// clang-format on

namespace webrtc::rtcp {

class ExtendedReports : public ::webrtc::rtcp::RtcpPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk863b65;
    ::ll::UntypedStorage<8, 24> mUnk5a9f4d;
    ::ll::UntypedStorage<8, 32> mUnkeb5da1;
    // NOLINTEND

public:
    // prevent constructor by default
    ExtendedReports& operator=(ExtendedReports const&);
    ExtendedReports(ExtendedReports const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExtendedReports() /*override*/;

    // vIndex: 1
    virtual uint64 BlockLength() const /*override*/;

    // vIndex: 2
    virtual bool Create(
        uchar*                                                   packet,
        uint64*                                                  index,
        uint64                                                   max_length,
        ::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)> callback
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AddDlrrItem(::webrtc::rtcp::ReceiveTimeInfo const& time_info);

    MCNAPI ExtendedReports();

    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const& packet);

    MCNAPI void ParseDlrrBlock(uchar const* block, ushort block_length);

    MCNAPI void ParseRrtrBlock(uchar const* block, ushort block_length);

    MCNAPI void ParseTargetBitrateBlock(uchar const* block, ushort block_length);

    MCNAPI void SetRrtr(::webrtc::rtcp::Rrtr const& rrtr);

    MCNAPI void SetTargetBitrate(::webrtc::rtcp::TargetBitrate const& bitrate);

    MCNAPI uint64 TargetBitrateLength() const;
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
        uchar*                                                   packet,
        uint64*                                                  index,
        uint64                                                   max_length,
        ::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)> callback
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
