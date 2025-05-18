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
        // member functions
        // NOLINTBEGIN
        MCNAPI ~AckInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class Item {
    public:
        // Item inner types define
        enum class NackAction : uint {};

    public:
        // prevent constructor by default
        Item();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void Abandon();

        MCNAPI void Ack();

        MCNAPI Item(
            ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>,
            ::dcsctp::Data,
            ::webrtc::Timestamp,
            ::dcsctp::MaxRetransmits,
            ::webrtc::Timestamp,
            ::dcsctp::LifecycleId
        );

        MCNAPI void MarkAsRetransmitted();

        MCNAPI ::dcsctp::OutstandingData::Item::NackAction Nack(bool);

        MCNAPI bool has_expired(::webrtc::Timestamp) const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
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
    OutstandingData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AbandonAllFor(::dcsctp::OutstandingData::Item const&);

    MCNAPI void
    AckChunk(::dcsctp::OutstandingData::AckInfo&, ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, ::dcsctp::OutstandingData::Item&);

    MCNAPI void
    AckGapBlocks(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, ::rtc::ArrayView<::dcsctp::SackChunk::GapAckBlock const>, ::dcsctp::OutstandingData::AckInfo&);

    MCNAPI void BeginResetStreams();

    MCNAPI ::dcsctp::ForwardTsnChunk CreateForwardTsn() const;

    MCNAPI ::dcsctp::IForwardTsnChunk CreateIForwardTsn() const;

    MCNAPI void ExpireOutstandingChunks(::webrtc::Timestamp);

    MCNAPI ::std::vector<::std::pair<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data>>
    ExtractChunksThatCanFit(
        ::std::set<::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>>&,
        uint64
    );

    MCNAPI ::std::vector<::std::pair<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data>>
        GetChunksToBeFastRetransmitted(uint64);

    MCNAPI ::std::vector<::std::pair<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data>>
        GetChunksToBeRetransmitted(uint64);

    MCNAPI ::dcsctp::OutstandingData::Item const&
        GetItem(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>) const;

    MCNAPI ::dcsctp::OutstandingData::Item&
        GetItem(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>);

    MCNAPI uint64 GetSerializedChunkSize(::dcsctp::Data const&) const;

    MCNAPI ::dcsctp::OutstandingData::AckInfo HandleSack(
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>,
        ::rtc::ArrayView<::dcsctp::SackChunk::GapAckBlock const>,
        bool
    );

    MCNAPI ::std::optional<::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>> Insert(
        ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>,
        ::dcsctp::Data const&,
        ::webrtc::Timestamp,
        ::dcsctp::MaxRetransmits,
        ::webrtc::Timestamp,
        ::dcsctp::LifecycleId
    );

    MCNAPI ::webrtc::TimeDelta
        MeasureRTT(::webrtc::Timestamp, ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>)
            const;

    MCNAPI void NackAll();

    MCNAPI void
    NackBetweenAckBlocks(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, ::rtc::ArrayView<::dcsctp::SackChunk::GapAckBlock const>, bool, ::dcsctp::OutstandingData::AckInfo&);

    MCNAPI bool NackItem(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, bool, bool);

    MCNAPI
    OutstandingData(uint64, ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, ::std::function<bool(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>, ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>)>);

    MCNAPI void
    RemoveAcked(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, ::dcsctp::OutstandingData::AckInfo&);

    MCNAPI void ResetSequenceNumbers(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>);

    MCNAPI bool ShouldSendForwardTsn() const;

    MCNAPI ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>
    highest_outstanding_tsn() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(uint64, ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>, ::std::function<bool(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>, ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>)>);
    // NOLINTEND
};

} // namespace dcsctp
