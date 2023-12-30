#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpSenderInterface; }
namespace webrtc { class RtpTransceiver; }
namespace webrtc { class TransceiverStableState; }
// clang-format on

namespace webrtc {

class TransceiverList {
public:
    // prevent constructor by default
    TransceiverList& operator=(TransceiverList const&);
    TransceiverList(TransceiverList const&);
    TransceiverList();

public:
    // NOLINTBEGIN
    // symbol: ?DiscardStableStates@TransceiverList@webrtc@@QEAAXXZ
    MCAPI void DiscardStableStates();

    // symbol:
    // ?FindByMLineIndex@TransceiverList@webrtc@@QEBA?AV?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@_K@Z
    MCAPI class rtc::scoped_refptr<class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>
        FindByMLineIndex(uint64) const;

    // symbol:
    // ?FindByMid@TransceiverList@webrtc@@QEBA?AV?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>
    FindByMid(std::string const&) const;

    // symbol:
    // ?FindBySender@TransceiverList@webrtc@@QEBA?AV?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@V?$scoped_refptr@VRtpSenderInterface@webrtc@@@4@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>
        FindBySender(class rtc::scoped_refptr<class webrtc::RtpSenderInterface>) const;

    // symbol:
    // ?List@TransceiverList@webrtc@@QEBA?AV?$vector@V?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@@std@@@std@@XZ
    MCAPI std::vector<
        class rtc::scoped_refptr<class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>>
    List() const;

    // symbol:
    // ?ListInternal@TransceiverList@webrtc@@QEBA?AV?$vector@PEAVRtpTransceiver@webrtc@@V?$allocator@PEAVRtpTransceiver@webrtc@@@std@@@std@@XZ
    MCAPI std::vector<class webrtc::RtpTransceiver*> ListInternal() const;

    // symbol:
    // ?Remove@TransceiverList@webrtc@@QEAAXV?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@@Z
    MCAPI void
        Remove(class rtc::scoped_refptr<class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>);

    // symbol:
    // ?StableState@TransceiverList@webrtc@@QEAAPEAVTransceiverStableState@2@V?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@@Z
    MCAPI class webrtc::TransceiverStableState*
        StableState(class rtc::scoped_refptr<
                    class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>);

    // symbol: ??1TransceiverList@webrtc@@QEAA@XZ
    MCAPI ~TransceiverList();

    // NOLINTEND
};

}; // namespace webrtc
