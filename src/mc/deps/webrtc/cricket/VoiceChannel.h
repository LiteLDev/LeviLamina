#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/SdpType.h"
#include "mc/deps/webrtc/cricket/BaseChannel.h"
#include "mc/deps/webrtc/cricket/MediaType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class BaseChannel; }
namespace cricket { class MediaContentDescription; }
namespace cricket { class VideoChannel; }
namespace cricket { class VoiceMediaChannel; }
namespace cricket { class VoiceMediaReceiveChannelInterface; }
namespace cricket { class VoiceMediaSendChannelInterface; }
namespace rtc { class Thread; }
namespace rtc { class UniqueRandomIdGenerator; }
namespace webrtc { struct CryptoOptions; }
// clang-format on

namespace cricket {

class VoiceChannel : public ::cricket::BaseChannel {
public:
    // prevent constructor by default
    VoiceChannel& operator=(VoiceChannel const&);
    VoiceChannel(VoiceChannel const&);
    VoiceChannel();

public:
    // NOLINTBEGIN
    // symbol: ?AsVideoChannel@VoiceChannel@cricket@@UEAAPEAVVideoChannel@2@XZ
    MCVAPI class cricket::VideoChannel* AsVideoChannel();

    // symbol: ?AsVoiceChannel@VoiceChannel@cricket@@UEAAPEAV12@XZ
    MCVAPI class cricket::VoiceChannel* AsVoiceChannel();

    // symbol:
    // ?SetLocalContent_w@VoiceChannel@cricket@@EEAA_NPEBVMediaContentDescription@2@W4SdpType@webrtc@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI bool SetLocalContent_w(class cricket::MediaContentDescription const*, ::webrtc::SdpType, std::string&);

    // symbol:
    // ?SetRemoteContent_w@VoiceChannel@cricket@@EEAA_NPEBVMediaContentDescription@2@W4SdpType@webrtc@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI bool SetRemoteContent_w(class cricket::MediaContentDescription const*, ::webrtc::SdpType, std::string&);

    // symbol: ?UpdateMediaSendRecvState_w@VoiceChannel@cricket@@EEAAXXZ
    MCVAPI void UpdateMediaSendRecvState_w();

    // symbol: ?media_receive_channel@VoiceChannel@cricket@@UEAAPEAVVoiceMediaReceiveChannelInterface@2@XZ
    MCVAPI class cricket::VoiceMediaReceiveChannelInterface* media_receive_channel();

    // symbol: ?media_send_channel@VoiceChannel@cricket@@UEAAPEAVVoiceMediaSendChannelInterface@2@XZ
    MCVAPI class cricket::VoiceMediaSendChannelInterface* media_send_channel();

    // symbol: ?media_type@VoiceChannel@cricket@@UEBA?AW4MediaType@2@XZ
    MCVAPI ::cricket::MediaType media_type() const;

    // symbol: ?voice_media_receive_channel@VoiceChannel@cricket@@UEAAPEAVVoiceMediaReceiveChannelInterface@2@XZ
    MCVAPI class cricket::VoiceMediaReceiveChannelInterface* voice_media_receive_channel();

    // symbol: ?voice_media_send_channel@VoiceChannel@cricket@@UEAAPEAVVoiceMediaSendChannelInterface@2@XZ
    MCVAPI class cricket::VoiceMediaSendChannelInterface* voice_media_send_channel();

    // symbol: ??1VoiceChannel@cricket@@UEAA@XZ
    MCVAPI ~VoiceChannel();

    // symbol:
    // ??0VoiceChannel@cricket@@QEAA@PEAVThread@rtc@@00V?$unique_ptr@VVoiceMediaChannel@cricket@@U?$default_delete@VVoiceMediaChannel@cricket@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@5@_NUCryptoOptions@webrtc@@PEAVUniqueRandomIdGenerator@3@@Z
    MCAPI
    VoiceChannel(class rtc::Thread*, class rtc::Thread*, class rtc::Thread*, std::unique_ptr<class cricket::VoiceMediaChannel>, std::string_view, bool, struct webrtc::CryptoOptions, class rtc::UniqueRandomIdGenerator*);

    // NOLINTEND
};

}; // namespace cricket
