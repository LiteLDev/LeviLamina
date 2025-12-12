#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoFecGenerator.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class DataRate; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { struct FecProtectionParams; }
namespace webrtc { struct RtpExtension; }
namespace webrtc { struct RtpExtensionSize; }
namespace webrtc { struct RtpState; }
// clang-format on

namespace webrtc {

class FlexfecSender : public ::webrtc::VideoFecGenerator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk7b64e1;
    ::ll::UntypedStorage<8, 8>   mUnkdd9463;
    ::ll::UntypedStorage<8, 8>   mUnk497eb3;
    ::ll::UntypedStorage<4, 4>   mUnkd773cf;
    ::ll::UntypedStorage<4, 4>   mUnk4b5838;
    ::ll::UntypedStorage<4, 4>   mUnkd01beb;
    ::ll::UntypedStorage<4, 4>   mUnkfa1014;
    ::ll::UntypedStorage<8, 32>  mUnk399e6e;
    ::ll::UntypedStorage<2, 2>   mUnkbd4a8d;
    ::ll::UntypedStorage<8, 488> mUnkb35b4f;
    ::ll::UntypedStorage<1, 22>  mUnkc2a9cc;
    ::ll::UntypedStorage<8, 8>   mUnk4f4ea2;
    ::ll::UntypedStorage<8, 40>  mUnk4174f7;
    ::ll::UntypedStorage<8, 88>  mUnk942aa7;
    // NOLINTEND

public:
    // prevent constructor by default
    FlexfecSender& operator=(FlexfecSender const&);
    FlexfecSender(FlexfecSender const&);
    FlexfecSender();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlexfecSender() /*override*/;

    virtual ::webrtc::VideoFecGenerator::FecType GetFecType() const /*override*/;

    virtual ::std::optional<uint> FecSsrc() /*override*/;

    virtual void SetProtectionParameters(
        ::webrtc::FecProtectionParams const& delta_params,
        ::webrtc::FecProtectionParams const& key_params
    ) /*override*/;

    virtual void AddPacketAndGenerateFec(::webrtc::RtpPacketToSend const& packet) /*override*/;

    virtual ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> GetFecPackets() /*override*/;

    virtual uint64 MaxPacketOverhead() const /*override*/;

    virtual ::webrtc::DataRate CurrentFecRate() const /*override*/;

    virtual ::std::optional<::webrtc::RtpState> GetRtpState() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FlexfecSender(
        int                                                payload_type,
        uint                                               ssrc,
        uint                                               protected_media_ssrc,
        ::std::string_view                                 mid,
        ::std::vector<::webrtc::RtpExtension> const&       rtp_header_extensions,
        ::rtc::ArrayView<::webrtc::RtpExtensionSize const> extension_sizes,
        ::webrtc::RtpState const*                          rtp_state,
        ::webrtc::Clock*                                   clock
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        int                                                payload_type,
        uint                                               ssrc,
        uint                                               protected_media_ssrc,
        ::std::string_view                                 mid,
        ::std::vector<::webrtc::RtpExtension> const&       rtp_header_extensions,
        ::rtc::ArrayView<::webrtc::RtpExtensionSize const> extension_sizes,
        ::webrtc::RtpState const*                          rtp_state,
        ::webrtc::Clock*                                   clock
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::VideoFecGenerator::FecType $GetFecType() const;

    MCNAPI ::std::optional<uint> $FecSsrc();

    MCNAPI void $SetProtectionParameters(
        ::webrtc::FecProtectionParams const& delta_params,
        ::webrtc::FecProtectionParams const& key_params
    );

    MCNAPI void $AddPacketAndGenerateFec(::webrtc::RtpPacketToSend const& packet);

    MCNAPI ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> $GetFecPackets();

    MCNAPI uint64 $MaxPacketOverhead() const;

    MCNAPI ::webrtc::DataRate $CurrentFecRate() const;

    MCNAPI ::std::optional<::webrtc::RtpState> $GetRtpState();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
