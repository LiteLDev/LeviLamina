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
    // member functions
    // NOLINTBEGIN
    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCNAPI SenderReport();

    MCNAPI bool SetReportBlocks(::std::vector<::webrtc::rtcp::ReportBlock>);
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
