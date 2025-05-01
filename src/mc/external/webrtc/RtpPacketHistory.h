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
    enum class PaddingMode : uint {};

    enum class StorageMode : uint {};

    struct MoreUseful {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool
        operator()(::webrtc::RtpPacketHistory::StoredPacket*, ::webrtc::RtpPacketHistory::StoredPacket*) const;
        // NOLINTEND
    };

    class StoredPacket {
    public:
        // prevent constructor by default
        StoredPacket& operator=(StoredPacket const&);
        StoredPacket(StoredPacket const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void IncrementTimesRetransmitted(::std::set<
                                                ::webrtc::RtpPacketHistory::StoredPacket*,
                                                ::webrtc::RtpPacketHistory::MoreUseful>*);

        MCNAPI StoredPacket(::std::unique_ptr<::webrtc::RtpPacketToSend>, ::webrtc::Timestamp, uint64);

        MCNAPI ::webrtc::RtpPacketHistory::StoredPacket& operator=(::webrtc::RtpPacketHistory::StoredPacket&&);

        MCNAPI ~StoredPacket();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::std::unique_ptr<::webrtc::RtpPacketToSend>, ::webrtc::Timestamp, uint64);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Clear();

    MCNAPI void CullAcknowledgedPackets(::rtc::ArrayView<ushort const>);

    MCNAPI void CullOldPackets();

    MCNAPI ::std::unique_ptr<::webrtc::RtpPacketToSend>
        GetPacketAndMarkAsPending(ushort, ::rtc::FunctionView<::std::unique_ptr<::webrtc::RtpPacketToSend>(::webrtc::RtpPacketToSend const&)>);

    MCNAPI int GetPacketIndex(ushort) const;

    MCNAPI ::std::unique_ptr<::webrtc::RtpPacketToSend>
        GetPayloadPaddingPacket(::rtc::FunctionView<
                                ::std::unique_ptr<::webrtc::RtpPacketToSend>(::webrtc::RtpPacketToSend const&)>);

    MCNAPI ::webrtc::RtpPacketHistory::StorageMode GetStorageMode() const;

    MCNAPI ::webrtc::RtpPacketHistory::StoredPacket* GetStoredPacket(ushort);

    MCNAPI void MarkPacketAsSent(ushort);

    MCNAPI void PutRtpPacket(::std::unique_ptr<::webrtc::RtpPacketToSend>, ::webrtc::Timestamp);

    MCNAPI ::std::unique_ptr<::webrtc::RtpPacketToSend> RemovePacket(int);

    MCNAPI void Reset();

    MCNAPI RtpPacketHistory(::webrtc::Clock*, ::webrtc::RtpPacketHistory::PaddingMode);

    MCNAPI void SetRtt(::webrtc::TimeDelta);

    MCNAPI void SetStorePacketsStatus(::webrtc::RtpPacketHistory::StorageMode, uint64);

    MCNAPI bool VerifyRtt(::webrtc::RtpPacketHistory::StoredPacket const&) const;

    MCNAPI bool padding_priority_enabled() const;

    MCNAPI ~RtpPacketHistory();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::webrtc::TimeDelta const& kMinPacketDuration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Clock*, ::webrtc::RtpPacketHistory::PaddingMode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
