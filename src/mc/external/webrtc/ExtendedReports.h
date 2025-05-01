#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class Rrtr; }
namespace webrtc::rtcp { class TargetBitrate; }
namespace webrtc::rtcp { struct ReceiveTimeInfo; }
// clang-format on

namespace webrtc::rtcp {

class ExtendedReports {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AddDlrrItem(::webrtc::rtcp::ReceiveTimeInfo const&);

    MCNAPI ExtendedReports();

    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCNAPI void ParseDlrrBlock(uchar const*, ushort);

    MCNAPI void ParseRrtrBlock(uchar const*, ushort);

    MCNAPI void ParseTargetBitrateBlock(uchar const*, ushort);

    MCNAPI void SetRrtr(::webrtc::rtcp::Rrtr const&);

    MCNAPI void SetTargetBitrate(::webrtc::rtcp::TargetBitrate const&);

    MCNAPI uint64 TargetBitrateLength() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
