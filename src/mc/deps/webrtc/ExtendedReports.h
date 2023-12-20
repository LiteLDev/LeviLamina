#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcpPacket.h"
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class Rrtr; }
namespace webrtc::rtcp { class RtcpPacket; }
namespace webrtc::rtcp { class TargetBitrate; }
namespace webrtc::rtcp { struct ReceiveTimeInfo; }
// clang-format on

namespace webrtc::rtcp {

class ExtendedReports : public ::webrtc::rtcp::RtcpPacket {
public:
    // prevent constructor by default
    ExtendedReports& operator=(ExtendedReports const&);
    ExtendedReports(ExtendedReports const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ExtendedReports@rtcp@webrtc@@UEAA@XZ
    virtual ~ExtendedReports();

    // vIndex: 1, symbol: ?BlockLength@ExtendedReports@rtcp@webrtc@@UEBA_KXZ
    virtual uint64 BlockLength() const;

    // vIndex: 2, symbol:
    // ?Create@ExtendedReports@rtcp@webrtc@@UEBA_NPEAEPEA_K_KV?$FunctionView@$$A6AXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z@rtc@@@Z
    virtual bool
    Create(uchar*, uint64*, uint64, class rtc::FunctionView<void(class rtc::ArrayView<uchar const, -4711>)>) const;

    // symbol: ?AddDlrrItem@ExtendedReports@rtcp@webrtc@@QEAA_NAEBUReceiveTimeInfo@23@@Z
    MCAPI bool AddDlrrItem(struct webrtc::rtcp::ReceiveTimeInfo const&);

    // symbol: ??0ExtendedReports@rtcp@webrtc@@QEAA@XZ
    MCAPI ExtendedReports();

    // symbol: ?Parse@ExtendedReports@rtcp@webrtc@@QEAA_NAEBVCommonHeader@23@@Z
    MCAPI bool Parse(class webrtc::rtcp::CommonHeader const&);

    // symbol: ?SetRrtr@ExtendedReports@rtcp@webrtc@@QEAAXAEBVRrtr@23@@Z
    MCAPI void SetRrtr(class webrtc::rtcp::Rrtr const&);

    // symbol: ?SetTargetBitrate@ExtendedReports@rtcp@webrtc@@QEAAXAEBVTargetBitrate@23@@Z
    MCAPI void SetTargetBitrate(class webrtc::rtcp::TargetBitrate const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ParseDlrrBlock@ExtendedReports@rtcp@webrtc@@AEAAXPEBEG@Z
    MCAPI void ParseDlrrBlock(uchar const*, ushort);

    // symbol: ?ParseRrtrBlock@ExtendedReports@rtcp@webrtc@@AEAAXPEBEG@Z
    MCAPI void ParseRrtrBlock(uchar const*, ushort);

    // symbol: ?ParseTargetBitrateBlock@ExtendedReports@rtcp@webrtc@@AEAAXPEBEG@Z
    MCAPI void ParseTargetBitrateBlock(uchar const*, ushort);

    // symbol: ?TargetBitrateLength@ExtendedReports@rtcp@webrtc@@AEBA_KXZ
    MCAPI uint64 TargetBitrateLength() const;

    // NOLINTEND
};

}; // namespace webrtc::rtcp
