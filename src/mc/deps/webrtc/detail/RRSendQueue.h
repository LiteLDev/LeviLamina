#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/detail/DcSctpSocketHandoverState.h"
#include "mc/deps/webrtc/detail/SendQueue.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class DcSctpSocketCallbacks; }
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class IsUnorderedTag; }
namespace dcsctp { class MIDTag; }
namespace dcsctp { class SendQueue; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class StreamPriorityTag; }
namespace dcsctp { class StreamScheduler; }
namespace dcsctp { class TimeMs; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
namespace dcsctp { struct SendOptions; }
// clang-format on

namespace dcsctp {

class RRSendQueue : public ::dcsctp::SendQueue {
public:
    // RRSendQueue inner types declare
    // clang-format off
    struct MessageAttributes;
    class OutgoingStream;
    class ThresholdWatcher;
    // clang-format on

    // RRSendQueue inner types define
    struct MessageAttributes {
    public:
        // prevent constructor by default
        MessageAttributes& operator=(MessageAttributes const&);
        MessageAttributes(MessageAttributes const&);
        MessageAttributes();
    };

    class OutgoingStream {
    public:
        // OutgoingStream inner types declare
        // clang-format off
        struct Item;
        // clang-format on

        // OutgoingStream inner types define
        struct Item {
        public:
            // prevent constructor by default
            Item& operator=(Item const&);
            Item(Item const&);
            Item();
        };

    public:
        // prevent constructor by default
        OutgoingStream& operator=(OutgoingStream const&);
        OutgoingStream(OutgoingStream const&);
        OutgoingStream();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1OutgoingStream@RRSendQueue@dcsctp@@UEAA@XZ
        virtual ~OutgoingStream();

        // vIndex: 1, symbol:
        // ?Produce@OutgoingStream@RRSendQueue@dcsctp@@UEAA?AV?$optional@UDataToSend@SendQueue@dcsctp@@@std@@VTimeMs@3@_K@Z
        virtual std::optional<struct dcsctp::SendQueue::DataToSend> Produce(class dcsctp::TimeMs, uint64);

        // vIndex: 2, symbol: ?bytes_to_send_in_next_message@OutgoingStream@RRSendQueue@dcsctp@@UEBA_KXZ
        virtual uint64 bytes_to_send_in_next_message() const;

        // symbol: ?Add@OutgoingStream@RRSendQueue@dcsctp@@QEAAXVDcSctpMessage@3@UMessageAttributes@23@@Z
        MCAPI void Add(class dcsctp::DcSctpMessage, struct dcsctp::RRSendQueue::MessageAttributes);

        // symbol: ?AddHandoverState@OutgoingStream@RRSendQueue@dcsctp@@QEBAXAEAU1DcSctpSocketHandoverState@3@@Z
        MCAPI void AddHandoverState(struct dcsctp::DcSctpSocketHandoverState::OutgoingStream&) const;

        // symbol:
        // ?Discard@OutgoingStream@RRSendQueue@dcsctp@@QEAA_NV?$StrongAlias@VIsUnorderedTag@dcsctp@@_N@webrtc@@V?$StrongAlias@VMIDTag@dcsctp@@I@5@@Z
        MCAPI bool
            Discard(class webrtc::StrongAlias<class dcsctp::IsUnorderedTag, bool>, class webrtc::StrongAlias<class dcsctp::MIDTag, uint>);

        // symbol:
        // ??0OutgoingStream@RRSendQueue@dcsctp@@QEAA@PEAV12@PEAVStreamScheduler@2@V?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@V?$StrongAlias@VStreamPriorityTag@dcsctp@@G@5@V?$function@$$A6AXXZ@std@@PEBU0DcSctpSocketHandoverState@2@@Z
        MCAPI
        OutgoingStream(class dcsctp::RRSendQueue*, class dcsctp::StreamScheduler*, class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>, class webrtc::StrongAlias<class dcsctp::StreamPriorityTag, ushort>, std::function<void(void)>, struct dcsctp::DcSctpSocketHandoverState::OutgoingStream const*);

