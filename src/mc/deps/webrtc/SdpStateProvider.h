#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/PeerConnectionInterface.h"
#include "mc/deps/webrtc/rtc/SSLRole.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class SdpStateProvider {
public:
    // prevent constructor by default
    SdpStateProvider& operator=(SdpStateProvider const&);
    SdpStateProvider(SdpStateProvider const&);
    SdpStateProvider();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SdpStateProvider@webrtc@@UEAA@XZ
    virtual ~SdpStateProvider();

    // vIndex: 1, symbol:
    // ?signaling_state@SdpOfferAnswerHandler@webrtc@@UEBA?AW4SignalingState@PeerConnectionInterface@2@XZ
    virtual ::webrtc::PeerConnectionInterface::SignalingState signaling_state() const = 0;

    // vIndex: 2, symbol: ?local_description@SdpOfferAnswerHandler@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    virtual class webrtc::SessionDescriptionInterface const* local_description() const = 0;

    // vIndex: 3, symbol: ?remote_description@SdpOfferAnswerHandler@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    virtual class webrtc::SessionDescriptionInterface const* remote_description() const = 0;

    // vIndex: 4, symbol:
    // ?current_local_description@SdpOfferAnswerHandler@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    virtual class webrtc::SessionDescriptionInterface const* current_local_description() const = 0;

    // vIndex: 5, symbol:
    // ?current_remote_description@SdpOfferAnswerHandler@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    virtual class webrtc::SessionDescriptionInterface const* current_remote_description() const = 0;

    // vIndex: 6, symbol:
    // ?pending_local_description@SdpOfferAnswerHandler@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    virtual class webrtc::SessionDescriptionInterface const* pending_local_description() const = 0;

    // vIndex: 7, symbol:
    // ?pending_remote_description@SdpOfferAnswerHandler@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    virtual class webrtc::SessionDescriptionInterface const* pending_remote_description() const = 0;

    // vIndex: 8, symbol:
    // ?NeedsIceRestart@SdpOfferAnswerHandler@webrtc@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool NeedsIceRestart(std::string const&) const = 0;

    // vIndex: 9, symbol:
    // ?IceRestartPending@SdpOfferAnswerHandler@webrtc@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool IceRestartPending(std::string const&) const = 0;

    // vIndex: 10, symbol:
    // ?GetDtlsRole@SdpOfferAnswerHandler@webrtc@@UEBA?AV?$optional@W4SSLRole@rtc@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    virtual std::optional<::rtc::SSLRole> GetDtlsRole(std::string const&) const = 0;

    // NOLINTEND
};

}; // namespace webrtc
