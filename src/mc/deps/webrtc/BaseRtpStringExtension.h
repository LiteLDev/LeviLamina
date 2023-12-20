#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace webrtc {

class BaseRtpStringExtension {
public:
    // prevent constructor by default
    BaseRtpStringExtension& operator=(BaseRtpStringExtension const&);
    BaseRtpStringExtension(BaseRtpStringExtension const&);
    BaseRtpStringExtension();

public:
    // NOLINTBEGIN
    // symbol:
    // ?Parse@BaseRtpStringExtension@webrtc@@SA_NV?$ArrayView@$$CBE$0?BCGH@@rtc@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool Parse(class rtc::ArrayView<uchar const, -4711>, std::string*);

    // symbol:
    // ?Write@BaseRtpStringExtension@webrtc@@SA_NV?$ArrayView@E$0?BCGH@@rtc@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI static bool Write(class rtc::ArrayView<uchar, -4711>, std::string_view);

    // NOLINTEND
};

}; // namespace webrtc
