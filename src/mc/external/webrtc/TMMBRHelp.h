#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class TmmbItem; }
// clang-format on

namespace webrtc {

struct TMMBRHelp {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uint64 CalcMinBitrateBps(::std::vector<::webrtc::rtcp::TmmbItem> const&);

    MCAPI static ::std::vector<::webrtc::rtcp::TmmbItem> FindBoundingSet(::std::vector<::webrtc::rtcp::TmmbItem>);

    MCAPI static bool IsOwner(::std::vector<::webrtc::rtcp::TmmbItem> const&, uint);
    // NOLINTEND
};

} // namespace webrtc