        // symbol: ?Pause@OutgoingStream@RRSendQueue@dcsctp@@QEAAXXZ
        MCAPI void Pause();

        // symbol: ?Reset@OutgoingStream@RRSendQueue@dcsctp@@QEAAXXZ
        MCAPI void Reset();

        // symbol: ?Resume@OutgoingStream@RRSendQueue@dcsctp@@QEAAXXZ
        MCAPI void Resume();

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol: ?HandleMessageExpired@OutgoingStream@RRSendQueue@dcsctp@@AEAAXAEAUItem@123@@Z
        MCAPI void HandleMessageExpired(struct dcsctp::RRSendQueue::OutgoingStream::Item&);

        // NOLINTEND
    };

    class ThresholdWatcher {
    public:
        // prevent constructor by default
        ThresholdWatcher& operator=(ThresholdWatcher const&);
        ThresholdWatcher(ThresholdWatcher const&);
        ThresholdWatcher();

    public:
        // NOLINTBEGIN
        // symbol: ?Decrease@ThresholdWatcher@RRSendQueue@dcsctp@@QEAAX_K@Z
        MCAPI void Decrease(uint64);

        // symbol: ?SetLowThreshold@ThresholdWatcher@RRSendQueue@dcsctp@@QEAAX_K@Z
        MCAPI void SetLowThreshold(uint64);

        // symbol: ??0ThresholdWatcher@RRSendQueue@dcsctp@@QEAA@V?$function@$$A6AXXZ@std@@@Z
        MCAPI explicit ThresholdWatcher(std::function<void(void)>);

        // symbol: ??1ThresholdWatcher@RRSendQueue@dcsctp@@QEAA@XZ
        MCAPI ~ThresholdWatcher();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RRSendQueue& operator=(RRSendQueue const&);
    RRSendQueue(RRSendQueue const&);
    RRSendQueue();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RRSendQueue@dcsctp@@UEAA@XZ
    virtual ~RRSendQueue();

    // vIndex: 1, symbol:
    // ?Produce@RRSendQueue@dcsctp@@UEAA?AV?$optional@UDataToSend@SendQueue@dcsctp@@@std@@VTimeMs@2@_K@Z
    virtual std::optional<struct dcsctp::SendQueue::DataToSend> Produce(class dcsctp::TimeMs, uint64);

    // vIndex: 2, symbol:
    // ?Discard@RRSendQueue@dcsctp@@UEAA_NV?$StrongAlias@VIsUnorderedTag@dcsctp@@_N@webrtc@@V?$StrongAlias@VStreamIDTag@dcsctp@@G@4@V?$StrongAlias@VMIDTag@dcsctp@@I@4@@Z
    virtual bool
        Discard(class webrtc::StrongAlias<class dcsctp::IsUnorderedTag, bool>, class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>, class webrtc::StrongAlias<class dcsctp::MIDTag, uint>);

    // vIndex: 3, symbol: ?PrepareResetStream@RRSendQueue@dcsctp@@UEAAXV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@@Z
    virtual void PrepareResetStream(class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>);

    // vIndex: 4, symbol: ?HasStreamsReadyToBeReset@RRSendQueue@dcsctp@@UEBA_NXZ
    virtual bool HasStreamsReadyToBeReset() const;

    // vIndex: 5, symbol:
    // ?GetStreamsReadyToBeReset@RRSendQueue@dcsctp@@UEAA?AV?$vector@V?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@V?$allocator@V?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@@std@@@std@@XZ
    virtual std::vector<class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>> GetStreamsReadyToBeReset();

    // vIndex: 6, symbol: ?CommitResetStreams@RRSendQueue@dcsctp@@UEAAXXZ
    virtual void CommitResetStreams();

    // vIndex: 7, symbol: ?RollbackResetStreams@RRSendQueue@dcsctp@@UEAAXXZ
    virtual void RollbackResetStreams();

