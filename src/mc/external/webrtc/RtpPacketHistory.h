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
        MCAPI bool
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
        MCAPI void IncrementTimesRetransmitted(::std::set<
                                               ::webrtc::RtpPacketHistory::StoredPacket*,
                                               ::webrtc::RtpPacketHistory::MoreUseful>*);

        MCAPI StoredPacket(::std::unique_ptr<::webrtc::RtpPacketToSend>, ::webrtc::Timestamp, uint64);

        MCAPI ::webrtc::RtpPacketHistory::StoredPacket& operator=(::webrtc::RtpPacketHistory::StoredPacket&&);

        MCAPI ~StoredPacket();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::unique_ptr<::webrtc::RtpPacketToSend>, ::webrtc::Timestamp, uint64);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Clear();

    MCAPI void CullAcknowledgedPackets(::rtc::ArrayView<ushort const>);

    MCAPI void CullOldPackets();

    MCAPI ::std::unique_ptr<::webrtc::RtpPacketToSend>
        GetPacketAndMarkAsPending(ushort, ::rtc::FunctionView<::std::unique_ptr<::webrtc::RtpPacketToSend>(::webrtc::RtpPacketToSend const&)>);

    MCAPI int GetPacketIndex(ushort) const;

    MCAPI ::std::unique_ptr<::webrtc::RtpPacketToSend>
        GetPayloadPaddingPacket(::rtc::FunctionView<
                                ::std::unique_ptr<::webrtc::RtpPacketToSend>(::webrtc::RtpPacketToSend const&)>);

    MCAPI ::webrtc::RtpPacketHistory::StorageMode GetStorageMode() const;

    MCAPI ::webrtc::RtpPacketHistory::StoredPacket* GetStoredPacket(ushort);

    MCAPI void MarkPacketAsSent(ushort);

    MCAPI void PutRtpPacket(::std::unique_ptr<::webrtc::RtpPacketToSend>, ::webrtc::Timestamp);

    MCAPI ::std::unique_ptr<::webrtc::RtpPacketToSend> RemovePacket(int);

    MCAPI void Reset();

    MCAPI RtpPacketHistory(::webrtc::Clock*, ::webrtc::RtpPacketHistory::PaddingMode);

    MCAPI void SetRtt(::webrtc::TimeDelta);

    MCAPI void SetStorePacketsStatus(::webrtc::RtpPacketHistory::StorageMode, uint64);

    MCAPI bool VerifyRtt(::webrtc::RtpPacketHistory::StoredPacket const&) const;

    MCAPI bool padding_priority_enabled() const;

    MCAPI ~RtpPacketHistory();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::webrtc::TimeDelta const& kMinPacketDuration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::Clock*, ::webrtc::RtpPacketHistory::PaddingMode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
