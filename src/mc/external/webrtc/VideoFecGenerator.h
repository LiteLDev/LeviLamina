#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { struct FecProtectionParams; }
namespace webrtc { struct RtpState; }
// clang-format on

namespace webrtc {

class VideoFecGenerator {
public:
    // VideoFecGenerator inner types define
    enum class FecType : int {
        KFlexFec = 0,
        KUlpFec  = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VideoFecGenerator() = default;

    virtual ::webrtc::VideoFecGenerator::FecType GetFecType() const = 0;

    virtual ::std::optional<uint> FecSsrc() = 0;

    virtual uint64 MaxPacketOverhead() const = 0;

    virtual ::webrtc::DataRate CurrentFecRate() const = 0;

    virtual void
    SetProtectionParameters(::webrtc::FecProtectionParams const&, ::webrtc::FecProtectionParams const&) = 0;

    virtual void AddPacketAndGenerateFec(::webrtc::RtpPacketToSend const&) = 0;

    virtual ::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> GetFecPackets() = 0;

    virtual ::std::optional<::webrtc::RtpState> GetRtpState() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
