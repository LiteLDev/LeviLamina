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

class OutstandingData {
public:
    // OutstandingData inner types declare
    // clang-format off
    struct AckInfo;
    class Item;
    // clang-format on

    // OutstandingData inner types define
    enum class State : int {
        KInFlight          = 0,
        KNacked            = 1,
        KToBeRetransmitted = 2,
        KAcked             = 3,
        KAbandoned         = 4,
    };

    struct AckInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk88ded0;
        ::ll::UntypedStorage<1, 1>  mUnk5d55e4;
        ::ll::UntypedStorage<8, 8>  mUnk1050ff;
        ::ll::UntypedStorage<8, 24> mUnkcff066;
        ::ll::UntypedStorage<8, 24> mUnka69143;
        // NOLINTEND

    public:
        // prevent constructor by default
        AckInfo& operator=(AckInfo const&);
        AckInfo(AckInfo const&);
        AckInfo();

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
        enum class NackAction : int {
            KNothing    = 0,
            KRetransmit = 1,
            KAbandon    = 2,
        };

        enum class Lifecycle : uchar {
            KActive            = 0,
            KToBeRetransmitted = 1,
            KAbandoned         = 2,
        };

        enum class AckState : uchar {
            KUnacked = 0,
            KAcked   = 1,
            KNacked  = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkdbfdd2;
        ::ll::UntypedStorage<8, 8>  mUnk45a00b;
        ::ll::UntypedStorage<2, 2>  mUnk238c57;
        ::ll::UntypedStorage<1, 1>  mUnk2fade3;
        ::ll::UntypedStorage<1, 1>  mUnk5cefd9;
        ::ll::UntypedStorage<1, 1>  mUnkc5ddfc;
        ::ll::UntypedStorage<2, 2>  mUnkfe576f;
        ::ll::UntypedStorage<8, 8>  mUnk9c8b55;
        ::ll::UntypedStorage<8, 8>  mUnk49856c;
        ::ll::UntypedStorage<8, 48> mUnk95b183;
        // NOLINTEND

    public:
        // prevent constructor by default
        Item& operator=(Item const&);
        Item(Item const&);
        Item();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void Abandon();

        MCNAPI void Ack();

        MCNAPI Item(
            ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint> message_id,
            ::dcsctp::Data                                              data,
            ::webrtc::Timestamp                                         time_sent,
            ::dcsctp::MaxRetransmits                                    max_retransmissions,
            ::webrtc::Timestamp                                         expires_at,
            ::dcsctp::LifecycleId                                       lifecycle_id
        );

        MCNAPI void MarkAsRetransmitted();

        MCNAPI ::dcsctp::OutstandingData::Item::NackAction Nack(bool retransmit_now);

        MCNAPI bool has_expired(::webrtc::Timestamp now) const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint> message_id,
            ::dcsctp::Data                                              data,
            ::webrtc::Timestamp                                         time_sent,
            ::dcsctp::MaxRetransmits                                    max_retransmissions,
            ::webrtc::Timestamp                                         expires_at,
            ::dcsctp::LifecycleId                                       lifecycle_id
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke5dd84;
    ::ll::UntypedStorage<8, 8>  mUnk849e33;
    ::ll::UntypedStorage<8, 64> mUnk4bf94e;
    ::ll::UntypedStorage<8, 40> mUnkce97af;
    ::ll::UntypedStorage<8, 8>  mUnk52c843;
    ::ll::UntypedStorage<8, 8>  mUnk474306;
    ::ll::UntypedStorage<8, 16> mUnk75dd8d;
    ::ll::UntypedStorage<8, 16> mUnk5b7852;
    ::ll::UntypedStorage<8, 32> mUnka85e28;
    // NOLINTEND

public:
    // prevent constructor by default
    OutstandingData& operator=(OutstandingData const&);
    OutstandingData(OutstandingData const&);
    OutstandingData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AbandonAllFor(::dcsctp::OutstandingData::Item const& item);

