#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpReceiverInterface.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class RtpReceiverInterface; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class RtpReceiverInternal : public ::webrtc::RtpReceiverInterface {
public:
    // prevent constructor by default
    RtpReceiverInternal& operator=(RtpReceiverInternal const&);
    RtpReceiverInternal(RtpReceiverInternal const&);
    RtpReceiverInternal();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1RtpReceiverInternal@webrtc@@UEAA@XZ
    virtual ~RtpReceiverInternal();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?CreateStreamsFromIds@RtpReceiverInternal@webrtc@@KA?AV?$vector@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@@std@@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    MCAPI static std::vector<class rtc::scoped_refptr<class webrtc::MediaStreamInterface>>
        CreateStreamsFromIds(std::vector<std::string>);

    // symbol: ?GenerateUniqueId@RtpReceiverInternal@webrtc@@KAHXZ
    MCAPI static int GenerateUniqueId();

    // NOLINTEND
};

}; // namespace webrtc
