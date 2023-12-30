#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RTPExtensionType.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RtpExtension; }
// clang-format on

namespace webrtc {

class RtpHeaderExtensionMap {
public:
    // prevent constructor by default
    RtpHeaderExtensionMap& operator=(RtpHeaderExtensionMap const&);
    RtpHeaderExtensionMap(RtpHeaderExtensionMap const&);

public:
    // NOLINTBEGIN
    // symbol: ?Deregister@RtpHeaderExtensionMap@webrtc@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void Deregister(std::string_view);

    // symbol: ?GetType@RtpHeaderExtensionMap@webrtc@@QEBA?AW4RTPExtensionType@2@H@Z
    MCAPI ::webrtc::RTPExtensionType GetType(int) const;

    // symbol: ?RegisterByUri@RtpHeaderExtensionMap@webrtc@@QEAA_NHV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool RegisterByUri(int, std::string_view);

    // symbol: ??0RtpHeaderExtensionMap@webrtc@@QEAA@XZ
    MCAPI RtpHeaderExtensionMap();

    // symbol: ??0RtpHeaderExtensionMap@webrtc@@QEAA@_N@Z
    MCAPI explicit RtpHeaderExtensionMap(bool);

    // symbol: ??0RtpHeaderExtensionMap@webrtc@@QEAA@V?$ArrayView@$$CBURtpExtension@webrtc@@$0?BCGH@@rtc@@@Z
    MCAPI explicit RtpHeaderExtensionMap(class rtc::ArrayView<struct webrtc::RtpExtension const, -4711>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?Register@RtpHeaderExtensionMap@webrtc@@AEAA_NHW4RTPExtensionType@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool Register(int, ::webrtc::RTPExtensionType, std::string_view);

    // NOLINTEND
};

}; // namespace webrtc
