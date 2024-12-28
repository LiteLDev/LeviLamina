#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class ReportBlock; }
// clang-format on

namespace webrtc::rtcp {

class SenderReport {
public:
    // prevent constructor by default
    SenderReport& operator=(SenderReport const&);
    SenderReport(SenderReport const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCAPI SenderReport();

    MCAPI bool SetReportBlocks(::std::vector<::webrtc::rtcp::ReportBlock>);
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