    MCNAPI void AckChunk(
        ::dcsctp::OutstandingData::AckInfo&                                              ack_info,
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> tsn,
        ::dcsctp::OutstandingData::Item&                                                 item
    );

    MCNAPI void AckGapBlocks(
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> cumulative_tsn_ack,
        ::rtc::ArrayView<::dcsctp::SackChunk::GapAckBlock const>                         gap_ack_blocks,
        ::dcsctp::OutstandingData::AckInfo&                                              ack_info
    );

    MCNAPI void BeginResetStreams();

    MCNAPI ::dcsctp::ForwardTsnChunk CreateForwardTsn() const;

    MCNAPI ::dcsctp::IForwardTsnChunk CreateIForwardTsn() const;

    MCNAPI void ExpireOutstandingChunks(::webrtc::Timestamp now);

    MCNAPI ::std::vector<::std::pair<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data>>
    ExtractChunksThatCanFit(
        ::std::set<::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>>& chunks,
        uint64                                                                                        max_size
    );

    MCNAPI ::std::vector<::std::pair<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data>>
    GetChunksToBeFastRetransmitted(uint64 max_size);

    MCNAPI ::std::vector<::std::pair<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data>>
    GetChunksToBeRetransmitted(uint64 max_size);

    MCNAPI ::dcsctp::OutstandingData::Item const&
        GetItem(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>) const;

    MCNAPI ::dcsctp::OutstandingData::Item&
    GetItem(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> tsn);

    MCNAPI uint64 GetSerializedChunkSize(::dcsctp::Data const& data) const;

    MCNAPI ::dcsctp::OutstandingData::AckInfo HandleSack(
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> cumulative_tsn_ack,
        ::rtc::ArrayView<::dcsctp::SackChunk::GapAckBlock const>                         gap_ack_blocks,
        bool                                                                             is_in_fast_recovery
    );

    MCNAPI ::std::optional<::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>> Insert(
        ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint> message_id,
        ::dcsctp::Data const&                                       data,
        ::webrtc::Timestamp                                         time_sent,
        ::dcsctp::MaxRetransmits                                    max_retransmissions,
        ::webrtc::Timestamp                                         expires_at,
        ::dcsctp::LifecycleId                                       lifecycle_id
    );

    MCNAPI ::webrtc::TimeDelta MeasureRTT(
        ::webrtc::Timestamp                                                              now,
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> tsn
    ) const;

    MCNAPI void NackAll();

    MCNAPI void NackBetweenAckBlocks(
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> cumulative_tsn_ack,
        ::rtc::ArrayView<::dcsctp::SackChunk::GapAckBlock const>                         gap_ack_blocks,
        bool                                                                             is_in_fast_recovery,
        ::dcsctp::OutstandingData::AckInfo&                                              ack_info
    );

    MCNAPI bool NackItem(
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> tsn,
        bool                                                                             retransmit_now,
        bool                                                                             do_fast_retransmit
    );

    MCNAPI OutstandingData(
        uint64                                                                           data_chunk_header_size,
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> last_cumulative_tsn_ack,
        ::std::function<bool(
            ::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>,
            ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>
        )>                                                                               discard_from_send_queue
    );

    MCNAPI void RemoveAcked(
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> cumulative_tsn_ack,
        ::dcsctp::OutstandingData::AckInfo&                                              ack_info
    );

    MCNAPI void ResetSequenceNumbers(
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> last_cumulative_tsn
    );

    MCNAPI bool ShouldSendForwardTsn() const;

    MCNAPI ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>
    highest_outstanding_tsn() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        uint64                                                                           data_chunk_header_size,
        ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> last_cumulative_tsn_ack,
        ::std::function<bool(
            ::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>,
            ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>
        )>                                                                               discard_from_send_queue
    );
    // NOLINTEND
};

} // namespace dcsctp
