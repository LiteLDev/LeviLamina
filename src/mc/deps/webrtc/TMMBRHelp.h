#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class TmmbItem; }
// clang-format on

namespace webrtc {

class TMMBRHelp {
public:
    // prevent constructor by default
    TMMBRHelp& operator=(TMMBRHelp const&);
    TMMBRHelp(TMMBRHelp const&);
    TMMBRHelp();

public:
    // NOLINTBEGIN
    // symbol:
    // ?CalcMinBitrateBps@TMMBRHelp@webrtc@@SA_KAEBV?$vector@VTmmbItem@rtcp@webrtc@@V?$allocator@VTmmbItem@rtcp@webrtc@@@std@@@std@@@Z
    MCAPI static uint64 CalcMinBitrateBps(std::vector<class webrtc::rtcp::TmmbItem> const&);

    // symbol:
    // ?FindBoundingSet@TMMBRHelp@webrtc@@SA?AV?$vector@VTmmbItem@rtcp@webrtc@@V?$allocator@VTmmbItem@rtcp@webrtc@@@std@@@std@@V34@@Z
    MCAPI static std::vector<class webrtc::rtcp::TmmbItem> FindBoundingSet(std::vector<class webrtc::rtcp::TmmbItem>);

    // symbol:
    // ?IsOwner@TMMBRHelp@webrtc@@SA_NAEBV?$vector@VTmmbItem@rtcp@webrtc@@V?$allocator@VTmmbItem@rtcp@webrtc@@@std@@@std@@I@Z
    MCAPI static bool IsOwner(std::vector<class webrtc::rtcp::TmmbItem> const&, uint);

    // NOLINTEND
};

}; // namespace webrtc
