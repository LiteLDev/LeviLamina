#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc::webrtc_checks_impl {

struct ToStringVal {
public:
    // prevent constructor by default
    ToStringVal& operator=(ToStringVal const&);
    ToStringVal();

public:
    // NOLINTBEGIN
    // symbol:
    // ?GetVal@ToStringVal@webrtc_checks_impl@rtc@@QEBAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const* GetVal() const;

    // symbol: ??0ToStringVal@webrtc_checks_impl@rtc@@QEAA@AEBU012@@Z
    MCAPI ToStringVal(struct rtc::webrtc_checks_impl::ToStringVal const&);

    // symbol: ??1ToStringVal@webrtc_checks_impl@rtc@@QEAA@XZ
    MCAPI ~ToStringVal();

    // NOLINTEND
};

}; // namespace rtc::webrtc_checks_impl