    // vIndex: 8, symbol: ?Reset@RRSendQueue@dcsctp@@UEAAXXZ
    virtual void Reset();

    // vIndex: 9, symbol: ?buffered_amount@RRSendQueue@dcsctp@@UEBA_KV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@@Z
    virtual uint64 buffered_amount(class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>) const;

    // vIndex: 10, symbol: ?total_buffered_amount@RRSendQueue@dcsctp@@UEBA_KXZ
    virtual uint64 total_buffered_amount() const;

    // vIndex: 11, symbol:
    // ?buffered_amount_low_threshold@RRSendQueue@dcsctp@@UEBA_KV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@@Z
    virtual uint64 buffered_amount_low_threshold(class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>) const;

    // vIndex: 12, symbol:
    // ?SetBufferedAmountLowThreshold@RRSendQueue@dcsctp@@UEAAXV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@_K@Z
    virtual void SetBufferedAmountLowThreshold(class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>, uint64);

    // vIndex: 13, symbol: ?EnableMessageInterleaving@RRSendQueue@dcsctp@@UEAAX_N@Z
    virtual void EnableMessageInterleaving(bool);

    // symbol: ?Add@RRSendQueue@dcsctp@@QEAAXVTimeMs@2@VDcSctpMessage@2@AEBUSendOptions@2@@Z
    MCAPI void Add(class dcsctp::TimeMs, class dcsctp::DcSctpMessage, struct dcsctp::SendOptions const&);

    // symbol: ?AddHandoverState@RRSendQueue@dcsctp@@QEAAXAEAUDcSctpSocketHandoverState@2@@Z
    MCAPI void AddHandoverState(struct dcsctp::DcSctpSocketHandoverState&);

    // symbol: ?GetHandoverReadiness@RRSendQueue@dcsctp@@QEBA?AVHandoverReadinessStatus@2@XZ
    MCAPI class dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    // symbol:
    // ?GetStreamPriority@RRSendQueue@dcsctp@@QEBA?AV?$StrongAlias@VStreamPriorityTag@dcsctp@@G@webrtc@@V?$StrongAlias@VStreamIDTag@dcsctp@@G@4@@Z
    MCAPI class webrtc::StrongAlias<class dcsctp::StreamPriorityTag, ushort>
        GetStreamPriority(class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>) const;

    // symbol: ?IsEmpty@RRSendQueue@dcsctp@@QEBA_NXZ
    MCAPI bool IsEmpty() const;

    // symbol: ?IsFull@RRSendQueue@dcsctp@@QEBA_NXZ
    MCAPI bool IsFull() const;

    // symbol:
    // ??0RRSendQueue@dcsctp@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAVDcSctpSocketCallbacks@1@_K2V?$StrongAlias@VStreamPriorityTag@dcsctp@@G@webrtc@@2@Z
    MCAPI RRSendQueue(
        std::string_view,
        class dcsctp::DcSctpSocketCallbacks*,
        uint64,
        uint64,
        class webrtc::StrongAlias<class dcsctp::StreamPriorityTag, ushort>,
        uint64
    );

    // symbol: ?RestoreFromState@RRSendQueue@dcsctp@@QEAAXAEBUDcSctpSocketHandoverState@2@@Z
    MCAPI void RestoreFromState(struct dcsctp::DcSctpSocketHandoverState const&);

    // symbol:
    // ?SetStreamPriority@RRSendQueue@dcsctp@@QEAAXV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@V?$StrongAlias@VStreamPriorityTag@dcsctp@@G@4@@Z
    MCAPI void
        SetStreamPriority(class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>, class webrtc::StrongAlias<class dcsctp::StreamPriorityTag, ushort>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?GetOrCreateStreamInfo@RRSendQueue@dcsctp@@AEAAAEAVOutgoingStream@12@V?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@@Z
    MCAPI class dcsctp::RRSendQueue::OutgoingStream&
        GetOrCreateStreamInfo(class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>);

    // NOLINTEND
};

}; // namespace dcsctp
