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
    // prevent constructor by default
    ExtendedReports& operator=(ExtendedReports const&);
    ExtendedReports(ExtendedReports const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool AddDlrrItem(::webrtc::rtcp::ReceiveTimeInfo const&);

    MCAPI ExtendedReports();

    MCAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCAPI void ParseDlrrBlock(uchar const*, ushort);

    MCAPI void ParseRrtrBlock(uchar const*, ushort);

    MCAPI void ParseTargetBitrateBlock(uchar const*, ushort);

    MCAPI void SetRrtr(::webrtc::rtcp::Rrtr const&);

    MCAPI void SetTargetBitrate(::webrtc::rtcp::TargetBitrate const&);

    MCAPI uint64 TargetBitrateLength() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
