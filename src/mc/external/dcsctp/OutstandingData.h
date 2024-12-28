#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/SackChunk.h"
#include "mc/external/dcsctp/UnwrappedSequenceNumber.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class ForwardTsnChunk; }
namespace dcsctp { class IForwardTsnChunk; }
namespace dcsctp { class LifecycleId; }
namespace dcsctp { class MaxRetransmits; }
namespace dcsctp { class OutgoingMessageIdTag; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { struct Data; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace dcsctp {

struct OutstandingData {
public:
    // OutstandingData inner types declare
    // clang-format off
    struct AckInfo;
    class Item;
    // clang-format on

    // OutstandingData inner types define
    struct AckInfo {
    public:
        // prevent constructor by default
        AckInfo& operator=(AckInfo const&);
        AckInfo(AckInfo const&);
        AckInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~AckInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    class Item {
    public:
        // Item inner types define
        enum class NackAction : uint {};

    public:
        // prevent constructor by default
        Item& operator=(Item const&);
        Item(Item const&);
        Item();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void Abandon();

        MCAPI void Ack();

        MCAPI Item(
            ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>,
            ::dcsctp::Data,
            ::webrtc::Timestamp,
            ::dcsctp::MaxRetransmits,
            ::webrtc::Timestamp,
            ::dcsctp::LifecycleId
        );

        MCAPI void MarkAsRetransmitted();

        MCAPI ::dcsctp::OutstandingData::Item::NackAction Nack(bool);

        MCAPI bool has_expired(::webrtc::Timestamp) const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>,
            ::dcsctp::Data,
            ::webrtc::Timestamp,
            ::dcsctp::MaxRetransmits,
            ::webrtc::Timestamp,
            ::dcsctp::LifecycleId
        );
        // NOLINTEND
    };

public:
    // prevent constructor by default
    OutstandingData& operator=(OutstandingData const&);
    OutstandingData(OutstandingData const&);
    OutstandingData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AbandonAllFor(::dcsctp::OutstandingData::Item const&);

    MCAPI void
    AckChunk(::dcsctp::OutstandingData::AckInfo&, ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, ::dcsctp::OutstandingData::Item&);

    MCAPI void
    AckGapBlocks(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, ::rtc::ArrayView<::dcsctp::SackChunk::GapAckBlock const>, ::dcsctp::OutstandingData::AckInfo&);

    MCAPI void BeginResetStreams();

    MCAPI ::dcsctp::ForwardTsnChunk CreateForwardTsn() const;

    MCAPI ::dcsctp::IForwardTsnChunk CreateIForwardTsn() const;

    MCAPI void ExpireOutstandingChunks(::webrtc::Timestamp);

    MCAPI ::std::vector<::std::pair<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data>>
    ExtractChunksThatCanFit(
        ::std::set<::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>>&,
        uint64
    );

    MCAPI ::std::vector<::std::pair<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data>>
        GetChunksToBeFastRetransmitted(uint64);

    MCAPI ::std::vector<::std::pair<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data>>
        GetChunksToBeRetransmitted(uint64);

    MCAPI ::dcsctp::OutstandingData::Item const&
        GetItem(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>) const;

    MCAPI ::dcsctp::OutstandingData::Item&
        GetItem(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>);

    MCAPI uint64 GetSerializedChunkSize(::dcsctp::Data const&) const;

    MCAPI ::dcsctp::OutstandingData::AckInfo HandleSack(
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>,
        ::rtc::ArrayView<::dcsctp::SackChunk::GapAckBlock const>,
        bool
    );

    MCAPI ::std::optional<::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>> Insert(
        ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>,
        ::dcsctp::Data const&,
        ::webrtc::Timestamp,
        ::dcsctp::MaxRetransmits,
        ::webrtc::Timestamp,
        ::dcsctp::LifecycleId
    );

    MCAPI ::webrtc::TimeDelta
        MeasureRTT(::webrtc::Timestamp, ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>)
            const;

    MCAPI void NackAll();

    MCAPI void
    NackBetweenAckBlocks(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, ::rtc::ArrayView<::dcsctp::SackChunk::GapAckBlock const>, bool, ::dcsctp::OutstandingData::AckInfo&);

    MCAPI bool NackItem(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, bool, bool);

    MCAPI
    OutstandingData(uint64, ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, ::std::function<bool(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>, ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>)>);

    MCAPI void
    RemoveAcked(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, ::dcsctp::OutstandingData::AckInfo&);

    MCAPI void ResetSequenceNumbers(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>);

    MCAPI bool ShouldSendForwardTsn() const;

    MCAPI ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>
    highest_outstanding_tsn() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
        $ctor(uint64, ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, ::std::function<bool(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>, ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>)>);
    // NOLINTEND
};

} // namespace dcsctp
