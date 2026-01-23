#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RtpPacketHistory {
public:
    // RtpPacketHistory inner types declare
    // clang-format off
    struct MoreUseful;
    class StoredPacket;
    // clang-format on

    // RtpPacketHistory inner types define
    enum class PaddingMode : int {
        KDefault           = 0,
        KPriority          = 1,
        KRecentLargePacket = 2,
    };

    enum class StorageMode : int {
        KDisabled     = 0,
        KStoreAndCull = 1,
    };

    struct MoreUseful {};

    class StoredPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk9e0e0e;
        ::ll::UntypedStorage<1, 1> mUnk20d732;
        ::ll::UntypedStorage<8, 8> mUnkce7bd9;
        ::ll::UntypedStorage<8, 8> mUnkca45d9;
        ::ll::UntypedStorage<8, 8> mUnka324a0;
        // NOLINTEND

    public:
        // prevent constructor by default
        StoredPacket& operator=(StoredPacket const&);
        StoredPacket(StoredPacket const&);
        StoredPacket();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkf11bb5;
    ::ll::UntypedStorage<4, 4>   mUnk161787;
    ::ll::UntypedStorage<8, 40>  mUnk692762;
    ::ll::UntypedStorage<8, 8>   mUnkb2bd65;
    ::ll::UntypedStorage<4, 4>   mUnk484324;
    ::ll::UntypedStorage<8, 8>   mUnk6639d4;
    ::ll::UntypedStorage<8, 40>  mUnk13fef9;
    ::ll::UntypedStorage<8, 8>   mUnkb40ceb;
    ::ll::UntypedStorage<8, 16>  mUnk581190;
    ::ll::UntypedStorage<8, 216> mUnk597307;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpPacketHistory& operator=(RtpPacketHistory const&);
    RtpPacketHistory(RtpPacketHistory const&);
    RtpPacketHistory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Clear();

    MCNAPI void CullAcknowledgedPackets(::rtc::ArrayView<ushort const> sequence_numbers);

    MCNAPI void CullOldPackets();

    MCNAPI ::std::unique_ptr<::webrtc::RtpPacketToSend> GetPacketAndMarkAsPending(
        ushort sequence_number,
        ::rtc::FunctionView<::std::unique_ptr<::webrtc::RtpPacketToSend>(::webrtc::RtpPacketToSend const&)> encapsulate
    );

    MCNAPI int GetPacketIndex(ushort sequence_number) const;

    MCNAPI ::std::unique_ptr<::webrtc::RtpPacketToSend> GetPayloadPaddingPacket(
        ::rtc::FunctionView<::std::unique_ptr<::webrtc::RtpPacketToSend>(::webrtc::RtpPacketToSend const&)> encapsulate
    );

    MCNAPI ::webrtc::RtpPacketHistory::StorageMode GetStorageMode() const;

    MCNAPI void MarkPacketAsSent(ushort sequence_number);

    MCNAPI void PutRtpPacket(::std::unique_ptr<::webrtc::RtpPacketToSend> packet, ::webrtc::Timestamp send_time);

    MCNAPI ::std::unique_ptr<::webrtc::RtpPacketToSend> RemovePacket(int packet_index);

    MCNAPI RtpPacketHistory(::webrtc::Clock* clock, ::webrtc::RtpPacketHistory::PaddingMode padding_mode);

    MCNAPI void SetRtt(::webrtc::TimeDelta rtt);

    MCNAPI void SetStorePacketsStatus(::webrtc::RtpPacketHistory::StorageMode mode, uint64 number_to_store);

    MCNAPI bool VerifyRtt(::webrtc::RtpPacketHistory::StoredPacket const& packet) const;

    MCNAPI ~RtpPacketHistory();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::webrtc::TimeDelta const& kMinPacketDuration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Clock* clock, ::webrtc::RtpPacketHistory::PaddingMode padding_mode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
