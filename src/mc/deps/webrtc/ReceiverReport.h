#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcpPacket.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class ReportBlock; }
namespace webrtc::rtcp { class RtcpPacket; }
// clang-format on

namespace webrtc::rtcp {

class ReceiverReport : public ::webrtc::rtcp::RtcpPacket {
public:
    // prevent constructor by default
    ReceiverReport& operator=(ReceiverReport const&);
    ReceiverReport(ReceiverReport const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ReceiverReport@rtcp@webrtc@@UEAA@XZ
    virtual ~ReceiverReport();

    // vIndex: 1, symbol: ?BlockLength@ReceiverReport@rtcp@webrtc@@UEBA_KXZ
    virtual uint64 BlockLength() const;

    // vIndex: 2, symbol:
    // ?Create@ReceiverReport@rtcp@webrtc@@UEBA_NPEAEPEA_K_KV?$FunctionView@$$A6AXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z@rtc@@@Z
    virtual bool
    Create(uchar*, uint64*, uint64, class rtc::FunctionView<void(class rtc::ArrayView<uchar const, -4711>)>) const;

    // symbol: ?Parse@ReceiverReport@rtcp@webrtc@@QEAA_NAEBVCommonHeader@23@@Z
    MCAPI bool Parse(class webrtc::rtcp::CommonHeader const&);

    // symbol: ??0ReceiverReport@rtcp@webrtc@@QEAA@XZ
    MCAPI ReceiverReport();

    // symbol:
    // ?SetReportBlocks@ReceiverReport@rtcp@webrtc@@QEAA_NV?$vector@VReportBlock@rtcp@webrtc@@V?$allocator@VReportBlock@rtcp@webrtc@@@std@@@std@@@Z
    MCAPI bool SetReportBlocks(std::vector<class webrtc::rtcp::ReportBlock>);

    // NOLINTEND
};

}; // namespace webrtc::rtcp
