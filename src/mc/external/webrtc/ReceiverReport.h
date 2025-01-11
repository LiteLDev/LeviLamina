#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class ReportBlock; }
// clang-format on

namespace webrtc::rtcp {

class ReceiverReport {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCAPI ReceiverReport();

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
