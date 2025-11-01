#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class TmmbItem; }
// clang-format on

namespace webrtc {

class TMMBRHelp {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint64 CalcMinBitrateBps(::std::vector<::webrtc::rtcp::TmmbItem> const& candidates);

    MCNAPI static ::std::vector<::webrtc::rtcp::TmmbItem> FindBoundingSet(::std::vector<::webrtc::rtcp::TmmbItem> candidates);

    MCNAPI static bool IsOwner(::std::vector<::webrtc::rtcp::TmmbItem> const& bounding, uint ssrc);
    // NOLINTEND

};

}
