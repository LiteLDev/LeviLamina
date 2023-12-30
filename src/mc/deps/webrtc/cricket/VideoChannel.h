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
namespace cricket { class VideoMediaChannel; }
namespace cricket { class VideoMediaReceiveChannelInterface; }
namespace cricket { class VideoMediaSendChannelInterface; }
namespace cricket { class VoiceChannel; }
namespace rtc { class Thread; }
namespace rtc { class UniqueRandomIdGenerator; }
namespace webrtc { struct CryptoOptions; }
// clang-format on

namespace cricket {

class VideoChannel : public ::cricket::BaseChannel {
public:
    // prevent constructor by default
    VideoChannel& operator=(VideoChannel const&);
    VideoChannel(VideoChannel const&);
    VideoChannel();

public:
    // NOLINTBEGIN
    // symbol: ?AsVideoChannel@VideoChannel@cricket@@UEAAPEAV12@XZ
    MCVAPI class cricket::VideoChannel* AsVideoChannel();

    // symbol: ?AsVoiceChannel@VideoChannel@cricket@@UEAAPEAVVoiceChannel@2@XZ
    MCVAPI class cricket::VoiceChannel* AsVoiceChannel();

    // symbol:
    // ?SetLocalContent_w@VideoChannel@cricket@@EEAA_NPEBVMediaContentDescription@2@W4SdpType@webrtc@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI bool SetLocalContent_w(class cricket::MediaContentDescription const*, ::webrtc::SdpType, std::string&);

    // symbol:
    // ?SetRemoteContent_w@VideoChannel@cricket@@EEAA_NPEBVMediaContentDescription@2@W4SdpType@webrtc@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI bool SetRemoteContent_w(class cricket::MediaContentDescription const*, ::webrtc::SdpType, std::string&);

    // symbol: ?UpdateMediaSendRecvState_w@VideoChannel@cricket@@EEAAXXZ
    MCVAPI void UpdateMediaSendRecvState_w();

    // symbol: ?media_receive_channel@VideoChannel@cricket@@UEAAPEAVVideoMediaReceiveChannelInterface@2@XZ
    MCVAPI class cricket::VideoMediaReceiveChannelInterface* media_receive_channel();

    // symbol: ?media_send_channel@VideoChannel@cricket@@UEAAPEAVVideoMediaSendChannelInterface@2@XZ
    MCVAPI class cricket::VideoMediaSendChannelInterface* media_send_channel();

    // symbol: ?media_type@VideoChannel@cricket@@UEBA?AW4MediaType@2@XZ
    MCVAPI ::cricket::MediaType media_type() const;

    // symbol: ?video_media_receive_channel@VideoChannel@cricket@@UEAAPEAVVideoMediaReceiveChannelInterface@2@XZ
    MCVAPI class cricket::VideoMediaReceiveChannelInterface* video_media_receive_channel();

    // symbol: ?video_media_send_channel@VideoChannel@cricket@@UEAAPEAVVideoMediaSendChannelInterface@2@XZ
    MCVAPI class cricket::VideoMediaSendChannelInterface* video_media_send_channel();

    // symbol: ??1VideoChannel@cricket@@UEAA@XZ
    MCVAPI ~VideoChannel();

    // symbol:
    // ??0VideoChannel@cricket@@QEAA@PEAVThread@rtc@@00V?$unique_ptr@VVideoMediaChannel@cricket@@U?$default_delete@VVideoMediaChannel@cricket@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@5@_NUCryptoOptions@webrtc@@PEAVUniqueRandomIdGenerator@3@@Z
    MCAPI
    VideoChannel(class rtc::Thread*, class rtc::Thread*, class rtc::Thread*, std::unique_ptr<class cricket::VideoMediaChannel>, std::string_view, bool, struct webrtc::CryptoOptions, class rtc::UniqueRandomIdGenerator*);

    // NOLINTEND
};

}; // namespace cricket
