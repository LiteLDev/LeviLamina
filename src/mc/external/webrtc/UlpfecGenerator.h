#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoFecGenerator.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class DataRate; }
namespace webrtc { class ForwardErrorCorrection; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { struct FecProtectionParams; }
namespace webrtc { struct RtpState; }
// clang-format on

namespace webrtc {

class UlpfecGenerator : public ::webrtc::VideoFecGenerator {
public:
    // UlpfecGenerator inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // UlpfecGenerator inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk7c8da4;
        ::ll::UntypedStorage<4, 12> mUnkcf99b6;
        // NOLINTEND

    public:
        // prevent constructor by default
        Params& operator=(Params const&);
        Params(Params const&);
        Params();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkd4deb2;
    ::ll::UntypedStorage<4, 4>   mUnk1bd645;
    ::ll::UntypedStorage<8, 8>   mUnk833228;
    ::ll::UntypedStorage<4, 8>   mUnk578608;
    ::ll::UntypedStorage<8, 8>   mUnka39a8a;
    ::ll::UntypedStorage<8, 16>  mUnk128197;
    ::ll::UntypedStorage<8, 216> mUnke7eec4;
    ::ll::UntypedStorage<8, 16>  mUnkd82181;
    ::ll::UntypedStorage<4, 4>   mUnk889ecb;
    ::ll::UntypedStorage<4, 4>   mUnkd4aecc;
    ::ll::UntypedStorage<4, 24>  mUnk5b0730;
    ::ll::UntypedStorage<1, 1>   mUnke33ec6;
    ::ll::UntypedStorage<8, 40>  mUnkbd83d5;
    ::ll::UntypedStorage<4, 28>  mUnk27bfe8;
    ::ll::UntypedStorage<8, 88>  mUnk7d51c4;
    // NOLINTEND

public:
    // prevent constructor by default
    UlpfecGenerator& operator=(UlpfecGenerator const&);
    UlpfecGenerator(UlpfecGenerator const&);
    UlpfecGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UlpfecGenerator() /*override*/;

    virtual ::webrtc::VideoFecGenerator::FecType GetFecType() const /*override*/;

    virtual ::std::optional<uint> FecSsrc() /*override*/;

    virtual void SetProtectionParameters(
        ::webrtc::FecProtectionParams const& delta_params,
        ::webrtc::FecProtectionParams const& key_params
    ) /*override*/;

    virtual void AddPacketAndGenerateFec(::webrtc::RtpPacketToSend const& packet) /*override*/;

    virtual uint64 MaxPacketOverhead() const /*override*/;

    virtual ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> GetFecPackets() /*override*/;

    virtual ::webrtc::DataRate CurrentFecRate() const /*override*/;

    virtual ::std::optional<::webrtc::RtpState> GetRtpState() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ResetState();

    MCNAPI UlpfecGenerator(::std::unique_ptr<::webrtc::ForwardErrorCorrection> fec, ::webrtc::Clock* clock);

    MCNAPI UlpfecGenerator(int red_payload_type, int ulpfec_payload_type, ::webrtc::Clock* clock);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::webrtc::ForwardErrorCorrection> fec, ::webrtc::Clock* clock);

    MCNAPI void* $ctor(int red_payload_type, int ulpfec_payload_type, ::webrtc::Clock* clock);
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

    MCNAPI uint64 $MaxPacketOverhead() const;

    MCNAPI ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> $GetFecPackets();

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
