#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/FunctionView.h"

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
    class StoredPacket;
    struct MoreUseful;
    // clang-format on

    // RtpPacketHistory inner types define
    enum class StorageMode {};

    class StoredPacket {
    public:
        // prevent constructor by default
        StoredPacket& operator=(StoredPacket const&);
        StoredPacket(StoredPacket const&);
        StoredPacket();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?IncrementTimesRetransmitted@StoredPacket@RtpPacketHistory@webrtc@@QEAAXPEAV?$set@PEAVStoredPacket@RtpPacketHistory@webrtc@@UMoreUseful@23@V?$allocator@PEAVStoredPacket@RtpPacketHistory@webrtc@@@std@@@std@@@Z
        MCAPI void IncrementTimesRetransmitted(std::set<
                                               class webrtc::RtpPacketHistory::StoredPacket*,
                                               struct webrtc::RtpPacketHistory::MoreUseful,
                                               std::allocator<class webrtc::RtpPacketHistory::StoredPacket*>>*);

        // symbol:
        // ??0StoredPacket@RtpPacketHistory@webrtc@@QEAA@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@VTimestamp@2@_K@Z
        MCAPI StoredPacket(std::unique_ptr<class webrtc::RtpPacketToSend>, class webrtc::Timestamp, uint64);

        // symbol: ??4StoredPacket@RtpPacketHistory@webrtc@@QEAAAEAV012@$$QEAV012@@Z
        MCAPI class webrtc::RtpPacketHistory::StoredPacket& operator=(class webrtc::RtpPacketHistory::StoredPacket&&);

        // symbol: ??1StoredPacket@RtpPacketHistory@webrtc@@QEAA@XZ
        MCAPI ~StoredPacket();

        // NOLINTEND
    };

    struct MoreUseful {
    public:
        // prevent constructor by default
        MoreUseful& operator=(MoreUseful const&);
        MoreUseful(MoreUseful const&);
        MoreUseful();

    public:
        // NOLINTBEGIN
        // symbol: ??RMoreUseful@RtpPacketHistory@webrtc@@QEBA_NPEAVStoredPacket@12@0@Z
        MCAPI bool
        operator()(class webrtc::RtpPacketHistory::StoredPacket*, class webrtc::RtpPacketHistory::StoredPacket*) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RtpPacketHistory& operator=(RtpPacketHistory const&);
    RtpPacketHistory(RtpPacketHistory const&);
    RtpPacketHistory();

public:
    // NOLINTBEGIN
    // symbol: ?Clear@RtpPacketHistory@webrtc@@QEAAXXZ
    MCAPI void Clear();

    // symbol: ?CullAcknowledgedPackets@RtpPacketHistory@webrtc@@QEAAXV?$ArrayView@$$CBG$0?BCGH@@rtc@@@Z
    MCAPI void CullAcknowledgedPackets(class rtc::ArrayView<ushort const, -4711>);

    // symbol:
    // ?GetPacketAndMarkAsPending@RtpPacketHistory@webrtc@@QEAA?AV?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@GV?$FunctionView@$$A6A?AV?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@AEBVRtpPacketToSend@webrtc@@@Z@rtc@@@Z
    MCAPI std::unique_ptr<class webrtc::RtpPacketToSend>
        GetPacketAndMarkAsPending(ushort, class rtc::FunctionView<std::unique_ptr<class webrtc::RtpPacketToSend>(class webrtc::RtpPacketToSend const&)>);

    // symbol:
    // ?GetPayloadPaddingPacket@RtpPacketHistory@webrtc@@QEAA?AV?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@V?$FunctionView@$$A6A?AV?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@AEBVRtpPacketToSend@webrtc@@@Z@rtc@@@Z
    MCAPI std::unique_ptr<class webrtc::RtpPacketToSend>
          GetPayloadPaddingPacket(class rtc::FunctionView<
                                std::unique_ptr<class webrtc::RtpPacketToSend>(class webrtc::RtpPacketToSend const&)>);

    // symbol: ?GetStorageMode@RtpPacketHistory@webrtc@@QEBA?AW4StorageMode@12@XZ
    MCAPI ::webrtc::RtpPacketHistory::StorageMode GetStorageMode() const;

    // symbol: ?MarkPacketAsSent@RtpPacketHistory@webrtc@@QEAAXG@Z
    MCAPI void MarkPacketAsSent(ushort);

    // symbol:
    // ?PutRtpPacket@RtpPacketHistory@webrtc@@QEAAXV?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@VTimestamp@2@@Z
    MCAPI void PutRtpPacket(std::unique_ptr<class webrtc::RtpPacketToSend>, class webrtc::Timestamp);

    // symbol: ??0RtpPacketHistory@webrtc@@QEAA@PEAVClock@1@_N@Z
    MCAPI RtpPacketHistory(class webrtc::Clock*, bool);

    // symbol: ?SetRtt@RtpPacketHistory@webrtc@@QEAAXVTimeDelta@2@@Z
    MCAPI void SetRtt(class webrtc::TimeDelta);

    // symbol: ?SetStorePacketsStatus@RtpPacketHistory@webrtc@@QEAAXW4StorageMode@12@_K@Z
    MCAPI void SetStorePacketsStatus(::webrtc::RtpPacketHistory::StorageMode, uint64);

    // symbol: ??1RtpPacketHistory@webrtc@@QEAA@XZ
    MCAPI ~RtpPacketHistory();

    // symbol: ?kMinPacketDuration@RtpPacketHistory@webrtc@@2VTimeDelta@2@B
    MCAPI static class webrtc::TimeDelta const kMinPacketDuration;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?CullOldPackets@RtpPacketHistory@webrtc@@AEAAXXZ
    MCAPI void CullOldPackets();

    // symbol: ?GetPacketIndex@RtpPacketHistory@webrtc@@AEBAHG@Z
    MCAPI int GetPacketIndex(ushort) const;

    // symbol: ?GetStoredPacket@RtpPacketHistory@webrtc@@AEAAPEAVStoredPacket@12@G@Z
    MCAPI class webrtc::RtpPacketHistory::StoredPacket* GetStoredPacket(ushort);

    // symbol:
    // ?RemovePacket@RtpPacketHistory@webrtc@@AEAA?AV?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@H@Z
    MCAPI std::unique_ptr<class webrtc::RtpPacketToSend> RemovePacket(int);

    // symbol: ?Reset@RtpPacketHistory@webrtc@@AEAAXXZ
    MCAPI void Reset();

    // symbol: ?VerifyRtt@RtpPacketHistory@webrtc@@AEBA_NAEBVStoredPacket@12@@Z
    MCAPI bool VerifyRtt(class webrtc::RtpPacketHistory::StoredPacket const&) const;

    // NOLINTEND
};

}; // namespace webrtc
