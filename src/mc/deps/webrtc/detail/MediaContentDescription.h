#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/MediaType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class AudioContentDescription; }
namespace cricket { class SctpDataContentDescription; }
namespace cricket { class SimulcastDescription; }
namespace cricket { class UnsupportedContentDescription; }
namespace cricket { class VideoContentDescription; }
namespace cricket { struct RidDescription; }
namespace cricket { struct StreamParams; }
namespace webrtc { struct RtpExtension; }
// clang-format on

namespace cricket {

class MediaContentDescription {
public:
    // MediaContentDescription inner types define
    enum class ExtmapAllowMixed {};

public:
    // prevent constructor by default
    MediaContentDescription& operator=(MediaContentDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MediaContentDescription@cricket@@UEAA@XZ
    virtual ~MediaContentDescription();

    // vIndex: 1, symbol: ?type@UnsupportedContentDescription@cricket@@UEBA?AW4MediaType@2@XZ
    virtual ::cricket::MediaType type() const = 0;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: ?has_codecs@UnsupportedContentDescription@cricket@@UEBA_NXZ
    virtual bool has_codecs() const = 0;

    // vIndex: 11, symbol:
    // ?set_protocol@MediaContentDescription@cricket@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void set_protocol(std::string_view);

    // vIndex: 12, symbol: ?CloneInternal@UnsupportedContentDescription@cricket@@EEBAPEAV12@XZ
    virtual class cricket::MediaContentDescription* CloneInternal() const = 0;

    // symbol: ?as_audio@MediaContentDescription@cricket@@UEAAPEAVAudioContentDescription@2@XZ
    MCVAPI class cricket::AudioContentDescription* as_audio();

    // symbol: ?as_audio@MediaContentDescription@cricket@@UEBAPEBVAudioContentDescription@2@XZ
    MCVAPI class cricket::AudioContentDescription const* as_audio() const;

    // symbol: ?as_sctp@MediaContentDescription@cricket@@UEAAPEAVSctpDataContentDescription@2@XZ
    MCVAPI class cricket::SctpDataContentDescription* as_sctp();

    // symbol: ?as_sctp@MediaContentDescription@cricket@@UEBAPEBVSctpDataContentDescription@2@XZ
    MCVAPI class cricket::SctpDataContentDescription const* as_sctp() const;

    // symbol: ?as_unsupported@MediaContentDescription@cricket@@UEAAPEAVUnsupportedContentDescription@2@XZ
    MCVAPI class cricket::UnsupportedContentDescription* as_unsupported();

    // symbol: ?as_unsupported@MediaContentDescription@cricket@@UEBAPEBVUnsupportedContentDescription@2@XZ
    MCVAPI class cricket::UnsupportedContentDescription const* as_unsupported() const;

    // symbol: ?as_video@MediaContentDescription@cricket@@UEAAPEAVVideoContentDescription@2@XZ
    MCVAPI class cricket::VideoContentDescription* as_video();

    // symbol: ?as_video@MediaContentDescription@cricket@@UEBAPEBVVideoContentDescription@2@XZ
    MCVAPI class cricket::VideoContentDescription const* as_video() const;

    // symbol: ?AddRtpHeaderExtension@MediaContentDescription@cricket@@QEAAXAEBURtpExtension@webrtc@@@Z
    MCAPI void AddRtpHeaderExtension(struct webrtc::RtpExtension const&);

    // symbol: ?AddStream@MediaContentDescription@cricket@@QEAAXAEBUStreamParams@2@@Z
    MCAPI void AddStream(struct cricket::StreamParams const&);

    // symbol: ??0MediaContentDescription@cricket@@QEAA@XZ
    MCAPI MediaContentDescription();

    // symbol: ??0MediaContentDescription@cricket@@QEAA@AEBV01@@Z
    MCAPI MediaContentDescription(class cricket::MediaContentDescription const&);

    // symbol: ?set_extmap_allow_mixed_enum@MediaContentDescription@cricket@@QEAAXW4ExtmapAllowMixed@12@@Z
    MCAPI void set_extmap_allow_mixed_enum(::cricket::MediaContentDescription::ExtmapAllowMixed);

    // symbol:
    // ?set_receive_rids@MediaContentDescription@cricket@@QEAAXAEBV?$vector@URidDescription@cricket@@V?$allocator@URidDescription@cricket@@@std@@@std@@@Z
    MCAPI void set_receive_rids(std::vector<struct cricket::RidDescription> const&);

    // symbol: ?set_simulcast_description@MediaContentDescription@cricket@@QEAAXAEBVSimulcastDescription@2@@Z
    MCAPI void set_simulcast_description(class cricket::SimulcastDescription const&);

    // NOLINTEND
};

}; // namespace cricket
